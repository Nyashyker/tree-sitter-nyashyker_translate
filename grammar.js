/**
 * @file The translation writing standart made by Nyashyker for Nyashyker in consultation with his translators.
 * @author Nyashyker <nyashyker@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "nyashyker_translate",

  extras: $ => [],

  rules: {
    source_file: $ => seq(
      repeat($.comment),
      optional($._header),
      optional(seq(
        repeat1($._empty),
        repeat1($.comment),
      )),
      repeat($._empty),
      repeat1($.part),
    ),

    _header: $ => prec.right(seq(
      repeat($._empty),
      $.works,
      optional(seq(
        repeat($._empty),
        $.credits,
      )),
    )),

    // Коментарі
    comment: $ => /(=\n)|(=[^\n=].*\n)/,

    // Пустий рядок
    _empty: $ => "\n",


    // Твіри
    works: $ => prec.right(repeat1(seq(
      $.name,
      repeat($.comment),
      $.link,
      repeat($.comment),
    ))),

    link: $ => seq($.work_marker,/https:\/\/[ -~]+\n/),
    name: $ => seq($.work_marker,/[ -~]+\n/),
    work_marker: $ => "#",


    // Діло робили
    credits: $ => repeat1(seq(
      $.role,
      repeat($.comment),
    )),

    role: $ => seq($.role_marker,$._role_name,": ",$.persons,"\n"),
    _role_name: $ => /[АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЮЯ][абвгґдеєжзиіїйклмнопрстуфхцчшщьюя_\-\']*/,
    role_marker: $ => "#",

    persons: $ => seq($.nickname, repeat(seq($.persons_separator,$.nickname))),
    nickname: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,
    persons_separator: $ => ", ",


    // Структоризований переклад
    part: $ => seq(
      $.part_marker,
      repeat($.comment),
      repeat1($.page),
    ),

    part_marker: $ => seq("=== ",$.part_number," ===\n"),
    part_number: $ => /\d+/,

    page: $ => seq(
      $.page_marker,
      repeat(choice(
          $.comment,
          $.sound,
          $.separator,
          //$.text,
      )),
      optional($._empty),
    ),

    page_marker: $ => seq("== ",$.page_number," ==", optional($.page_real_marker),"\n"),
    page_number: $ => /\d+/,
    page_real_marker: $ => seq(" (",$.page_real_number,")"),
    page_real_number: $ => /\d+/,

    sound: $ => seq(
      optional(choice(
        /[^\n\=\-\* ]/,
        /[^\n\=\- ][^\n\* ]/,
        /[^\n\=\-].*[^\n ][^\n\* ]/,
      )),
      $.sound_marker,$.sound_count),
      //,/\n/),
    sound_marker: $ => " *",
    sound_count: $ => /\d+/,

    separator: $ => "---\n",
    text: $ => /[^\n\=\-].*\n/,
    //text: $ => seq($._text2,"\n"),
    //_text2: $ => seq($._text3,/.*/),
    //_text3: $ => /[^\n\=\-]/,
  }
});

