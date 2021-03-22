//EXPT 9 TREE  
#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
	int data;
	struct node *left,*right;
	
};

struct node *head;

struct node* create(int x){
//	struct node *temp;

	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=x;
	newnode->left=NULL;
	newnode->right=NULL;
	count++;
	return newnode;
	
}
int nonterm(struct node* head){
	if(head==NULL || (head->left== NULL && head->right ==NULL))
		return 0;
	return 1+nonterm(head->left)+nonterm(head->right);	
	
}

int leaf(struct node *head){
	if(head==NULL)
		return 0;
	if(head->left==NULL && head->right==NULL)
		return 1;
	else 
		return leaf(head->left) + leaf(head->right);
}

int two(struct node *head){
	if(head==NULL)
		return 0;
	if(head->left !=NULL && head->right!=NULL)
		return 1;
	return two(head->left)+two(head->right);
}
void displayin(struct node*head){
	if(head==NULL){
		return;
	}
		displayin(head->left);
		
	printf("%d ->",head->data);

	displayin(head->right);
}

int main(){
	head=NULL;
	head=create(1);
	head->left = create(2);
	head->right = create(3);
	head->left->left = create(4);
	head->left->right = create(5);
	head->right->right = create(6);
	printf("\n The tree is \n");
	displayin(head);
	printf("\n non leaf nodes %d\n",nonterm(head));
	printf("\n leaf nodes %d\n",leaf(head));
	printf("\n node with degree 2 == %d\n",two(head));
	printf("\n number of nodes = %d\n",count);
	return 0;
}

