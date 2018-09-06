#include <stdio.h>


void squareInt(int * input){
*input *= *input;
}

void squareDouble(double * input){
*input *= *input;
}

void squareVoid(void * input){
double * temp = (double *)input;
*temp *= *temp;
printf("%lf\n",*temp);
input = temp;
printf("%lf\n",(double *)input);

}


void challenge_chapter91(){

int a = 9;
double b = 12.5;
int * pA = &a;
double * pB = &b;
double * pC = &a;


printf("Adress of pointer pA: %p\nValue of pointer pA: %p\nValue of what pA is pointing to=%d\n",&pA,pA,*pA);

printf("Input: %d %lf\n",a,b);
squareDouble(pC);
squareDouble(pB);
printf("Output: %d %lf\n",a,b);

}
