//p
#include<stdio.h>
#include<stdlib.h>

struct node{
	int co;
	int po;
	struct node *next;
};
struct node *pol1;
struct node *pol2;

void poly1(int c, int p){
	struct node* temp;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->co=c;
	newnode->po=p;
	newnode->next=NULL;
		
	if(pol1==NULL){
		pol1=newnode;
	
	}

	else{
	temp=pol1;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		
	}
}


void poly2(int c, int p){
	struct node* temp;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->co=c;
	newnode->po=p;
	newnode->next=NULL;
	
	if(pol2==NULL){
		pol2=newnode;
	}
	
	else{
    temp=pol2;
	while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void p(){//main func
    
   struct node* temp;
   struct node* temp2;
    temp=pol1;
    temp2=pol2;
   int a,b,c,d;
    while(temp!=NULL && temp2!=NULL){
        if(temp->po >  temp2->po){
            printf(" %d^%d",temp->co,temp->po);
            temp=temp->next;
        } 
        else if(temp->po <  temp2->po){
            printf(" %d^%d",temp2->co,temp2->po);
            temp2=temp2->next;
         }
        else if(temp->po == temp2->po){
            printf(" %d^%d",temp->co+temp2->co,temp->po);
            temp=temp->next;
            temp2=temp2->next;
         }       
    }
     if(temp==NULL){
             while(temp2!=NULL){
                 printf(" %d^%d ",temp2->co,temp2->po);
                 temp2=temp2->next;
             }
         }
    else if(temp2==NULL){
        while(temp!=NULL){
            printf(" %d^%d ",temp->co,temp->po) ;
            temp=temp->next;
        }
    }
}
int main(){
	
	pol1=NULL;
	pol2=NULL;
	poly1(3,14);
	poly1(2,8);
	poly1(1,0);
	poly2(100,45);
	poly2(8,14);
	poly2(4,6);
	poly2(1,5);	
	p();
}
