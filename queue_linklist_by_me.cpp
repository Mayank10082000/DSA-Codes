#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *front = 0, *rear = 0;

void enque(int x)
{
	node *newnode;
	newnode = new node;
	newnode -> data = x;
	newnode -> next = 0;

	if(front == 0 && rear == 0)
	{
		front = rear = newnode;
	}
	
	else
	{
		rear -> next = newnode;
		rear = newnode;
	}
}

void deque()
{
	node *temp;
	temp = front;
	
	if(front == 0 && rear == 0)
	{
		cout << "queue is empty";
	}
	
	else
	{
		cout << "removed element is : " << front ->data;
		front = front -> next;
		free(temp);
	}
	cout << "\n";
}

void peek()
{
	//node *temp;
	
	if(front == 0 && rear == 0)
	{
		cout << "queue is empty";
	}
	
	else
	{
		cout << "peeked element is : " << front -> data;
	}
	cout << "\n";
}

void display()
{
	node *temp;
	
	if(front == 0 && rear == 0)
	{
		cout << "queue is empty";
	}
	
	else
	{
		temp = front;
		while(temp != 0)
		{
			cout << temp -> data << " ";
			temp = temp -> next;
		}
	}
	cout << "\n";
}

int main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	display();
	
	peek();
	
	deque();
	display();
	
	peek();
	
	return 0;
}
