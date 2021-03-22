/*
Develop  and  execute  a  program  in  C  using  suitable  data  structures  
to  perform  Searching  a     data  item in an ordered list of items 
in both directions and implement the following operations:

a.Create a doubly linked list by adding each node at the start.

b.Insert a new node at the end of the list.

c.Display the content of a list.


*/
#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* prev;
	struct node* next;
};

struct node* head;
struct node* tail;

void insertfront(){
	int x;
	printf("\n enter the value to insert front = ");
	scanf("%d",&x);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	
	
	if(head==NULL)	{
		head=tail=newnode;
		printf("\n Inserted \n");
	}
	else{
	    
		newnode->next=head;	
		head->prev=newnode;	
		head=newnode;
		printf("\n Inserted\n");
	}
}


void insertrear(){
	int x;
	printf("\n enter the value to insert rear = ");
	scanf("%d",&x);
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL){
		head=tail=newnode;
		
	}
	else{
	    while(tail->next!=NULL){
	        tail=tail->next;
	    }
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
	
}
void searchfront(int x){
    int count=0;
    struct node* temp;
    temp=head;
    while(temp!=NULL && temp->data!=x){
        temp=temp->next;
        count++;
    }
    if(temp==NULL){
    	printf("\n not found \n");
    }
    else if(temp->data==x) {    
      
        count++;
        printf("\n found element at %d value is = %d\n",count,temp->data);
    }
}

void searchrear(int x){
    int count1=0;
    struct node* temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
   }
   tail=temp;
    while(tail!=NULL && tail->data!=x){
        tail=tail->prev;
        count1++;
    }
    if(tail==NULL){
    	printf("\n not found \n");
        
    }
    else if(tail->data==x){
    	count1++;
        printf("\n found element at %d value is = %d\n",count1,tail->data);
    }
        
}

void display(){
	struct node* temp;
	temp=head;
	if(temp==NULL){
		printf("\nempty\n");
	}
	
	while(temp!=NULL){
		printf(" %d -> ",temp->data);
		temp=temp->next;
	}
}
int main(){
    head=NULL;
    tail=NULL;
	int i,f,r;
	while(1){
		printf("\n 1: insert \n 2 insert rear \n 3 display \n 4 serach form front \n 5 search form rear\n 6 exit \n");
		scanf("%d",&i);		
		switch(i){
			case 1:
				insertfront();
				break;
			case 2 :
				insertrear();
				break;
				
			case 3 : 
				display();
				break;
			case 4 :
			    printf("\n enter number to be searched form front\n");
			    scanf("%d",&f);
			    searchfront(f);
			    break;
			case 5 :
			    printf("\n enter number to be searched form rear\n");
			    scanf("%d",&r);
			    searchrear(r);
			    break;
			case 6:
				exit(0);		
		}	}	}



