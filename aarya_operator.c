#include<stdio.h>

void main()

{
          char opt ,*p5 = &opt;

          printf("Enter the operator:");
          scanf("%c",&opt);

          switch(opt)
          {
               case'+':
              {

               float num1,num2,*p1=&num1,*p2 =&num2;

               printf("enter two no.s for the add : ");
               scanf("%f" "%f",&num1,&num2);

               printf("here the addition of %f and %f is %f:",*p1,*p2,*p1 + *p2);
               break;
              }

               case'-':
               {

               float num1,num2,*p1=&num1,*p2 =&num2;

               printf("enter two no.s for the sub : ");
               scanf("%f" "%f",&num1,&num2);

               printf("here the subtraction of %f and %f is %f:",*p1,*p2,*p1 - *p2);
               break;
               }


               case'*':
              {

               float num1,num2,*p1=&num1,*p2 =&num2;

               printf("enter two no.s for the multiplication : ");
               scanf("%f" "%f",&num1,&num2);

               printf("here the multiplication of %f and %f is %f:",*p1,*p2,*p1 * *p2);
               break;
              }




               case'/':
          {


               float num1,num2,*p1=&num1,*p2 =&num2;

               printf("enter two no.s for the div : ");
               scanf("%f" "%f",&num1,&num2);

               printf("here the division of %f and %f is %f:",*p1,*p2,*p1 / *p2);
               break;
          }
           case'%':
          {


               int  num1,num2,*p1=&num1,*p2 =&num2;

               printf("enter two no.s for the mod : ");
               scanf("%d" "%d",&num1,&num2);

               printf("here the mod of %d and %d is %d:",*p1,*p2,*p1 % *p2);
               break;
          }

          default:
          {
                    printf("not valid");
          }



          }

}
