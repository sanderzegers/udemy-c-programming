#include <stdio.h>

//int arraySum(int * array, const int length){ //<<- also possible
int arraySum(int array[],const int length){

int sum = 0;
int *ptr;

int * const arrayEnd = array + length;

for (ptr=array;ptr<arrayEnd;ptr++){
    sum += *ptr;
}

return sum;
}


void swap2(int * input1, int* input2){

int temp = *input1;
*input1 = *input2;
*input2 = temp;

}

void chapter86(){

int values[10]={3,7,-9,3,6,-1,7,9,1,-5};

printf("The sum is %i\n",arraySum(values,10));


int number1 = 10;
int number2 = 12;

printf("number1: %d, number2: %d\n",number1,number2);
swap2(&number1,&number2);
printf("number1: %d, number2: %d\n",number1,number2);
}
