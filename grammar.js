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
      optional($._credits),
      repeat1($._translate)
    ),

    // Твір
    _work: $ => seq(
      $.name,
      $.link
    ),

    // Діло робили
    _credits: $ => repeat1(
      seq(
        /^/,
        $.work,
        ":",
        $.workers
      )
    ),

    // Структоризований переклад
    _translate: $ => seq(
      optional($.part),
      repeat1($.page)
    ),

    name: $ => seq(
      /^/,
      "#",
      /.*/,
      /$/
    ),

    link: $ => seq(
      /^/,
      "#",
      "https://",
      /[a-zA-Z0-9\._\-\/]+/,
      /$/
    ),


    work: $ => choice(
      "Перекладав",
      "Редагував",
      "Клінив",
      "Тайпив",
      "Обкладинка"
    ),

    workers: $ => seq(
      $.worker,
      repeat(
        seq(
          optional(","),
          $.worker
        )
      )
    ),
    worker: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,


    part: $ => seq(
      /^/,
      "===",
      /\d+/,
      "==="
    ),

    page: $ => seq(
      $.page_number,
      repeat(
        choice(
          $.text,
          $.sound,
          $.separator
        )
      )
    ),

    page_number: $ => seq(
      "==",
      /\d+/,
      "==",
      optional($.page_real_number)
    ),
    page_real_number: $ => /\(\d+\)/,

    text: $ => /.*/,
    sound: $ => seq(
      /^/,
      /.*?/,
      "*",
      /\d+/
    ),
    separator: $ => seq(
      /^/,
      "---",
      /$/
    ),
  }
});

