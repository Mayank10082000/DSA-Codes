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
   void insert (char v) {
        node *temp = NULL;
        if(start == NULL || start->data > v)
        {
            temp = new node;
            temp->next = start;
            start = temp;
            temp->data=v;
            return;
        }
        
        temp = start;
        
        while( temp->next != NULL && temp->next->data < v )
        {
            temp = temp->next;
        }
        node *t = new node;
        t->next =  temp->next;
        temp->next = t;
        t->data=v;
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
			cout<<temp->data; 
			temp=temp->next;
		}
		cout<<'\n';
		
	}
	
	
};

int main(){
	
	linklist1 list1;
	
	list1.insert('d');	list1.insert('g');	list1.insert('x');	list1.insert('p');
    list1.display();
	list1.insert('y');	list1.insert('h');
	list1.display();
	list1.removefirst();   list1.removefirst();   list1.removefirst();
	list1.display();
}
