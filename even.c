#include<stdio.h>
int main(){
	int num,i;
	printf("Enter the Range if you want to find even:=");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
		
	}
}
