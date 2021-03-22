//INFIX TO POSTFIX
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stk[20];
int top=-1;

void push(char x){
	stk[++top]=x;
}
char pop(){
	if(top==-1)
		return -1;
	else
		return stk[top--];
}

int p(char a){
	if(a=='(')
		return 0;
	if(a=='+' || a=='-')
		return 1;
	if(a=='*' || a=='/')
		return 2;
}

int main(){
	char exp[20];
	char *e,ex;
	
	printf("Enter the expressin \n ");
	scanf("%s",exp);
	
	e=exp;
	while(*e!='\0'){
		if(isdigit(*e)){
			printf("%c",*e);
		}
		else if(*e=='(')
			push(*e);
		else if(*e==')'){
			while((ex==pop())!='('){
				printf("%c",ex);
			}
		}
		else {
			while(p(stk[top])>=p(*e)){
				printf("%c",pop());
			}
			push(*e);
		}
		e++;
	}
	while(top!=-1){
		printf("%c",pop());
	}
		
}
