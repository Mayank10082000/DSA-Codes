#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = 0, *tail = 0;

void addbeg(int x)
{
	node *newnode, *temp;
	newnode = new node;
	newnode -> data = x;
	
	if(head == 0)
	{
		head = tail = newnode -> prev = newnode -> next = newnode;
	}
	
	else
	{
		newnode -> next = head;
		head -> prev = newnode;
		newnode -> prev = tail;
		tail -> next = newnode;
		head = newnode;
	}
}

void addend(int x)
{
	node *newnode, *temp;
	newnode = new node;
	newnode -> data = x;
	
	temp = tail;
	tail = newnode;
	temp -> next = newnode;
	newnode -> prev = temp;
	newnode -> next = head;
	head -> prev = newnode;
}

void addatpos(int x)
{
	int pos, i =1;
	node *newnode, *temp1, *temp2;
	
	cout << "enter position : ";
	cin >> pos;
	newnode = new node;
	newnode -> data = x;
	temp1 = head;
	
	for(int i = 0; i < pos - 2; i++)
	{
		temp1 = temp1 ->next;
	}
	
	temp2 = temp1 -> prev;
	newnode -> prev = temp1;
	newnode -> next = temp1 -> next;
	temp1 -> next = newnode;
	
}

void delbeg()
{
	node *temp1, *temp2;
	temp1 = head;
	temp2 = head -> next;
	temp2 -> prev = tail;
	tail -> next = head -> next;
	head = head -> next;
	free(temp1);
}

void delend()
{
	node *temp1;
	temp1 = tail;
	tail = tail -> prev;
	tail -> next = head;
	head -> prev = tail -> prev;
	free(temp1);
}

void delatpos()
{
	int pos, i = 1;
	node *temp, *nextnode;
	temp = new node;
	nextnode = new node;
	temp = head;
	cout << "enter position : ";
	cin >> pos;
	while(i < pos-1)
	{
		temp = temp -> next;
		i++;
	}
	nextnode = temp -> next;
	temp -> next = nextnode -> next;
	free(nextnode);
}

void display()
{
	node *temp;
	temp = head;
	
	while(temp -> next != head)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	
	cout << temp -> data;
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
	
	addend(6);
	addend(7);
	addend(8);
	display();
	
	addatpos(9);
	display();
	
	delbeg();
	display();
	
	delend();
	display();
	
	delatpos();
	display();
	
	return 0;
}
