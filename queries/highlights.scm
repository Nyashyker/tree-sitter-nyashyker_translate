; Підсвічування для кореневого вузла
(source_file) @none

; Підсвічування для коментарів
(comment) @comment


; Твори
(works
  (name (work_marker) @label ) @string
  (link (work_marker) @label ) @url
)

(name) @string
(link) @url
(work_marker) @label


; Ролі
(credits
  (role (persons
      (nickname) @identifier
      (persons_separator) @punctuation
    )
  ) @type
)

(role) @type
(nickname) @identifier
(persons_separator) @punctuation


; Структоризований переклад
(part (part_marker (part_number) @number ) @class
  (page (page_marker (page_number) @number (page_real_marker (page_real_number) @number ) @comment ) @function
    (text) @text
    (sound (sound_marker) @label (sound_count) @number ) @constant
    (separator) @punctuation.special
  )
)

(part) @class
(part_marker) @class
(part_number) @number
(page_marker) @function
(page_number) @number
(page_real_marker) @comment
(page_real_number) @number

(text) @text
(separator) @punctuation.special

(sound) @constant
(sound) @constant
(sound_marker) @label
(sound_count) @number

