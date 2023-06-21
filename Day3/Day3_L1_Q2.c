//using loops
#include<stdio.h>
void printBits(unsigned int num){
    int i;
    unsigned int mask =1<<31;  //start with the leftmost bit
    for(i=0;i<32;i++){
        //print the current bit(either 0 or 1)
        printf("%d",(num & mask)?1:0);

        //shift the mask to the right the next bit
        mask>>=1;
    }
    printf("/n");


}
int main(){
    unsigned int number;
    printf("entre the 32 bit integer:");
    scanf("%u",&number);

    printf("binary representation:");
    printBits(number);

    return 0;

    
}

//using bitwise operator
#include <stdio.h>

void printBits(unsigned int num) {
    unsigned int mask = 1 << 31;  // Start with the leftmost bit (most significant bit)

    for (int i = 0; i < 32; i++) {
        // Print the current bit (either 0 or 1)
        printf("%d", (num & mask) ? 1 : 0);

        // Shift the mask to the right for the next bit
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int number;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &number);

    printf("Binary representation: ");
    printBits(number);

    return 0;
}
