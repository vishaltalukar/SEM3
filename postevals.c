#include<stdio.h>
#include<stdlib.h>

double eval(char exp[]){
	double op1,op2,stk[20];
	char symb;
	int i=0;
	int top=-1;
	
	do{
		symb=exp[i];
		if(symb>'0' && symb<'9'){
			stk[++top]=symb-'0';
		}
		else{
			op2=stk[top--];
			op1=stk[top--];
			
			switch(symb){
				case '+' : stk[++top]=op1+op2;
				break;
				case '-' : stk[++top]=op1-op2;
				break;
				case '*' : stk[++top]=op1*op2;
				break;
				case '/': stk[++top]=op1/op2;
				break;
			}
			
		}
	}while(exp[++i]!='\0');
	
	return stk[top];
}
main(){
	char e[20];
	printf("enter the expression \n");
	scanf("%s",e);
	printf("\n the value is %lf",eval(e));
	
	
	
}
