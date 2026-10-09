#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2;
    char op;
    printf("Enter the values of a: ");
    scanf("%d",&num1);
    printf("Enter the values of b: ");
    scanf("%d",&num2);

    printf("Enter any operator (+, -, *, /): ");
    // getch();
    scanf("%c",&op);
    
    switch (op)
    {
    case '+':
        printf("Addition = %d",num1+num2); break;
        case '-':
        printf("Subtraction = %d",num1-num2); break;
        case '*':
        printf("Multiplication = %d",num1*num2); break;
    case '/':
        printf("Division = %d",num1/num2); break;
        
    default:
        printf("Invalid choice");
    }
    return 0;
}


// int num;
//     printf("Enter any number b/w 1-7: ");
//     scanf("%d", &num);

//     switch (num)
//     {

//     case 1:
//         printf("Monday");
//         break;
//     case 2:
//         printf("Tuesday");
//         break;
//     case 3:
//         printf("Wednesday");
//         break;
//     case 4:
//         printf("Thursday");
//         break;
//     case 5:
//         printf("Friday");
//         break;
//     case 6:
//         printf("Saturday");
//         break;
//     case 7:
//         printf("Sunday");
//         break;

//     default:
//         printf("Thik se type kar");
//     }