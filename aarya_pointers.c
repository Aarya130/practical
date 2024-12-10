#include<stdio.h>
void main()

{
          int a;
          char b;
          float c;


          printf("Enter the character:");
          scanf("%c",&b);

          printf("Enter the no:");
          scanf("%d",&a);



          printf("\nEnter the float:");
          scanf("%f",&c);

          int*p1;
          p1 = &a;

          char*p2;
          p2 = &b;

          float*p3;
          p3 = &c;

          printf("\nInteger: %d\nCharacter: %c\nFloat: %.2f\n",*p1,*p2,*p3);
}
