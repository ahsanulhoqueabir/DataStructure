/*----------------------------
Name: MD. AHSANUL HOQUE ABIR
ID: B210305040
problem: Write a program to implement Binary Search Tree using array.
-------------------------------*/

#include <bits/stdc++.h>
using namespace std;

const int Msize = 100;
class BST
{
private:
    int tree[Msize];
    int size;

public:
    BST() : size(0) {}

    void insert(int value)
    {
        if (size < Msize)
        {
            tree[size] = value;
            int index = size;
            ++size;

            while (index > 0)
            {
                int parentIndex = (index - 1) / 2;
                if (tree[index] > tree[parentIndex])
                {
                    swap(tree[index], tree[parentIndex]);
                    index = parentIndex;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout << "Binary Search Tree is full. Cannot insert more elements.\n";
        }
    }

    void display();
};

void BST ::display()
{
    for (int i=0;i<size;++i)
    {
        cout << tree[i] << " ";
    }
    cout << "\n";
}
int main()
{

    BST bst;
    bst.insert(10);
    bst.insert(20);
    bst.insert(30);
    bst.insert(40);
    bst.insert(50);
    bst.insert(60);
    bst.insert(70);
    bst.insert(80);
    bst.insert(90);
    bst.insert(100);
    bst.display();
    return 0;
}