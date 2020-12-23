// this was my first uni project for Introduction to Programming with C++. it is a prototype for the game Scrabble.

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <random>
using namespace std;

int points = 0;
string dictionary[] = {
   "an",
   "apple",
   "cat",
   "dog",
   "just",
   "must",
   "first",
   "thirst",
   "bust",
   "dusk",
   "down",
   "dawn",
   "cup",
   "mug",
   "drug",
   "die",
   "end",
   "it",
   "all",
   "none",
   "of",
   "my",
   "you",
   "your",
   "her",
   "him",
   "his",
   "hers",
   "their",
   "break",
   "math",
   "year",
   "years",
   "that",
   "this",
   "in",
   "out",
   "outside",
   "inside",
   "use",
   "how",
   "said",
   "number",
   "sound",
   "no",
   "most",
   "people",
   "see",
   "sea",
   "who",
   "may",
   "down",
   "side",
   "been",
   "now",
   "find",
   "any",
   "new",
   "work",
   "part",
   "cause",
   "pause",
   "mouse",
   "is",
   "hi",
   "it",
   "box",
   "met",
   "as",
   "pet",
   "to",
   "get",
   "bar",
   "if",
   "put",
   "go",
   "no",
   "ok"
};
void settings(int input2, int input, int nl, int nr)
{
	cout << "Choose one of the options:\n1. Change the number of the given letters from 10 to 15\n2. Change the number of rounds played from 10 to 5\n";
	cin >> input2;
	if (input2 == 1)
	{
		nl = 15;
		nr = 10;
	}
	else if (input2 == 2)
	{
		nl = 10;
		nr = 5;
	}
	cin.ignore();
	cin.clear();
	system("CLS");
	Rounds(input, nr, nl);

}
string RandomWord(string array[])
{
	srand((unsigned int)time(NULL));
	const int MAX = 78;
	int i = rand() % MAX;
	string str = array[i];
	return str;
}
string randomletters(size_t letters)
{
	srand((unsigned int)time(NULL));
	const int MAX = 26;
	char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
						  'h', 'i', 'j', 'k', 'l', 'm', 'n',
						  'o', 'p', 'q', 'r', 's', 't', 'u',
						  'v', 'w', 'x', 'y', 'z' };
	string res = "";
	for (unsigned int i = 0; i < letters; i++)
		res = res + alphabet[rand() % MAX];
	return res;
}
void finalrandomletters(int nl)
{
	string word;
	string shuffledword = RandomWord(dictionary);
	size_t letters = nl - strLen(shuffledword);
	string random = randomletters(letters) + shuffledword;
	random_shuffle(random.begin(), random.end());
	cout << random;
	cout << "\nInput a word:\n";

	getline(cin, word);

	validation(word, random);

}
bool CheckLetters(string word, string newword)
{
	int i;
	int counter = 0;
	int size = strLen(newword);
	int size2 = strLen(word);
	for (i = 0; i < size; i++)
	{
		for (int j = 0; j < size2 + 1; j++)
		{
			if (newword[i] == word[j])
			{
				counter++;
				if (counter == strLen(newword))
				{
					return true;
				}
				word[j] = 0;
				continue;
			}
		}
	}
	return false;
}
bool checkword(string word)
{
	for (int j = 0; j < 78; j++)
	{
		if (word == dictionary[j])
		{
			return true;
		}
	}

	return false;
}
void validation(string word, string random)
{

	bool checkWord = checkword(word);
	bool checkletters = CheckLetters(random, word);
	while (checkWord == false && checkletters == false || checkWord == true && checkletters == false || checkWord == false && checkletters == true)
	{
		cout << "Invalid word. Try again with: " << random << "";
		cout << "\nInput a word:\n";
		getline(cin, word);
		checkWord = checkword(word);
		checkletters = CheckLetters(random, word);
	}
	if (checkWord)
	{
		points += strLen(word);
	}
}
void Rounds(int input, int nr, int nl)
{
	int i = 0;
	while (i < nr)
	{
		int k = 0;
		cout << "Round " << i + 1 << ". ";
		if (nl == 10)
		{
			finalrandomletters(nl);
		}
		else if (nl == 15)
		{
			finalrandomletters(nl);
		}
		cout << "Your points so far are: " << points << "\n";
		i++;
	}

	cout << "You've scored: " << points << " points.";
	system("pause");
	system("CLS");
	play();
}
size_t strLen(string text)
{
	size_t len;
	for (len = 0; text[len] != '\0'; len++) {}
	return len;
}
void play()
{

	int input = 0;
	int nl = 10;//number of letters
	int nr = 10;//number of rounds
	int input2 = 0;

	cout << "\t~~~Let's play SCRABBLE~~~\n\tInput a number to:\n";
	cout << "\t1. Start a new game\n\t2. Settings\n\t3. End game\n";
	cin >> input;
	cin.ignore();
	cin.clear();
	switch (input)
	{
	case 1:Rounds(input, nr, nl);
		break;
	case 2: settings(input, input2, nl, nr);
		break;
	case 3: cout << "Game over";
		break;
	}
}
