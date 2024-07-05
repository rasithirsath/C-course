// C program to Demonstrate returning of day based numeric
// value
#include <stdio.h>

int main()
{
  // switch variable
  int a,b;
  int var;
    printf("Enter the value of a:=");
    scanf("%d",&a);
    printf("Enter the value of b:=");
    scanf("%d",&b);
      printf("Enter the process of var:=");
    scanf("%d",&var);
    
    

  // switch statement
    switch (var) {
        case 1:
            printf("Addition:=%d",a+b);
            break;

        case 2:
            printf("Subtraction:=%d",a-b);
            break;

        case 3:
            printf("multiple:=%d",a*b);
            break;
        case 4:
            printf("divide:=%d",a/b);
            break;

        default:
            printf("Default case is Matched.");
            break;
    }

    return 0;
}


