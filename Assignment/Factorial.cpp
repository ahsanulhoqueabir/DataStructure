/*----------------------------
Name: MD. AHSANUL HOQUE ABIR
ID: B210305040
Problem: Write a program to calculate factorial of a number using recursive function.
-------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    if (n == 0 or n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    if(n<0)
    {
        cout << "Factorial of negative number is not possible" << endl;
        return 0;
    }
    cout << "Factorial of " << n << " is " << Factorial(n) << endl;
    return 0;
}