#include<stdio.h>
int main(){
	int i,num,sto=0;
	printf("Enter the Range if you want to add:=");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		sto+=i;
	}
	printf("The final of add is := %d",sto);
		
	
}
