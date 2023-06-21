//Using if – else Statements

#include<stdio.h>

int main ()
{
  int num1, num2;
  num1=20,num2=50;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2) 
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}



//Using Ternary Operator

#include <stdio.h>
int main ()
{
    int num1, num2, temp;
    
    num1=20,num2=50;
    if(num1 == num2)
        printf("Both are Equal\n");
    else{
        temp = num1 > num2? num1 : num2;
        printf("%d is Greater",temp);
    }

  return 0;
}