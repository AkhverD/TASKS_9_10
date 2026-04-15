#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int SIZE = 20;


enum Style {
	ROCK,
	INDI_ROCK,
	POP,
	HIP_HOP,
	OTHER
};

struct track {
	char name[30];
	int duration;
};

struct alb {
	char alb_name[25];
	char artist[20];

	int year;
	int duration;
	double price;
	track t[10];
	int trackCount;
	Style style;

};

// переводим enum Style в строку
const char* styleToStr(Style s) {
	switch (s) {
	case ROCK: return "rock";
	case INDI_ROCK: return "indi rock";
	case POP: return "pop";
	case HIP_HOP: return "hip hop";
	default: return "other";
	}
}

alb* init() {
	alb* a = new alb[SIZE];

	a[0] = alb{ "narodnaya", "SHAMAN", 2024, 38, 10.65,
	{ { "t1", 3 }, { "t2", 4 }, { "t3", 5 } }, 3, OTHER };
	a[1] = alb{ "OK Computer", "Radiohead", 1997, 53, 18.99,
	{ { "t1", 5 }, { "t2", 4 }, { "t3", 5 }, { "t4", 4 }, { "t5", 6 } }, 5, INDI_ROCK };
	a[2] = alb{ "Nevermind", "Nirvana", 1991, 42, 15.50,
	{ { "t1", 5 }, { "t2", 4 }, { "t3", 5 }, { "t4", 3 }, { "t5", 3 }, { "t6", 5 }, { "t7", 4 } }, 7, ROCK };
	a[3] = alb{ "Thriller", "Michael Jackson", 1982, 42, 22.00,
	{ { "t1", 4 }, { "t2", 5 }, { "t3", 4 }, { "t4", 4 }, { "t5", 3 }, { "t6", 5 }, { "t7", 4 }, { "t8", 4 } }, 8, POP };
	a[4] = alb{ "Back in Black", "AC/DC", 1980, 42, 19.95,
	{ { "t1", 4 }, { "t2", 4 }, { "t3", 5 } }, 3, ROCK };
	a[5] = alb{ "The Dark Side", "Pink Floyd", 1973, 43, 25.00,
	{ { "t1", 6 }, { "t2", 5 }, { "t3", 7 }, { "t4", 6 }, { "t5", 5 }, { "t6", 4 }, { "t7", 4 }, { "t8", 4 }, { "t9", 4 } }, 9, ROCK };
	a[6] = alb{ "Rumours", "Fleetwood Mac", 1977, 40, 17.50,
	{ { "t1", 4 }, { "t2", 5 }, { "t3", 4 }, { "t4", 3 } }, 4, ROCK };
	a[7] = alb{ "Led Zeppelin IV", "Led Zeppelin", 1971, 42, 20.00,
	{ { "t1", 5 }, { "t2", 6 }, { "t3", 4 }, { "t4", 5 }, { "t5", 4 } }, 5, ROCK };
	a[8] = alb{ "Abbey Road", "The Beatles", 1969, 47, 24.99,
	{ { "t1", 4 }, { "t2", 3 }, { "t3", 5 }, { "t4", 4 } }, 4, ROCK };
	a[9] = alb{ "To Pimp a Butterfly", "Kendrick Lamar", 2015, 78, 16.50,
	{ { "t1", 5 }, { "t2", 6 }, { "t3", 4 }, { "t4", 5 }, { "t5", 6 } }, 5, HIP_HOP };
	a[10] = alb{ "Random Access Memories", "Daft Punk", 2013, 74, 21.00,
	{ { "t1", 6 }, { "t2", 5 }, { "t3", 6 }, { "t4", 5 }, { "t5", 4 }, { "t6", 5 } }, 6, POP };
	a[11] = alb{ "1989", "Taylor Swift", 2014, 48, 18.00,
	{ { "t1", 3 }, { "t2", 4 }, { "t3", 5 } }, 3, POP };
	a[12] = alb{ "Good Kid", "Kendrick Lamar", 2012, 68, 15.99,
	{ { "t1", 5 }, { "t2", 4 }, { "t3", 5 }, { "t4", 4 } }, 4, HIP_HOP };
	a[13] = alb{ "Born to Die", "Lana Del Rey", 2012, 49, 16.75,
	{ { "t1", 4 }, { "t2", 5 }, { "t3", 4 }, { "t4", 5 }, { "t5", 3 } }, 5, POP };
	a[14] = alb{ "Channel Orange", "Frank Ocean", 2012, 62, 17.50,
	{ { "t1", 5 }, { "t2", 4 }, { "t3", 6 }, { "t4", 5 } }, 4, POP };
	a[15] = alb{ "College Dropout", "Kanye West", 2004, 76, 14.99,
	{ { "t1", 5 }, { "t2", 6 }, { "t3", 5 }, { "t4", 4 }, { "t5", 6 }, { "t6", 5 } }, 6, HIP_HOP };
	a[16] = alb{ "American Idiot", "Green Day", 2004, 57, 16.00,
	{ { "t1", 4 }, { "t2", 5 }, { "t3", 4 }, { "t4", 5 } }, 4, ROCK };
	a[17] = alb{ "Hybrid Theory", "Linkin Park", 2000, 37, 13.50,
	{ { "t1", 3 }, { "t2", 4 }, { "t3", 5 } }, 3, ROCK };
	a[18] = alb{ "Discovery", "Daft Punk", 2001, 60, 20.00,
	{ { "t1", 5 }, { "t2", 6 }, { "t3", 5 }, { "t4", 4 }, { "t5", 5 } }, 5, POP };
	a[19] = alb{ "Marshall Mathers LP", "Eminem", 2000, 72, 15.00,
	{ { "t1", 6 }, { "t2", 5 }, { "t3", 6 }, { "t4", 5 } }, 4, HIP_HOP };

	return a;
}

