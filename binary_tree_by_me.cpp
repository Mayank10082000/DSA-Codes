#include<iostream>

using namespace std;

struct node
{
	int data;
	node *left, *right;
};

struct node *root = 0;

node *create()
{
	int x;
	node *newnode;
	
	cout << "enter data (-1 for no data) : ";
	cin >> x;
	
	if(x == -1)
		return 0;
	
	newnode = new node;
	newnode -> data = x;
	
	cout << "enter left child of " << x << " : ";
	newnode -> left = create();
	
	cout << "enter right child of " << x << " : ";
	newnode -> right = create();
	
	return newnode;
}

void preorder(node *root)
{
	if(root == 0)
	{
		return;
	}
	
	cout << root -> data << " ";
	preorder(root -> left);
	preorder(root -> right);
}

void inorder(node *root)
{
	if(root == 0)
	{
		return;
	}
	
	inorder(root -> left);
	cout << root -> data << " ";
	inorder(root -> right);
}

void postorder(node *root)
{
	if(root == 0)
	{
		return;
	}
	
	postorder(root -> left);
	postorder(root -> right);
	cout << root -> data << " ";
}

int main()
{
	root = create();
	cout << "preorder is : ";
	preorder(root);
	
	cout << "inorder is : ";
	inorder(root);
	
	cout << "postorder is : ";
	postorder(root);
	
	return 0;
}
