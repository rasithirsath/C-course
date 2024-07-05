#include<stdio.h>          //2 rows 5column
int main(){
	int i,j,arr[2][4]={{10,20,30,50},{60,70,80,90}};
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			
			printf("%p\t",arr[i][j]);
		}
		printf("\n\n");
	}
}
