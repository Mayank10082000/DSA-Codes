#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

class linklist {
	node *start;
	node *end;
public:
	linklist(){
		start=NULL;
		end=NULL;
	}

	
	void addend(int v){
		node *n;
		n=new node;
		n->data=v;
		n->next=NULL;
		
		if(start==NULL){
			start=n;
			end=n;
			return;
		}

		end->next=n;
		end=n;
	}
	int removefirst(){
		if(start==NULL){
			cout<<"QUEUE empty    Nothing to do";
			return -9999999;
		}
		
		int temp = start->data;
				
		node *t;
		t=start;

		if(start==end){
		start=NULL;
		end=NULL;
	
		}
		else{
		start=start->next;	
		
		}
		delete t;
					
		return temp;
	}
	void display(){
		node *temp;
		temp=start;
		while(temp!=NULL){
			cout<<temp->data<<'\t';
			temp=temp->next;
		}
		cout<<'\n';

	}
};

class queue{
	linklist d;
public:
	
	void enqueue(int v){
		d.addend(v);
	}
	int dequeue(){
		return d.removefirst();
	}
	void print(){
		d.display();
	
	}
};



int main(){
  queue q;
  q.enqueue(3);
  q.enqueue(5);
  q.enqueue(9);
  q.print();
  cout<<q.dequeue()<<" \n";
  q.print();
  
	
}
