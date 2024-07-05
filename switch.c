#include<stdio.h>
int main(){
	int a,b;
	char var;
	printf("Enter the value of num-1:=");
	scanf("%d",&a);
	printf("Enter the value of num-2:=");
	scanf("%d",&b);
	printf("Enter the condition if your want to do:=");
	scanf("%c",&var);
	switch(var){
		case '+': 
		printf("The value of a+b:= %d",a+b);
		break;
		case '-': 
		printf("The value of a-b:= %d",a-b);
		break;
		case '*': 
		printf("The value of a*b:= %d",a*b);
		break;
		case '/': 
		printf("The value of a/b:= %d",a/b);
		break;
	}
}
