#include<stdio.h>

int main(){
    double num1;
    double num2;
    char op;

    printf("Enter a Number:\n");
    scanf("\n%lf",&num1);

    printf("Enter Number:\n");
    scanf("\n%lf",&num2);

    printf("Enter Operator:");
    scanf("\n%c",&op);

  switch(op){
    case'+':
         printf("The Sum is:%lf",num1+num2);
         break;
    case'-':
         printf("The Difference is:%lf ",num1-num2);
         break;
    case'*':
         printf("The Multiplication is:%lf",num1*num2);
         break;
    case'/':
        printf("The Division is:%lf",num1/num2);
        break;
    default:
        printf("Invalid Operator.");
        break;
  }
  return 0;
}
