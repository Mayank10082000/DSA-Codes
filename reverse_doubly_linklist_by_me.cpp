#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = 0, *tail;

void addbeg(int x)
{
	node *newnode, *temp;
	newnode = new node;	
	
	if(head == 0)
	{
		newnode -> data = x;
		head = newnode;
		newnode -> next = 0;
		newnode -> prev = 0;
	}
	
	else
	{
		temp = head;
		head = newnode;
		newnode -> data = x;
		newnode -> prev = 0;
		newnode -> next = temp;
		temp -> prev = newnode;
	}
}

void reverse()
{
	node *nextnode, *currentnode;
	tail = head;
	
	while(tail -> next != 0)
	{
		tail = tail -> next;
		
	}
	
	currentnode = head;
	
	while(currentnode != 0)
	{
		nextnode = currentnode -> next;
		currentnode -> next = currentnode -> prev;
		currentnode -> prev = nextnode;
		currentnode = nextnode;
	}
	
	currentnode = head;
	head = tail;
	tail = currentnode;
}

void display()
{
	node *temp;
	temp = head;
	
	while(temp != 0)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	
	cout << "\n";
}

int main()
{
	addbeg(1);
	addbeg(2);
	addbeg(3);
	addbeg(4);
	addbeg(5);
	display();
	
	reverse();
	display();
	
	return 0;
}
