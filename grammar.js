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
      repeat($.credit),
      repeat1($.part)
    ),

    comment: $ => seq(
      "#",
      /.*/,
      "\n"
    ),


    // Твір
    _work: $ => seq(
      $.name,
      $.link
    ),

    name: $ => seq(
      "#",
      /.*/,
      "\n"
    ),

    link: $ => seq(
      "#",
      "https://",
      /[a-zA-Z0-9\._\-\/]+/,
      "\n"
    ),


    // Діло робили
    credit: $ => seq(
      "#",
      $.role,
      ":",
      $.persons
    ),

    role: $ => choice(
      "Перекладав",
      "Редагував",
      "Клінив",
      "Тайпив",
      "Обкладинка"
    ),

    persons: $ => seq(
      $.person,
      repeat(
        seq(
          ",",
          $.person
        )
      ),
      "\n"
    ),
    person: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,


    // Структоризований переклад
    part: $ => prec.left(seq(
      optional($.part_number),
      repeat1($.page)
    )),

    part_number: $ => seq(
      "===",
      /\d+/,
      "===",
      "\n"
    ),

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
      "==",
      /\d+/,
      "==",
      optional($.page_real_number),
      "\n"
    ),
    page_real_number: $ => /\(\d+\)/,

    text: $ => seq(
      choice(
        // 1-2
        /[^\n\=].?/,
        // 3+
        /[^\n\=].*?[^\n\*][^\n\d]/
      ),
      "\n"
    ),
    sound: $ => seq(
      /.*/,
      "*",
      /\d+/,
      "\n"
    ),
    separator: $ => "---\n",
  }
});

