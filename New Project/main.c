#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    int num1;
    int num2;
    float result;

    printf("Welcome to Simple Calculator!\n");
    printf("Enter Operator (+,-,*,/) :");
    scanf("%c",&operator);

    printf("Number01 :");
    scanf("%d",&num1);

    printf("Number02 :");
    scanf("%d",&num2);

    switch(operator){
     case'+':
       result=num1+num2;
       printf("%d + %d = %d",num1,num2,result);
       break;
     case'-':
       result=num1-num2;
       printf("%d - %d = %d",num1,num2,result);
       break;
     case'*':
       result=num1*num2;
       printf("%d * %d = %d",num1,num2,result);
       break;
     case'/':
       result=num1/num2;
       printf("%d / %d = %d",num1,num2,result);
       break;
     default:
       printf("Invalid Input");
     }



    return 0;
}
