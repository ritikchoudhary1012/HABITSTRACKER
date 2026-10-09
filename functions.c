#include <stdio.h>

// void Sum(){
//     int a=5,b=6;
//     printf("Sum = %d\n",a+b);
// }
// void Sum(int a,int b){
//     printf("Sum = %d\n",a+b);
// }
int Sum(int a,int b){
    return a+b;
}

int main(){
    // printf("Hello");
    int r1 = Sum(4,5);
    int r2 = Sum(2,3);
    int r3 = Sum(16,32);
    int r4 = Sum(12,87);
    int r5 = Sum(12,21);

    printf("%d %d %d %d %d",r1,r2,r3,r4,r5);
    return 0;
}