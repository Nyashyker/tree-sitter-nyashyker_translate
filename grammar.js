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
    _empty: $ => /\n/,


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

    persons: $ => seq($.nickname, repeat(seq(", ",$.nickname))),
    nickname: $ => /[a-zA-ZабвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ1-9_\-\']+/,


    // Структоризований переклад
    part: $ => seq(
      $.part_number,
      repeat($.comment),
      repeat1($.page),
    ),

    part_number: $ => /=== \d+ ===\n/,

    page: $ => seq(
      $.page_number,
      repeat(choice(
          $.comment,
          $.sound,
          $.separator,
          $.text,
      )),
      repeat($._empty),
    ),

    page_number: $ => seq(/== \d+ ==/, optional($.page_real_number),"\n"),
    page_real_number: $ => / \(\d+\)/,

    sound: $ => /.*\*\d+\n/,
    separator: $ => /---\n/,
    text: $ => /[^\n\=].*\n/,
  }
});

