#include<stdio.h>
int main(){
	int num;
	printf("Enter the if you want to check:=");
	scanf("%d",&num);
	
	if (num>=10 && num<=99){
		printf("The Number is Double digit:= %d",num);
	}
	else if (num>=100 && num<=999){
		printf("The Number is Triple digit:= %d",num);
	}
	else{
		printf("The Given Number is Nor Double and Not Triple");
	}
}
