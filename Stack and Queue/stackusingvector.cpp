#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> v;
    void push(int data)
    {
        v.push_back(data);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        // return v[v.size() - 1];
        return v.back(); // both have same time complexity. but this one is more preferred.
    }
    int down()
    {
        return v.front();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{

    Stack s;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int data;
        cin >> data;
        s.push(data);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}