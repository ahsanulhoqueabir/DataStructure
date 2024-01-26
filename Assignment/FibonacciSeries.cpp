/*----------------------------
Name: MD. AHSANUL HOQUE ABIR
ID: B210305040
Problem: Write a program to create a Fibonacci series using recursive function.
-------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i)
    {

        cout << Fibonacci(i) << " ";
    }

    return 0;
}