#include <stdio.h>

int main(){
    char str[2];
    char key = 'B';
    printf("Enter a string : ");
    gets(str);
    printf("You entered: %s", str);
    if (key == 'A') {
        printf("Sucesso!");
    } else {
        printf("Tente novamente...");
    }

    return(0);
}