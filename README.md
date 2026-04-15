Код находится в папке ConsoleApplication7 в файле ConsoleApplication7.cpp

Вариант 3. Занятие 9
Определить структурный тип, описывающий музыкальные альбомы (название
альбома, исполнитель, стиль, год выпуска, длительность, стоимость, название и
продолжительность композиций альбома). Заполнить структурный массив 20-ю
записями. Переписать из исходного массива в другой массив, информацию только о
тех альбомах, стиль которых рок или инди-рок. Затем новый массив отсортировать
по исполнителю по алфавиту. Вывести все данные по конкретному альбому.
Вывести 5 самых популярных альбомов. Реализовать функцию изменения альбома.
В отдельный массив поместить все альбомы, имеющие более 7 композиций.
Реализовать вывод отфильтрованных данных в виде оберточной функции.

Занятие 10. Задание 1.
Считать из текстового файла данные числового поля для вашей.
Например, исходный файл имеет 2 столбца: ФИО и пол (0 – мужской, 1 -
женский). Из файла считываются данные и если фамилия совпадает с
очередным элементом массива структур, то в поле pol записывается
соответствующее значение из файла.
Ivanov 0
Ivanova 1
Petrov 0
Sidorova 1
Makarkin 0

Задание 2. Сделать чтение / запись своей структуры в бинарный файл.
Оформить в виде подпрограмм.

Результат выполнения программы:

All albums:
narodnaya | SHAMAN | other | 2024 | 38 min | 10.65$ | 3 track(s)
OK Computer | Radiohead | indi rock | 1997 | 53 min | 18.99$ | 5 track(s)
Nevermind | Nirvana | rock | 1991 | 42 min | 15.5$ | 7 track(s)
Thriller | Michael Jackson | pop | 1982 | 42 min | 22$ | 8 track(s)
Back in Black | AC/DC | rock | 1980 | 42 min | 19.95$ | 3 track(s)
The Dark Side | Pink Floyd | rock | 1973 | 43 min | 25$ | 9 track(s)
Rumours | Fleetwood Mac | rock | 1977 | 40 min | 17.5$ | 4 track(s)
Led Zeppelin IV | Led Zeppelin | rock | 1971 | 42 min | 20$ | 5 track(s)
Abbey Road | The Beatles | rock | 1969 | 47 min | 24.99$ | 4 track(s)
To Pimp a Butterfly | Kendrick Lamar | hip hop | 2015 | 78 min | 16.5$ | 5 track(s)
Random Access Memories | Daft Punk | pop | 2013 | 74 min | 21$ | 6 track(s)
1989 | Taylor Swift | pop | 2014 | 48 min | 18$ | 3 track(s)
Good Kid | Kendrick Lamar | hip hop | 2012 | 68 min | 15.99$ | 4 track(s)
Born to Die | Lana Del Rey | pop | 2012 | 49 min | 16.75$ | 5 track(s)
Channel Orange | Frank Ocean | pop | 2012 | 62 min | 17.5$ | 4 track(s)
College Dropout | Kanye West | hip hop | 2004 | 76 min | 14.99$ | 6 track(s)
American Idiot | Green Day | rock | 2004 | 57 min | 16$ | 4 track(s)
Hybrid Theory | Linkin Park | rock | 2000 | 37 min | 13.5$ | 3 track(s)
Discovery | Daft Punk | pop | 2001 | 60 min | 20$ | 5 track(s)
Marshall Mathers LP | Eminem | hip hop | 2000 | 72 min | 15$ | 4 track(s)

narodnaya rock
OK Computer pop
Nevermind hip hop
Thriller other
Back in Black indi rock
The Dark Side pop
Rumours pop
Led Zeppelin IV rock
Abbey Road other
To Pimp a Butterfly indi rock
Random Access Memories pop
1989 other
Good Kid pop
Born to Die indi rock
Channel Orange hip hop
College Dropout rock
American Idiot rock
Hybrid Theory pop
Discovery indi rock
Marshall Mathers LP hip hop

After binary read:
narodnaya | SHAMAN | rock | 2024 | 38 min | 10.65$ | 3 track(s)
OK Computer | Radiohead | pop | 1997 | 53 min | 18.99$ | 5 track(s)
Nevermind | Nirvana | hip hop | 1991 | 42 min | 15.5$ | 7 track(s)
Thriller | Michael Jackson | other | 1982 | 42 min | 22$ | 8 track(s)
Back in Black | AC/DC | indi rock | 1980 | 42 min | 19.95$ | 3 track(s)
The Dark Side | Pink Floyd | pop | 1973 | 43 min | 25$ | 9 track(s)
Rumours | Fleetwood Mac | pop | 1977 | 40 min | 17.5$ | 4 track(s)
Led Zeppelin IV | Led Zeppelin | rock | 1971 | 42 min | 20$ | 5 track(s)
Abbey Road | The Beatles | other | 1969 | 47 min | 24.99$ | 4 track(s)
To Pimp a Butterfly | Kendrick Lamar | indi rock | 2015 | 78 min | 16.5$ | 5 track(s)
Random Access Memories | Daft Punk | pop | 2013 | 74 min | 21$ | 6 track(s)
1989 | Taylor Swift | other | 2014 | 48 min | 18$ | 3 track(s)
Good Kid | Kendrick Lamar | pop | 2012 | 68 min | 15.99$ | 4 track(s)
Born to Die | Lana Del Rey | indi rock | 2012 | 49 min | 16.75$ | 5 track(s)
Channel Orange | Frank Ocean | hip hop | 2012 | 62 min | 17.5$ | 4 track(s)
College Dropout | Kanye West | rock | 2004 | 76 min | 14.99$ | 6 track(s)
American Idiot | Green Day | rock | 2004 | 57 min | 16$ | 4 track(s)
Hybrid Theory | Linkin Park | pop | 2000 | 37 min | 13.5$ | 3 track(s)
Discovery | Daft Punk | indi rock | 2001 | 60 min | 20$ | 5 track(s)
Marshall Mathers LP | Eminem | hip hop | 2000 | 72 min | 15$ | 4 track(s)
