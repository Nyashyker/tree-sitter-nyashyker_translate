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
      optional($.works),
      optional($.credits),
      repeat1($.part),
    ),

    // Коментарі
    comment: $ => /(=\n)|(=[^\n=].*\n)/,


    // Твіри
    works: $ => repeat1(seq(
      $.name,
      repeat($.comment),
      optional(seq(
        $.link,
        repeat($.comment),
      )),
    )),

    link: $ => token(prec.right(seq($.work_marker, /https:\/\/[ -~]+\n/))),
    name: $ => token(prec.right(seq($.work_marker, /[ -~]*\n/))),
    work_marker: $ => "#",


    // Діло робили
    credits: $ => repeat1(seq(
      $.role,
      repeat($.comment),
    )),

    role: $ => seq("#",$._role_name,": ",$.persons,"\n"),
    _role_name: $ => /[АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЮЯ][абвгґдеєжзиіїйклмнопрстуфхцчшщьюя_\-\']*/,

    persons: $ => seq($.nickname, repeat(seq(",",$.nickname))),
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
    ),

    page_number: $ => seq(/== \d+ ==/, optional($.page_real_number),"\n"),
    page_real_number: $ => /\(\d+\)/,

    sound: $ => /.*\*\d+\n/,
    separator: $ => /---\n/,
    text: $ => /[^\n\=].*\n/,
  }
});

