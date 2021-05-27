#include <iostream>

using namespace std;

#define n 100

int arr[n];
int top = -1;

void push(int x)
{
    if (top == n - 1)
    {
        cout << "overflow condition" << endl;
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "underflow condition" << endl;
    }
    else
    {
        //cout << arr[top] << " ";
		top--;
    }
    cout << "\n";
}

void peek()
{
    if (top == -1)
    {
        cout << "underflow condition" << endl;
    }
    else
    {
        cout << arr[top] << " ";
    }
    cout << "\n";
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    push(3);
    push(2);
    push(5);
    push(1);
    display();
    peek();
    pop();
    display();
    pop();
    display();
    return 0;
}
