; Підсвічування для кореневого вузла
(source_file) @none

; Підсвічування для коментарів
(comment) @comment


; Твори
(works
  (name) @string
  (link) @url
)

(name) @string
(link) @url


; Ролі
(credits
  (role (persons
      (nickname) @identifier
    )
  ) @type
)

(role) @type
(nickname) @identifier


; Структоризований переклад
(part (part_number) @number
  (page
    (page_number (page_real_number) @number) @number
    (text) @text
    (sound) @constant
    (separator) @punctuation.special
  )
)

(part_number) @number
(page_number) @number
(page_real_number) @number

(text) @text
(sound) @constant
(separator) @punctuation.special
