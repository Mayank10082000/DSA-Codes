#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

struct node *head = 0; 

void addbeg(int x){
	node *temp;
	temp = new node;
	temp -> data = x;
	temp -> next = head;
	head = temp;
}

void addend(int x){
	node *temp, *newnode;
	newnode = new node;
	temp = head;
	newnode -> data = x;
	newnode -> next = 0;
	while(temp -> next != 0){
		temp = temp -> next;
	}
	
	temp -> next = newnode;
}

void evenafterodd(){
    node *odd, *even, *evenstart;
    odd = new node;
    even = new node;
    evenstart = even;
    odd = head;
    even =head -> next;
    while(odd -> next != 0 && even -> next != 0){
        odd -> next = even -> next;
        odd = odd -> next;
        even -> next = odd -> next;
        even = even -> next;
    }
    odd -> next = evenstart;
    if(odd -> next == 0){
        even -> next = 0;
    }
}

void display(){
    node *temp;
    temp = new node;
    temp = head;
    while(temp != 0){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << "NULL";
    cout << "\n";
}

int main(){
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

    evenafterodd();
    display();
    return 0;
}