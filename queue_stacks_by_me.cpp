#include <iostream>

using namespace std;

#define n 5

int s1[n], s2[n];
int top1 = -1, top2 = -1, c = 0;

void push1(int x)
{
	if(top1 == n-1)
	{
		cout << "queue is full";
	}
	
	else
	{
		top1++;
		s1[top1] = x;
	}
}

int pop1()
{
	return s1[top1--];
}

void push2(int x)
{
	if(top2 == n-1)
	{
		cout << "queue is full";
	}
	
	else
	{
		top2++;
		s2[top2] = x;
	}
}

int pop2()
{
	return s2[top2--];
}

void enque(int x)
{
	push1(x);
	c++;
}

void deque()
{
	int a;
	
	if(top1 == -1 && top2 == -1)
	{
		cout << "queue is empty";
	}
	
	else
	{
		for(int i = 0; i < c; i++)
		{
			push2(pop1());
		}
		
		a = pop2();
		c--;
		
		for(int j = 0; j < c; j++)
		{
			push1(pop2());
		}
	}
	
	cout << "\n";
}

void display()
{
	for(int i = 0; i <= top1; i++)
	{
		cout << s1[i] << " ";
	}
}

int main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	display();
	
	deque();
	display();
	
	return 0;
}
