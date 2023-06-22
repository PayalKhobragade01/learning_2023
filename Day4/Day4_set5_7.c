// Binary to decimal Conversion

#include <stdio.h>
#include <math.h>

int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}









// Octa to decimal Conversion

#include <stdio.h>
#include <math.h>


long long convertOctalToDecimal(int octalNumber);

int main() {

    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}


long long convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0) {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}









// Hexa decimal to decimal Conversion

#include <math.h>
#include <stdio.h>
#include <string.h>
  
int main()
{
    int decimalNumber = 0;

    char hexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    char hexadecimalnumber[30] = "2D";
    int i, j, power = 0, digit;
  
    for (i = strlen(hexadecimalnumber) - 1; i >= 0; i--) {
  

        for (j = 0; j < 16; j++) {
            if (hexadecimalnumber[i] == hexDigits[j]) {
                decimalNumber += j * pow(16, power);
            }
        }
        power++;
    }

    printf("Decimal Number : %d", decimalNumber);
  
    return 0;
}