// проверка на рок
bool checkRock(alb w) {
	return w.style == ROCK || w.style == INDI_ROCK;
}

// сортировка по артистам
void sortByArtist(alb* a) {
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (strcmp(a[j].artist, a[j + 1].artist) > 0) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}


// выводит альбом и все его содержимое
void printAlb(const alb& a) {
	cout << a.alb_name << " | "
		<< a.artist << " | "
		<< styleToStr(a.style) << " | "
		<< a.year << " | "
		<< a.duration << " min | "
		<< a.price << "$ | "
		<< a.trackCount << " track(s)\n";
}

// выводит все альбомы
void printAll(alb* a) {
	for (int i = 0; i < SIZE; i++) {
		printAlb(a[i]);
	}
}

// выводит 5 самых популярных альбомов, я выводил по цене, думаю, логично
void top5(alb* a) {
	alb temp[SIZE];
	memcpy(temp, a, sizeof(alb) * SIZE);

	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (temp[j].price < temp[j + 1].price) {
				swap(temp[j], temp[j + 1]);
			}
		}
	}

	cout << "\nTop 5:\n";
	for (int i = 0; i < 5; i++) {
		printAlb(temp[i]);
	}
}

// если в альбоме больше 7 треков, то будем выводить
void moreThan7Tracks(alb* a) {
	alb result[SIZE];
	int count = 0;

	for (int i = 0; i < SIZE; i++) {
		if (a[i].trackCount > 7) {
			result[count++] = a[i];
		}
	}

	cout << "\nAlbums with > 7 tracks:\n";
	for (int i = 0; i < count; i++) {
		printAlb(result[i]);
	}
}

// вносим изменения в цене в альбоме
void changeAlb(alb* a, const char* name) {
	for (int i = 0; i < SIZE; i++) {
		if (strcmp(a[i].alb_name, name) == 0) {
			a[i].price += 5;
			break;
		}
	}
}

// оберточная функция, выводит альбомы c рок, инди-рок
void wrapper(alb* a) {
	cout << "\nFiltered (rock/indi):\n";
	for (int i = 0; i < SIZE; i++) {
		if (checkRock(a[i])) {
			printAlb(a[i]);
		}
	}
}


int main() {
	alb* albums = init();

	cout << "All albums:\n";
	printAll(albums);
	cout << endl;
	
	//это из задания 9
	/*
	sortByArtist(albums);
	cout << "\nSorted:\n";
	printAll(albums);

	wrapper(albums);
	top5(albums);
	moreThan7Tracks(albums);

	changeAlb(albums, "Thriller");
*/

	// Задание 1. Считать из текстового файла данные числового поля для вашей.
	ifstream fin;
	fin.open("style.txt");
	if (fin.is_open()) {
		int i = 0;
		int p;
		while (!fin.eof() && i < SIZE)
		{
			fin >> p;
			albums[i].style = Style(p);
			cout << albums[i].alb_name << " " << styleToStr(albums[i].style) << endl;
			i++;
		}
		fin.close();
	}
	else {
		cout << "File isn't found!" << endl;
	}

	//Задание 2. Сделать чтение / запись своей структуры в бинарный файл. Оформить в виде подпрограмм.
	ofstream out("albums.txt", ios::binary | ios::out);

	if (out.is_open()) {
		for (int i = 0; i < SIZE; i++) {
			out.write((char*)&albums[i], sizeof(alb));
		}
		out.close();
	}

	ifstream in("albums.txt", ios::binary | ios::in);

	if (in.is_open()) {
		for (int i = 0; i < SIZE; i++) {
			in.read((char*)&albums[i], sizeof(alb));
		}
		in.close();
	}

	cout << "\nAfter binary read:\n";
	printAll(albums);

		delete[] albums;
		system("pause");
		return 0;
	}
