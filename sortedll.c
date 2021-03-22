//sorted list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;

void insert(int x){
	
	struct node *temp,*pre;
	struct node* newnode
		= (struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	
	if(head==NULL){
		head=newnode;
		printf("Inserted ");
		return ;
	}
	if(head==NULL || x<head->data){
	    newnode->next=head;
	    head=newnode;
	    		printf("Inserted ");

	}
	else {
	temp=head;
	while(temp->next!=NULL && temp->next->data < x){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	    		printf("Inserted ");

	}	
}

void display(){
    struct node *temp;
	temp=head;
	if(temp==NULL){
	    printf("empty");
	}
	else{
	while(temp!=NULL){
		printf("\n%d : ",temp->data);
		temp=temp->next;
	}
	}
}
int main(){
    head=NULL;
	int i,p;
	while(1){
		printf("\n 1: insert \n 2 display \n 3 exit \n");
		scanf("%d",&i);		
		switch(i){
			case 1:
				printf(" \n enter the number : ");
				scanf("%d",&p);
				insert(p);
				break;
			case 2 : 
				display();
				break;
			case 3:
				exit(0);		
		}	}	}
