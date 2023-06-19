// greater fun using if else
#include<stdio.h>
int main()
{
    int num1; 
    int num2;
    printf("entre the 1st no:");
    scanf("%d",&num1);
    printf("entre the 2nd no:");
    scanf("%d",&num2);
    if(num1>num2){
        printf(" num1 is greater");
        
    }
    else{
        printf("num2 is greater");
        
    }
    return 0;
    
}
ternary fn
#include <stdio.h>

int findLargest(int a, int b) {
    int largest = (a > b) ? a : b;
    return largest;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = findLargest(num1, num2);
    printf("The largest number is: %d\n", result);
    return 0;
}
