//MSGQ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Q{
	char data[5][100];
	int front,rear;
};
typedef struct Q queue;

void insert(queue *q,char item[100]){
	if(q->front==((q->rear+1))){
		printf("\nfull\n");
	}
	else{
		q->rear=(q->rear+1);
		strcpy(q->data[q->rear],item);
		if(q->front=-1){
			q->front=(q->front+1);
		}
	}
}
void rec(queue *q){
	char *del;
	if(q->front==-1){
		printf("\n empty\n");
	}
	else{
		del=q->data[q->front];
		printf("\n message is : %s\n",del);
		if(q->front==q->rear){
			q->front=-1;
			q->rear=-1;
		}
		else{
			q->front=(q->front+1);
		}
	}
}


int main(){
	
	char msg[100];
	queue q;
	q.front=-1;
	q.rear=-1;
	int i;
	while(1){
		printf("\n 1 : send\n 2 : rec \n 3: exit \n");
		scanf("%d",&i);
		switch(i){
			case 1: printf("enter the message \n");
				getchar();
				scanf("%s",msg);
				insert(&q,msg);
				break;
			case 2:
				rec(&q);
				break;
			case 3:
				exit(0);
		}
	}
	return 0;
}
