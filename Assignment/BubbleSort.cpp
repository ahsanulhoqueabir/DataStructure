/*----------------------------
Name: MD. AHSANUL HOQUE ABIR
ID: B210305040
Problem:  Write a program to arrange the list of numbers in ascending order using Bubble Sort.
-------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}