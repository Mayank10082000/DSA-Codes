#include<iostream>
using namespace std;

struct node{
	int  data;
	node *next;
};

class linklist1 {
	node * start;
public:
	linklist1(){
		start=NULL; 
	}

	void insert (int v) {
       
       node *t;
    	t=new node;
    	t->data=v;
    		
       
	   if (start == NULL || start->data >= v)
       {
            t->next=start;
			start=t;
    		return;
       }
        
        node *temp;
        temp = start;
        while (temp->next != NULL && temp->next->data < v)
            temp = temp->next;
        
		t->next = temp->next;
        temp->next = t;
   
       
   }
	node* getstartptr(){
		return start;
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
linklist1 merge(linklist1 a, linklist1 b){
	node * p, *q;
	linklist1 c;
	p=a.getstartptr();
	q=b.getstartptr();

    while(p!=NULL){
    	c.insert(p->data); p=p->next;
	}
    while(q!=NULL){
    	c.insert(q->data); q=q->next;
	}
	return c;
}



int main(){
	
	linklist1 list1,list2;
	list1.insert(23);	list1.insert(1);
	list1.insert(7);	list1.insert(22);
	list1.display();
	list2.insert(12);	list2.insert(10);
	list2.display();
    linklist1 list3=merge(list1,list2);
    list3.display();
}
