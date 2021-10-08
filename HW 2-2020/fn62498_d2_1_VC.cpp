/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Veselina Posliyska
* @idnumber 62498
* @task 1
* @compiler VC
*
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(int N)
{
    int min = 3, max = 100;
    if (N >= min && N<=max)
        return 1;
    else
        return 0;
}

int myabs(int a)
{
    return a < 0 ? -a : a;
}

int function()
{
    unsigned N;
    int sumfront = 0;
    int sumback = 0;
    cin >> N;

    while (!isValid(N))
    {
        cin >> N;
    }

    vector <unsigned> numbers;
    
    for (unsigned i = 0; i < N; i++)
    {
        unsigned imput = 0;
        cin >> imput;
        numbers.push_back(imput);
    }

    unsigned elements = N;

    for (unsigned i = 0; i < elements ; i++)
    {
        sumfront = numbers[i] - numbers[i + 1];
        sumback = numbers[elements-1] - numbers[elements - 2];

        if (myabs(sumfront) != myabs(sumback))
        {
            return 0;
            break;
        }

        elements--;

        if (N % 2 == 0 && elements == i + 1)
        {
            return 1;
        }

        if (N % 2 == 1 &&elements == i + 2)
        {
            return 1;
        }
    }
}

int main()
{
    cout<<function();
    return 0;
}
