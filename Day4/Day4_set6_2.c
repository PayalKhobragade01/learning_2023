#include <stdio.h>
#include <stdlib.h>

int stringToInteger(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
  
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        }
        i++;
    }

    return result * sign;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int num = stringToInteger(str);
    printf("The converted integer is: %d\n", num);

    return 0;
}