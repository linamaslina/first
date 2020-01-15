#include <iostream>
#include <time.h>
#include <random>
using namespace std;
void RandomQuestion();
char questions[10][110]={
	"Which insect shorted out an early supercomputer and inspired the term \"computer bug\"?\n",
	"Which of the following men does not have a chemical element named for him?\n",
	"Now used to refer to a cat, the word \"tabby\" is derived from the name of a district of what world capital?\n",
	"Seaweed is a form of what?\n",
	"Which of these dance names is used to describe a fashionable dot?\n",
	"The Earth is approximately how many miles away from the Sun?\n",
	"The song'\"God Bless America\" was originally written for what 1918 musical?\n",
	"How many days make up a non-leap year in the Islamic calendar?\n",
	"Which scientific unit is named after an Italian nobleman?\n", 
	"Which colour is used as a term to describe an illegal market in rare goods?\n"
};
char answer1[4][30] = {"A. Moth\n", "B. Roach\n","C. Fly\n","D. Japanese beetle\n"};
char answer2[4][30] = { "A. Albert Einstein\n", "B. Niels Bohr\n", "C. Isaac Newton\n","D. Enrico Fermi\n" };
char answer3[4][30] = { "A. Baghdad\n", "B. New Delhi\n", "C. Cairo\n","D. Moscow\n" };
char answer4[4][30] = { "A. Bacteria\n", "B. Algae\n", "C. Fungus\n", "D. Sea urchin\n" };
char answer5[4][30] = { "A. Lambada\n", "B. Polka\n", "C. Swing\n", "D. Hora\n" };
char answer6[4][30] = { "A. 9.3 million\n", "B. 39 million\n", "C. 93 million\n", "D. 193 million\n" };
char answer7[4][30] = { "A. Oh, Lady! Lady!\n", "B. Yip, Yip, Yaphank\n", "C. Blossom Time\n", "D. Watch Your Step\n" };
char answer8[4][30] = { "A. 365\n", "B. 400\n", "C. 354\n", "D. 376\n" };
char answer9[4][30] = { "A. Pascal\n", "B. Ohm\n", "C. Volt\n", "D. Hertz\n" };
char answer10[4][30] = {"A. Black\n", "B. Red\n", "C. Dark\n", "D. Hidden\n"};
void validation1(char input)
{
	if (input !=65&& input != 66 && input != 67 && input != 68 && input != 70) { cout << "wrong validation"; }
}
void validation2(char input)
{
	if (input != 78 && input != 69) { cout << "wrong validation"; }
}
void RightAnswer()
{
	char input2 = 0;
	cout << "Right Answer! You win!!\n ";
	cout << "Input N for next question or E to end the game:\n";
	cin >> input2;
	validation2(input2);
	switch (input2)
	{
	case 'N': system("cls"); cout << "Input F for 50/50\n"; srand((unsigned int)time(NULL)); RandomQuestion(); cin.ignore();
		cin.clear();
		break;
	case 'E': cout << "Game over\n";
	}
}
void WrongAnswer()
{
	cout << "Wrong Answer :( You lose.\n";
	cout << "Input N for next question or E to end the game:\n";
	char input2 = 0;
	cin >> input2;
	validation2(input2);
	switch (input2)
	{
	case 'N': system("cls"); cout << "Input F for 50/50\n"; srand((unsigned int)time(NULL)); RandomQuestion(); cin.ignore();
		cin.clear();
		break;
	case 'E': cout << "Game over\n";
	}
}
int RandomNumber()
{
	const int MAX = 10;
	int numbers[MAX] = { 1,2,3,4,5,6,7,8,9,10};
	int res = numbers[rand() % MAX];
	return res;
}
void FiftyFiftyA(char array[][30])
{
	const int MAX = 3;
	int numbers[MAX] = { 1,2,3};
	int i = numbers[rand() % MAX];
	cout << array[i];
}
void FiftyFiftyB(char array[][30])
{
	const int MAX = 3;
	int numbers[MAX] = { 0,2,3 };
	int i = numbers[rand() % MAX];
	cout << array[i];
}
void FiftyFiftyC(char array[][30])
{
	const int MAX = 3;
	int numbers[MAX] = { 1,0,3 };
	int i = numbers[rand() % MAX];
	cout << array[i];
}
void AnswerA(char input)
{
	switch (input)
	{
	case 'A': RightAnswer();
		break;
	case 'B': WrongAnswer();
		break;
	case 'C': WrongAnswer();
		break;
	case 'D': WrongAnswer();
		break;
	}
}
void AnswerB(char input)
{
	switch (input)
	{
	case 'A': WrongAnswer();
		break;
	case 'B': RightAnswer();
		break;
	case 'C': WrongAnswer();
		break;
	case 'D': WrongAnswer();
		break;
	}
}
void AnswerC(char input)
{
	switch (input)
	{
	case 'A': WrongAnswer();
		break;
	case 'B': WrongAnswer();
		break;
	case 'C': RightAnswer();
		break;
	case 'D': WrongAnswer();
		break;
	}
}
void PrintAnswers(int num)
{
	switch (num)
	{
	case 1: printf(answer1[0]); printf(answer1[1]); printf(answer1[2]); printf(answer1[3]);
		break;
	case 2: printf(answer2[0]); printf(answer2[1]); printf(answer2[2]); printf(answer2[3]);
		break;
	case 3: printf(answer3[0]); printf(answer3[1]); printf(answer3[2]); printf(answer3[3]);
		break;
	case 4: printf(answer4[0]); printf(answer4[1]); printf(answer4[2]); printf(answer4[3]);
		break;
	case 5: printf(answer5[0]); printf(answer5[1]); printf(answer5[2]); printf(answer5[3]);
		break;
	case 6: printf(answer6[0]); printf(answer6[1]); printf(answer6[2]); printf(answer6[3]);
		break;
	case 7: printf(answer7[0]); printf(answer7[1]); printf(answer7[2]); printf(answer7[3]);
		break;
	case 8: printf(answer8[0]); printf(answer8[1]); printf(answer8[2]); printf(answer8[3]);
		break;
	case 9: printf(answer9[0]); printf(answer9[1]); printf(answer9[2]); printf(answer9[3]);
		break;
	case 10: printf(answer10[0]); printf(answer10[1]); printf(answer10[2]); printf(answer10[3]);
		break;
	}
}
void Answers(int num)
{
	char input=0;
	if (num == 1 || num==3 ||num==10)
	{
		PrintAnswers(num);
		cout << "Choose an answer (A,B,C,D or F):";
		cin >> input;
		validation1(input);
		if (input=='F')
		{
			switch (num)
			{
			case 1:  system("cls"); printf("Choose from these two:\n"); FiftyFiftyA(answer1); printf(answer1[0]);
				break;
			case 3:  system("cls");  printf("Choose from these two:\n"); printf(answer3[0]); FiftyFiftyA(answer3);
				break;
			case 10:  system("cls"); printf("Choose from these two:\n"); FiftyFiftyA(answer10); printf(answer10[0]);
			}
			cin >> input;
			AnswerA(input);
		}
		else AnswerA(input);
		cin.ignore();
		cin.clear();
	}
	if (num == 4 || num == 5 || num == 7)
	{
		
		PrintAnswers(num);
		cout << "Choose an answer (A,B,C,D or F):";
		cin >> input;
		validation1(input);
		if (input == 'F')
		{
			switch (num)
			{
			case 4: system("cls"); printf("Choose from these two:\n"); FiftyFiftyB(answer4); printf(answer4[1]);
				break;
			case 5: system("cls"); printf("Choose from these two:\n"); printf(answer5[1]); FiftyFiftyB(answer5);
				break;
			case 7: system("cls"); printf("Choose from these two:\n"); FiftyFiftyB(answer7); printf(answer7[1]);
			}
			cin >> input;
			AnswerB(input);
		}
		else AnswerB(input);
		cin.ignore();
		cin.clear();
	}
	if (num == 9 || num == 8 || num == 2 || num==6)
	{
		PrintAnswers(num);
		cout << "Choose an answer (A,B,C,D or F):";
		cin >> input;
		validation1(input);

		if (input == 'F')
		{
			switch (num)
			{
			case 9:  system("cls"); printf("Choose from these two:\n"); FiftyFiftyC(answer9); printf(answer9[2]);
				break;
			case 8: system("cls"); printf("Choose from these two:\n"); printf(answer8[2]); FiftyFiftyC(answer8);
				break;
			case 2:  system("cls"); printf("Choose from these two:\n"); FiftyFiftyC(answer2); printf(answer2[2]);
				break;
			case 6: system("cls"); printf("Choose from these two:\n"); FiftyFiftyC(answer6); printf(answer6[2]);
				break;
			}
			cin >> input;
			AnswerC(input);
		}
		else AnswerC(input);
		cin.ignore();
		cin.clear();
	}


}
void RandomQuestion()
{
	srand((unsigned int)time(NULL));
	RandomNumber();
	int num = RandomNumber();
	switch (num)
	{
	case 1:  printf(questions[0]); Answers(num);
		break;
	case 2: printf(questions[1]);  Answers(num);
		break;
	case 3: printf(questions[2]); Answers(num);
		break;
	case 4: printf(questions[3]); Answers(num);
		break;
	case 5: printf(questions[4]); Answers(num);
		break;
	case 6: printf(questions[5]); Answers(num);
		break;
	case 7: printf(questions[6]); Answers(num);
		break;
	case 8: printf(questions[7]); Answers(num);
		break;
	case 9: printf(questions[8]); Answers(num);
		break;
	case 10: printf(questions[9]); Answers(num);
		break;
	}
}
int main()
{
	system("color b0");
	cout << "Input F for 50/50\n";
	RandomQuestion();
}
