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
      optional($._work), //Багаторядкова структура
      optional($.credits), //Багаторядкова структура
      repeat1($._translate) //Багаторядкова структура
    ),

    // Твір
    _work: $ => seq(
      $.name, //Однорядкова конструкція (у рядку може бути лише й тільки вона)
      $.link //Однорядкова конструкція (у рядку може бути лише й тільки вона)
    ),

    // Діло робили
    credits: $ => repeat1(
      seq(
        $.role,
        ":",
        $.persons
      )
    ),

    // Структоризований переклад
    _translate: $ => prec.left(seq(
      prec(5, optional($.part)), //Однорядкова конструкція (у рядку може бути лише й тільки вона)
      repeat1($.page) //Багаторядкова структура
    )),

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


    part: $ => seq(
      "===",
      /\d+/,
      "===",
      "\n"
    ),

    page: $ => seq(
      prec(4, $.page_number), //Однорядкова конструкція (у рядку може бути лише й тільки вона)
      repeat(
        choice(
          prec(1, $.text), //Однорядкова конструкція (у рядку може бути лише й тільки вона)
          prec(2, $.sound), //Однорядкова конструкція (у рядку може бути лише й тільки вона)
          prec(3, $.separator) //Однорядкова конструкція (у рядку може бути лише й тільки вона)
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
      /.*/,
      "\n"
    ),
    sound: $ => seq(
      /.*?/,
      "*",
      /\d+/,
      "\n"
    ),
    separator: $ => "---\n",
  }
});

