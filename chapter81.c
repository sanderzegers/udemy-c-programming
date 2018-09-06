#include <stdio.h>


void chapter81(){

int number = 15;
int number2 = 41;
int * pNumber = &number; //&: get address of number
int * pNumber2 = &number2;

printf("&pNumber=%d\n",*pNumber); //*: get value of variable pNumber is pointed too
printf("pNumber=%p\n",pNumber);
printf("pnumber's address=%p\n",(void *)&pNumber); //cast 'pointer to pointer to int' to pointer to int


printf("&pNumber2=%d\n",*pNumber2); //*: get value of variable pNumber is pointed too
printf("pNumber2=%p\n",pNumber2);



// --- it's about where you place the const keyword
// const int * value1 // value cannot be changed
// int * const value2 // pointer address connect be changed

long tempValue = 9999L;
long tempValue2 = 1111L;
const long *ptempValue = &tempValue; //Cannot change value of Variable ptempValue is pointing to.

printf("*ptempValue: %ld\n",*ptempValue);

//ILLEGAL: *ptempValue = 123123L;
ptempValue = &tempValue2;


printf("ptempValue = &tempValue2;\n*ptempValue: %ld\n",*ptempValue);

tempValue = 2222L;

long int *const ptempValue2 = &tempValue;

printf("*ptempValue2: %ld\n",*ptempValue2);

*ptempValue2 = 123123L;
//ILLEGAL: ptempValue2 = &tempValue2;


printf("ptempValue2 = &tempValue2;\n*ptempValue: %ld\n",*ptempValue2);



// -- void pointer --

//void = absence of any type
//void* = pointer can store any date type

// void pointer does not know what type it's pointing to, so cannot be derefenced
// must be cast to type before it can be dereferenced


int i=10;
float f=2.34;
char ch ='k';

void *vptr;

vptr=&i;
printf("Value of i=%d\n",*(int*)vptr);

vptr=&f;
printf("Value of i=%f\n",*(float*)vptr);


vptr=&ch;
printf("Value of i=%c\n",*(char*)vptr);



// Pointers and Arrays
/*



*/


int values[100];

for(int i=0; i<=99;i++){
    values[i] = i;
}

int *pValuesArray;

int *pValuesArray2 = &values[10];

pValuesArray = values; //Points to first address in the array. Array is like a pointer //adress operator is not used!
// = the same:
//pValuesArray = &values[0];

//values[i] = *(values+1)

for(int i=0;i<=99;i++){
    printf("%d,",*(pValuesArray+i));
}

printf("\npValuesArray2[10-6]=%d",*(pValuesArray2-6));


}
