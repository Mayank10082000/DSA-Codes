#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = 0;

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

void addend(int x)
{
	node *newnode, *temp;
	newnode = new node;
	newnode -> data = x;
	temp = head;
	
	while(temp -> next != 0)
	{
		temp = temp -> next;
	}
	
	temp -> next = newnode;
	newnode -> next = 0;
	newnode -> prev = temp;
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
	node *temp;
	temp = new node;
	temp = head;
	head = head ->next;
	head -> prev = 0;
	free(temp);
}

void delend()
{
	node *temp, *prevnode;
	temp = new node;
	prevnode = new node;
	temp = head;
	while(temp -> next != 0)
	{
		prevnode = temp;
		temp = temp -> next;
	}
	prevnode -> next = 0;
	free(temp);
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
