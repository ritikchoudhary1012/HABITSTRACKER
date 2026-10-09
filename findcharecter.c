#include <stdio.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter any charecter: ");
    scanf("%c", &a);
    // printf("%d",isalnum(a));
    if (isalnum(a) == 4 || isalnum(a) == 2){
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            printf(" The character is vowel");
        }
        else if (isdigit(a)){
            printf("The number charecters are not allowed");
        }
        else{
            printf("The charecter is consonant");
        }
    }
    else{
        printf("The special charecters are not accepted");
    }
    return 0;
}
