#include <stdio.h>

//using loops

int findLargestNumber(int num){
    int largest=0;
    int divisor=1;

    while(divisor<=1000){
        int truncatedNum=(num/divisor/10)*divisor+num%divisor;

        if(truncatedNum>largest){
            largest=truncatedNum;
        }
        divisor*=10;
    
    }
    return largest;
}
int main(){
    int number;
    printf("entr a 4 digit number:");
    scanf("%d",&number);
    
    int largestNumber=findLargestNumber(number);

    printf("Largest Number by deleting a single digit:%d\n",largestNumber);

    return 0;
}

//using basic operator
#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1000;

    while (divisor > 0) {
        int truncatedNum = (num / (divisor / 10)) * divisor + (num % (divisor / 10));

        if (truncatedNum > largest) {
            largest = truncatedNum;
        }

        divisor /= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
