
/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Veselina Posliyska
* @idnumber 62498
* @task 2
* @compiler VC
*
*/
 
#include <iostream>
using namespace std;

template <typename T>
bool isValid(T N, T min, T max)
{
    //int min = 3, max = 365;

    if (N >= min && N <= max)
    {
        return true;
    }

    else return false;
}

double solve() {
    int N;
    cin >> N;
    int minN = 3, maxN = 365;
    while (!(isValid<int>(N,minN,maxN)))
    {
        cin >> N;
    }
    double previous;
    cin >> previous;
    double minprev = 0.1, maxprev = 100;

    while (!(isValid<double>(previous, minprev, maxprev)))
    {
        cin >> previous;
    }

    double sum = 0;

    for (int i = 1; i < N; i++)
    {
        double num;
        cin >> num;
        while (!(isValid<double>(num, minprev, maxprev)))
        {
            cin >> num;
        }
        if (previous < num)
        {
            sum += (num - previous);
        }

        previous = num;
    }

    return sum;
}

int main()
{
    cout << solve() << endl;
    return 0;
}
