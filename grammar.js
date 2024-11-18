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

    comment: $ => /=[^\n=].*\n/,


    // Твір
    _work: $ => seq(
      $.name,
      optional($.comment),
      $.link
    ),

    name: $ => /#.*\n/,
    link: $ => /#https:\/\/[a-zA-Z0-9\._\-\/]+\n/,


    // Діло робили
    _credits: $ => prec.left(seq(
      $.credit,
      optional($.comment)
    )),

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
      optional(seq(
          $.part_number,
          optional($.comment)
      )),
      repeat1($.page)
    ),

    part_number: $ => /=== \d+ ===\n/,

    page: $ => prec.left(seq(
      $.page_number,
      repeat(
        choice(
          $.comment,
          $.sound,
          $.separator,
          $.text
        )
      )
    )),

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

