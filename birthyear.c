#include<stdio.h>
int main(){
	int year,cur_year,age;
	printf("**************** BIRTH YEAR CALCULTOR ****************\n\n");
	printf("Enter the cur_year:=");
	scanf("%d",&cur_year);
	printf("Enter your Age:=");
	scanf("%d",&age);
	year=cur_year-age;
	printf("\nThe cur_year is:=%d\n\n",cur_year);
	printf("Your Age is:=%d\n\n",age);
	printf("Awesome your birth year is:=%d",year);
}
