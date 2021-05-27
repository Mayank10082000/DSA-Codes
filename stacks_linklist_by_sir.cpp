#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

class stack
{
	node *top;
public:
	stack()
	{
		top = NULL;
	}
	
	void push(int x)
	{
		node *t;
		t = new node;
		t -> data = x;
		t -> next = top;
		top = t;
	}
	
	int pop()
	{
		if(top == NULL)
		{
			return -999999999;
			//cout << "stack underflow";
		}
		node *t;
		t = top;
		int x = t -> data;
		top = top -> next;
		delete t;
		return x;
	}
	
	void display()
	{
		node *t;
		t = top;
		if(top == NULL)
		{
			cout << "Stack is empty";
		}
		while(t != NULL)
		{
			cout << t -> data << " ";
			t = t -> next;
		}
		cout << "\n";
	}
};

int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.display();
	s.pop();
	s.pop();
	s.display();
}
