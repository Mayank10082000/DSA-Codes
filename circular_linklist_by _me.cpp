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
	node *temp, *newnode;
	newnode = new node;
	
	newnode -> data = x;
	
	if(head == 0)
	{
		head = temp = newnode;
		newnode -> next = head;
	}
	
	else
	{
		newnode -> next = head;
		head = newnode;
		temp -> next = head;
	}
}

void addend(int x)
{
	node *newnode, *temp;
	newnode = new node;
	newnode -> data = x;
	
	while(temp -> next != head)
	{
		temp = temp -> next;
	}
	
	temp -> next = newnode;
	newnode -> next = head;
}

void addpos(int x)
{
	int pos;
	node *temp, *newnode;
	newnode = new node;
	newnode -> data = x;
	temp = head;
	cout << "enter position : ";
	cin >> pos;
	
	for(int i = 0; i < pos - 2; i++)
	{
		temp = temp ->next;
	}
	
	newnode -> next = temp -> next;
	temp -> next = newnode;
}

void delbeg()
{
	node *temp, *temp1;
	temp = temp1 = head;
	
	while(temp1 -> next != head)
	{
		temp1 = temp1 -> next;
	}
	
	head = temp -> next;
	temp1 -> next = head;
	free(temp);
}

void delend()
{
	node *temp, *prevnode;
	temp = head;
	
	while(temp -> next != head)
	{
		prevnode = temp;
		temp = temp -> next;
	}
	
	prevnode -> next = head;
	free(temp);
}

void delpos()
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
	
	addpos(9);
	display();

	delbeg();
	display();
	
	delend();
	display();
	
	delpos();
	display();
	
	return 0;
}
