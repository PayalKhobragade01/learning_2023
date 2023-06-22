#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    
    printf("Please Enter any String: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 'a' - 'A';
        
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
    }

    printf("Toggoled string: %s", str); 
    return 0;
}