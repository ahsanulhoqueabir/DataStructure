/*----------------------------
Name: MD. AHSANUL HOQUE ABIR
ID: B210305040
problem: Write a program to search an element using binary search.
-------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
int main()
{

    int size = 7;
    // cin >> size;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13};
    int target;
    cin >> target;
    int result = binarySearch(arr, 0, size - 1, target);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}