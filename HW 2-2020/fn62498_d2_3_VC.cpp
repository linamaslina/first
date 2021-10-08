/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Veselina Posliyska
* @idnumber 62498
* @task 3
* @compiler VC
*
*/

#include <iostream>
using namespace std;

int NumOfPalindromes(int N, int arr[])
{
    bool found = false;

    int i = 0, j = 0, k = 0, p = 0, count = 0;

    while (i < N)
    {
        for (j = i + 1; j < N; j++)
        {
            for (k = i, p = j; k <= p; k++, p--)
            {
                if (arr[k] == arr[p])
                {
                    if (p - k > 1) // so that the min length of the palindrome is 3 
                    {
                        found = true;
                    }
                }
                else
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                count++;
                found = false;
            }
        }
        i++;
    }
    if (count==0)
    {
        return -1;
    }
    else
        return count;
}

bool isValid(int N)
{
    int min = 3, max = 1000;
    if (N >= min && N <= max)
    {
        return true;
    }
    else return false;
}

void solution()
{
    int N = 0;
    int str[1000] = { 0 };
    cin >> N;
    while (!(isValid(N)))
    {
        cin >> N;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
    }
    cout << NumOfPalindromes(N, str);
}

int main()
{
    solution();
}