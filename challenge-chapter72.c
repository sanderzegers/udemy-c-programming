#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



//INCOMPLETE Bubblesort

void reverseString(char * string);
void bubbleSort(char **, int length);
void swap(char **input,int position1, int position2);


void challenge_chapter72()
{

    char test[] = "This just works now!";

    printf("Input: %s\n",test);
    reverseString(test);
    printf("Output: %s\n",test);


    char * testArray[4];
    testArray[0] = "test123";
    testArray[1] = "test124";
    testArray[2] = "test125";
    testArray[3] = "test126";


    bubbleSort(testArray,4);

    swap(testArray,0,1);

    bubbleSort(testArray,4);
}



void reverseString(char * string1)
{

    const int length = strlen(string1);

    char temp[length];

    int i = length-1;
    int i2 = 0;

    for (; i>=0,i2<length ; i--,i2++)
    {
        temp[i2]=string1[i];
    }

    temp[length] = '\0';

    strcpy(string1,temp);

}


void bubbleSort(char **input,int length)
{

    char * tempArray[length][30];

    for(int i=0; i<length; i++)
    {

        printf("String: %s\n",input[i]);
        strcpy(tempArray[i],input[i]);
    }

    /*for (int n=length-1; n>=0; --n)
    {
        for (int i=0; i<n-1; ++i)
        {
            if (A[i] > A[i+1])
            {
                swap(tempArray,i, i+1)
            }
        }
    }*/
}

void swap(char **input,int position1, int position2)
{

    char * tempString[30];
    printf("SWAPPING: %s and %s\n",input[position1],input[position2]);
    strcpy(tempString,input[position1]);
    strcpy(input[position1],input[position2]);
    strcpy(input[position2],tempString);

}
