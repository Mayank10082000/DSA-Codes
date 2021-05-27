#include<iostream>
#include<cstdlib>

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

void delatbeg(){
	node *temp;
	temp = new node;
	temp = head;
	head = head -> next;
	free(temp);
}

void delatend(){
	node *temp, *prevnode;
	temp = new node;
	prevnode = new node;
	temp = head;
	while(temp -> next != 0){
		prevnode = temp;
		temp = temp -> next;
	}
	prevnode -> next = 0;
	free(temp);
}

void delatpos(){
	int pos, i = 1;
	node *temp, *nextnode;
	temp = new node;
	nextnode = new node;
	temp = head;
	cout << "enter position : ";
	cin >> pos;
	while(i < pos-1){
		temp = temp -> next;
		i++;
	}
	nextnode = temp -> next;
	temp -> next = nextnode -> next;
	free(nextnode); 
}

void addatpos(int x){
	int pos;
	node *temp, *newnode;
	newnode = new node;
	newnode -> data = x;
	temp = head;
	cout << "enter position : ";
	cin >> pos;
	
	for(int i = 0; i < pos - 2; i++){
		temp = temp ->next;
	}
	newnode -> next = temp -> next;
	temp -> next = newnode;
}

void display(){
	node *temp;
	temp = new node;
	temp = head;
	while(temp != 0){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n";
}

void lenofll(){
	node *temp;
	temp = new node;
	temp = head;
	int c = 0;
	while(temp != 0){
		c++;
		temp = temp -> next;
	}
	cout << "length is : " << c << "\n";
}

int main(){
	addbeg(1);
	addbeg(2);
	addbeg(3);
	addbeg(4);
	addbeg(5);
	display();
	lenofll();
	
	addend(6);
	addend(7);
	addend(8);
	display();
	lenofll();
	
	addatpos(9);
	display();
	
	delatbeg();
	display();
	
	delatend();
	display();
	
	delatpos();
	display();
	
	return 0;
}