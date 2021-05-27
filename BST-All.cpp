#include<iostream>

using namespace std;

struct bstnode{
	int val;
	bstnode *left;
	bstnode *right;
};

struct node{
	bstnode *p;
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

	
	void addend(bstnode *t){
		node *n;
		n=new node;
		n->p=t;
		n->next=NULL;
		
		if(start==NULL){
			start=n;
			end=n;
			return;
		}

		end->next=n;
		end=n;
	}
	bstnode* removefirst(){
		if(start==NULL){
			cout<<"QUEUE empty    Nothing to do";
			return NULL;
		}
		
		bstnode *temp = start->p;
				
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
			cout<<temp->p<<'\t';
			temp=temp->next;
		}
		cout<<'\n';

	}
};

class queue{
	linklist d;
public:
	
	void enqueue(bstnode * x){
		d.addend(x);
	}
	bstnode* dequeue(){
		return d.removefirst();
	}
	void print(){
		d.display();
	
	}
};


class BST{
	bstnode * root;
	public :
		BST(){ root=NULL;
		}
	void insert(int d){
		bstnode * t;
		t=new bstnode;
		t->val=d;
		t->left=NULL;
		t->right=NULL;
		
		if(root==NULL){
			root=t;
			return;			
		}
		bstnode *temp=root;
		while(1){
		  if(d < temp->val ){
		  	    if(temp->left==NULL){
		  		temp->left=t;
		  		return;
			    }
			    else temp=temp->left;
		  	
		  }	
		  else{
		  	
		  	
		  	    if(temp->right==NULL){
		  		temp->right=t;
		  		return;
			    }
			    else temp=temp->right;
		  	
		  }
			
		}
	}
    void display(){
    	cout<<"PREORDER :  "; preorder(root); cout<<'\n';
    	cout<<"INORDER :  "; inorder(root); cout<<'\n';
    	cout<<"POSTORDER :  "; postorder(root); cout<<'\n';
    	levelorder();
    	
	}
    void preorder(bstnode *t){
    	if(t==NULL) return;
    	
		cout<< t->val << "    ";
    	preorder(t->left);
    	preorder(t->right);    	
	}
	void inorder(bstnode *t){
    	if(t==NULL) return;
    	
		inorder(t->left);
		cout<< t->val << "    ";
       	inorder(t->right);    
	}
	void postorder(bstnode *t){
    	if(t==NULL) return;
    			
    	postorder(t->left);
    	postorder(t->right);
    	cout<< t->val << "    ";    	
	}
    void levelorder(){
    	bstnode *temp=root;
    	queue q;
		while(temp!=NULL){
    		cout<<temp->val <<"   ";
    		if(temp->left!=NULL) q.enqueue(temp->left);    		
    		if(temp->right!=NULL) q.enqueue(temp->right);   
    		temp=q.dequeue();
		}
    	
    	
	}


};

int main(){
	BST tree;
	tree.insert(10);
	tree.insert(23);
	tree.insert(3);
	tree.insert(12);
	tree.insert(7);
	tree.insert(15);
	tree.insert(5);
	tree.display();
}

