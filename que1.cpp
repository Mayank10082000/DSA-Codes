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
   //Complete following function only
   int size(){
    int c=0;
    node *t;
    t=start;
    if(start==NULL)
    {
    	return 0;
	}
    while(t!=NULL)
    {
    	t=t->next;
    	c++;
	}
	return c;   
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
	void removefirst(){
		if(start==NULL){
		//	cout<<"list empty    Nothing to do";
			return;
		}
		node *t;
		t=start->next;
		
	//	cout<<start->data << "  removed from list \n";
		delete start;
		start=t;
		
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
	cout<<list1.size()<<"\n";
	list1.addbeg('d');	list1.addbeg('g');	list1.addbeg('x');	list1.addbeg('p');
	cout<<list1.size()<<"\n";
	list1.addend('y');	list1.addend('h');
	cout<<list1.size()<<"\n";
	list1.removefirst();   list1.removefirst();   list1.removefirst();
	cout<<list1.size()<<"\n";
}
