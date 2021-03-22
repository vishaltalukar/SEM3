#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp1, *fp2, *fp3;
	fp1=fopen("usn1.txt","r");
	fp2=fopen("usn2.txt","r");
	fp3=fopen("usn3.txt","w");
	char str1[20],str2[20];
	
	fscanf(fp1,"%s",str1);
	fscanf(fp2,"%s",str2);
	
	while(!feof(fp1) && !feof(fp2)){
		if(strcmp(str1,str2)<0){
			fprintf(fp3,"%s",str1);
			fscanf(fp1,"%s",str1);
		}
		else if(strcmp(str1,str2)>0){
			fprintf(fp3,"%s",str2);
			fscanf(fp2,"%s",str2);
		}
		else{
			fprintf(fp3,"%s",str1);
			printf("%s",str1);
			fscanf(fp1,"%s",str1);
			fscanf(fp1,"%s",str2);
		}
	}
	
	if(feof(fp1)){
		while(!feof(fp2)){
			fprintf(fp3,"%s",str2);
			fscanf(fp2,"%s",str2);
		}
		fprintf(fp3,"%s",str2);
	}
	
	if(feof(fp2)){
		while(!feof(fp1)){
			fprintf(fp3,"%s",str1);
			fscanf(fp1,"%s",str1);
		}
		fprintf(fp3,"%s",str1);
	}
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	return 0;
}
