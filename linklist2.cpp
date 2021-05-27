#include<iostream>

using namespace std;

struct node{
	char data;
	node *next;
};

class linklist1 {
	node * start;
public:
	linklist1(){
		start=NULL; 
	}

	void addbeg(char v){
		node *t;
		t=new node;
		t->data=v;
		t->next=start;
		
		start=t;
		
	}
	void addend(char v){
		if(start==NULL){
			addbeg(v);
			return;
		}
		
		node *n;
		n=new node;
		n->data=v;
		n->next=NULL;
		
		node *temp;
		temp=start;  
		while(temp->next != NULL)
			temp=temp->next;
		
		temp->next=n;
	
		
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

int main(){
	
	linklist1 list1;
	list1.addbeg('d');	list1.addbeg('g');
	list1.addbeg('x');	list1.addbeg('p');
	list1.display();
	list1.addend('y');	list1.addend('h');
	list1.display();
}
