#include<iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *head;

void addbeg(int x)
{
	node *temp;
	temp = new node;
	temp -> data = x;
	temp -> next = head;
	head = temp;
}

void display()
{
	node *temp;
	temp = new node;
	temp = head;
	while(temp != 0)
	{
		cout << temp -> data << "->";
		temp = temp -> next;
	}

	cout << "NULL";
	cout << "\n";
}

void reverse()
{
	node *prevnode, *currentnode, *nextnode, *temp;
	temp = new node;
	prevnode = 0;
	currentnode = nextnode = head;
	
	while(nextnode != 0)
	{
		nextnode = nextnode -> next;
		currentnode -> next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	head = prevnode;

	temp = head;

	cout << "The reversed linklist is : ";
	while(temp != 0)
	{
		cout << temp -> data << "->";
		temp = temp -> next;
	}

	cout << "NULL";
	cout << "\n";
}

int main()
{
	//input();
	addbeg(1);
	addbeg(2);
	addbeg(3);
	addbeg(4);
	addbeg(5);
	display();
	
	reverse();
	
	return 0;
}