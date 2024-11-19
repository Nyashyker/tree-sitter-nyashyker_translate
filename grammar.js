/**
 * @file The translation writing standart made by Nyashyker for Nyashyker in consultation with his translators.
 * @author Nyashyker <nyashyker@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nyashyker_translate",

  extras: $ => [ $.comment ],

  rules: {
    source_file: $ => seq(
      optional($._work),
      repeat($.credit),
      repeat1($.part),
    ),

    comment: $ => /(\n=\n)|(\n=[^\n=].*\n)/,


    // Твір
    _work: $ => seq(
      $.name,
      $.link
    ),

    name: $ => /#.*\n/,
    link: $ => /#https:\/\/[a-zA-Z0-9\._\-\/]+\n/,


    // Діло робили
    credit: $ => seq("#",$.role,":",$.persons,"\n"),

    role: $ => choice(
      "Перекладав",
      "Редагував",
      "Клінив",
      "Тайпив",
      "Обкладинка"
    ),

    persons: $ => seq(
      $.person,
      repeat(seq(",",$.person))
    ),
    person: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,


    // Структоризований переклад
    part: $ => seq(
      $.part_number,
      repeat($.page)
    ),

    part_number: $ => /=== \d+ ===\n/,

    page: $ => seq(
      $.page_number,
      repeat(
        choice(
          $.separator,
          $.sound,
          $.text
        )
      )
    ),

    page_number: $ => seq(
      /== \d+ ==/,
      optional($.page_real_number),
      "\n"
    ),
    page_real_number: $ => /\(\d+\)/,

    text: $ => /([^\n=].?\n)|([^\n=\-].*[^\n\*][^\n\d]+\n)/,
    sound: $ => /.*\*\d+\n/,
    separator: $ => /---\n/,
  }
});

