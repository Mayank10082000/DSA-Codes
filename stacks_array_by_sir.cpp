#include<iostream>

using namespace std;

int a[100], top = -1;

void pop(){
	if(top == -1){
		cout << "underflow condition";
	}
	else{
		top--;
	}
}

void push(int x)
{
    top++;
    if(top == sizeof(a))
	{
        cout << "overflow condition";
    }
    else
	{
        a[top] = x;
    }
}

void peek(){
    if(top == -1){
        cout << "empty stack";
    }
    else{
        cout << top;
    }
}

void display(){
    for(int i=0; i<=top; i++){
        cout << a[i] << endl;
    }
}


int main(){
    
    push(8);
    push(10);
    push(11);
    push(12);
    push(13);
    display();
    pop();
    pop();
    display();
    peek();   
}
