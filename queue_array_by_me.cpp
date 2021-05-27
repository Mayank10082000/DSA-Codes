#include<iostream>

using namespace std;

#define n 5

int arr[n], front = -1, rear = -1;

void enque(int x)
{
	if(rear == n-1)
	{
		cout << "queue is full";
	}
	
	else
	{
		front = 0;
		rear++;
		arr[rear] = x;
	}
	//cout << "\n";
}

void deque()
{
	if(front == -1 && rear == -1)
	{
		cout << "queue is empty";
	}
	
	else
	{
		//cout << arr[front];
		front++;
	}
	//cout << "\n";
}

void isFull()
{
	if(front == 0 && rear == n-1)
	{
		cout << "queue is full";
	}
	
	else
	{
		cout << "queue is not full";
	}
	cout << "\n";
}

void isEmp()
{
	if(front == -1)
	{
		cout << "queue is empty";
	}
	
	else
	{
		cout << "queue is not empty";
	}
	cout << "\n";
}

void display()
{
	for(int i = front; i <= rear; i++)
	{
		cout << arr[i] << " ";
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
	isFull();
	deque();
	display();
	deque();
	deque();
	deque();
	deque();
	isEmp();
	return 0;
}
