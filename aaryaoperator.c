#include<stdio.h>
int main()

{
    char operators;
    int number_1,number_2,result;

     printf("enter a operator:");
    scanf("%c",&operators);

    printf("Enter the two numbers:");
    scanf("%d %d",&number_1,&number_2);




    switch(operators)
 {


     case '+':
         result = number_1 + number_2;
         printf("Addition of the two numbers %d and %d is %d",number_1,number_2,result);
         break;

         case '*':
             result = number_1 * number_2;
         printf("multiplication of the two numbers%d and %d is %d",number_1,number_2,result);
         break;

         case '-':
             result = number_1 - number_2;
         printf("subtraction of the two numbers%d and %d is %d",number_1,number_2,result);
         break;


         case '%':
             result = number_1 % number_2;
         printf("mod of the two numbers%d and %d is %d",number_1,number_2,result);
         break;

         case '/':
             result = number_1 / number_2;
         printf("division of the two numbers%d and %d is %d",number_1,number_2,result);
         break;

         default:
            printf("invalid input");


 }
}
