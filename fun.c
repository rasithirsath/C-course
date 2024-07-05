#include<stdio.h>
void printGreeting(int num){
	 for(int i=0;i<num;i++){
		printf("%d",i);
	}


}
int main(){
	int i,num;
	printGreeting(5);
	return 0;
}
