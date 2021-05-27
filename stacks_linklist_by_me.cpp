#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *top = 0;

void push(int x)
{
	node *newnode;
	newnode = new node;
	newnode -> data = x;
	newnode -> next = top;
	top = newnode;
}

void display()
{
	node *temp;
	temp = top;
	
	if(top == 0)
	{
		cout << "stack is empty";
	}
	
	else
	{
		while(temp != 0)
		{
			cout << temp -> data << "->";
			temp = temp -> next;
		}
	}

	cout << "NULL";
	cout << "\n";
}

void pop()
{
	node *temp;
	temp = top;
	
	if(top == 0)
	{
		cout << "underflow condition";
	}
	
	else
	{
		cout << "popped element is : " << temp -> data << " ";
		top = top -> next;
		delete temp;
	}
	cout << "\n";
}

void peek()
{
	node *temp;
	
	if(top == 0)
	{
		cout << "stack is empty";
	}
	
	else
	{
		cout << "top element is : " << top -> data;
	}

	cout << "\n";
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();

	pop();
	peek();
	display();
}
