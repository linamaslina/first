/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Veselina Posliyska
* @idnumber 62498
* @task 4
* @compiler VC
*
*/

#include<iostream>
using namespace std;

void myswap(long int& a, long int& b)
{
    int c = a;
    a = b;
    b = c;
}

void sort(long arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int selected = i;

        for (int j = i + 1; j < N; j++)
        {
            if (arr[selected] > arr[j])
            {
                selected = j;
            }
        }
        myswap(arr[i], arr[selected]);
    }
}

bool search(long arr[], int num, int N) {
    int l = 0;
    int r = N - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == num) {
            return true;
        }

        if (arr[mid] < num) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    return false;
}

void getTriplet(long arr[], int n)
{
    int counter = 0,i = 0;

    bool found = false;

    sort(arr,n);

    while( i < n - 1)
    {
        int first = i + 1;
        int second = n - 1;
       
        while (first < second)
        {
            if (arr[i] + arr[first] + arr[second] == 0)
            {
                first++;
                second--;
                counter++;
                found = true;
            }
            else if (arr[i] + arr[first] + arr[second] < 0)
            {
                first++;
            }
            else
            {
                second--;
            }
        }
        i++;
    }

    if (!found)
    {
        cout << "0" << endl;
    }
    else
    { 
        cout << counter;
    }
}

bool validation(int N)
{
    int min = 3, max = 100;
    if (N >= min && N <= max)
    {
        return true;
    }
    else return false;
}

void solution()
{
    int N = 0;
    cin >> N;
    while (!(validation(N)))
    {
        cin >> N;

    }

    long arr[100];
    int i = 0;

    while (i < N)
    {
        long input = 0;

        cin >> input;

        if (!(search(arr, input, i)))
        {
            arr[i] = input;
            i++;
        }
    }
    getTriplet(arr, N);
}

int main()
{
    solution();
    return 0;
}