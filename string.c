#include <stdio.h>
#include<string.h>
int main()
{
char str[20],cpstr[20] ,copy;
printf("Enter the text:=");

gets(str);
strcpy(cpstr,str);
printf("The copped string:=%s",cpstr);
return 0;
}

