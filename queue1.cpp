//This queue implementation is NON-CYCLIC (Static size)
// Front of the queue is always at index 0 of array 
#include<iostream>

#define capacity 50

using namespace std;

class queue{
	int e[capacity];
	int rear;
	
public:
    queue(){
    	rear=-1;
	}	
	void enqueue(int d){
		if(rear==capacity-1){
			cout<<"queue is full, no element added";
			return;
		}
		
		rear++;
		e[rear]=d;
	}	
	int dequeue(){
		if(rear==-1){
			cout<<"queue is EMPTY, nothing to remove";
			return -99999999;
		}
		int temp=e[0];
		for(int i=0;i<rear;i++)
		   e[i]=e[i+1];
		
		rear--;
		return temp;
	
	}
	void display(){
		cout<<"\n  queue elements are :";
		for(int i=0;i<=rear;i++) cout <<e[i]<<"   ";
		
	}	
	
};

int main (){
	queue q1;
	q1.enqueue(2); q1.enqueue(7); q1.enqueue(5);
	q1.enqueue(9); q1.enqueue(6);
	q1.display();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	q1.display();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
	cout<<"\n removed   "<<q1.dequeue();
}

