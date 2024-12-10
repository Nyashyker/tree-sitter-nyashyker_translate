; Підсвічування для кореневого вузла
(source_file) @nt

; Підсвічування для коментарів
(comment) @nt.comment


; Твори
(works
  (name (work_marker) @nt.label.works.name ) @nt.works.name
  (link (work_marker) @nt.label.works.url ) @nt.works.url
) @nt.works

(name) @nt.works.name
(link) @nt.works.url
(work_marker) @nt.label.works


; Ролі
(credits
  (role (persons
      (nickname) @nt.credits.name
      (persons_separator) @nt.credits.punctuation.comma
    )
  ) @nt.credits.role
) @nt.credits

(role) @nt.credits.role
(nickname) @nt.credits.name
(persons_separator) @nt.credits.punctuation.comma


; Структоризований переклад
(part (part_marker (part_number) @nt.number.part ) @nt.label.part
  (page (page_marker (page_number) @nt.number.page (page_real_marker (page_real_number) @nt.number.page.real ) @nt.label.page.real ) @nt.label.page
    (text) @nt.text
    (separator) @nt.sparator
    (sound (sound_marker) @nt.label.sound (sound_count) @nt.number.sound ) @nt.sound
  ) @nt.page
) @nt.part

(part) @nt.part
(part_marker) @nt.label.part
(part_number) @nt.number.part
(page_marker) @nt.label.page
(page_number) @nt.number.page
(page_real_marker) @nt.label.page.real
(page_real_number) @nt.number.page.real

(text) @nt.text
(separator) @nt.separator

(sound) @nt.sound
(sound_marker) @nt.label.sound
(sound_count) @nt.number.sound

