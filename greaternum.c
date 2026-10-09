#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d %d",&num1,&num2);
    if (num1 > num2){
        printf("The num1 is greater");
    }
    else if (num1 < num2){
        printf("The num2 is greater");
    }
    else {
        printf("Ethier the values are equal or uknown input");
    }
    return 0;
}