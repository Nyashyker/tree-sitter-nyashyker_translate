/**
 * @file The translation writing standart made by Nyashyker for Nyashyker in consultation with his translators.
 * @author Nyashyker <nyashyker@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nyashyker_translate",

  rules: {
    source_file: $ => seq(
      optional($._work),
      optional($.comment),
      repeat($._credits),
      optional($.comment),
      repeat1($.part),
      optional($.comment)
    ),

    comment: $ => /=.*\n/,


    // Твір
    _work: $ => seq(
      $.name,
      optional($.comment),
      $.link
    ),

    name: $ => /#.*\n/,
    link: $ => /#https:\/\/[a-zA-Z0-9\._\-\/]+\n/,


    // Діло робили
    _credits: $ => seq(
      $.credit,
      optional($.comment)
    ),

    credit: $ => seq("#",$.role,":",$.persons),

    role: $ => choice(
      "Перекладав",
      "Редагував",
      "Клінив",
      "Тайпив",
      "Обкладинка"
    ),

    persons: $ => seq(
      $.person,
      repeat(seq(",",$.person)),
      "\n"
    ),
    person: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,


    // Структоризований переклад
    part: $ => prec.left(seq(
      optional($.part_number),
      optional($.comment),
      repeat1($.page)
    )),

    part_number: $ => /=== \d+ ===\n/,

    page: $ => seq(
      $.page_number,
      repeat(
        choice(
          $.comment,
          $.sound,
          $.separator,
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

    text: $ => /([^\n\=].?\n)|([^\n=-].*[^\n*][^\n\d]\n)/,
    sound: $ => /.*\*\d+\n/,
    separator: $ => /---\n/,
  }
});

