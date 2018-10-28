#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1,num2,result;
    int op;
    char option;
 do{
    printf("Welcome to Calculator 2.0\n");
    printf("Select Any one Option: \n");
    printf("Press 1. for Addition\n");
    printf("Press 2. for Subtraction\n");
    printf("Press 3. for Multiplication\n");
    printf("Press 4. for Division\n");
    printf("Select Option >>");
    scanf("%d",&op);

    if(op<1 || op > 4)
    {
        printf("Enter valid Input");
    }
    else {
        printf("Enter First Number >>");
        scanf("%f",&num1);
        printf("Enter Second Number >>");
        scanf("%f",&num2);
    }

    switch(op)
    {
    case 1:
        result = num1 + num2;
        printf("\nAddition of %.2f and %.2f is %.2f",num1,num2,result);
        break;
    case 2:
        result = num1 - num2;
        printf("\nSubtraction of %.2f and %.2f is %.2f",num1,num2,result);
        break;
    case 3:
        result = num1 * num2;
        printf("\nMultiplication of %.2f and %.2f is %.2f",num1,num2,result);
        break;
    case 4:
        if(num2 == 0){
            printf("Error(x546)- Invalid Number second");
            break;
        }
        result = num1 / num2;
        printf("\nDivision of %.2f and %.2f is %.2f",num1,num2,result);
        break;
    }

    printf("\n\nDo you want to continue Y/N:");
    scanf("%c",option);

 }while(option =='y' || option =='Y');


    getch();
}
