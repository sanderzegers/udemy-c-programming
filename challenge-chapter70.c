#include <stdio.h>
#include <stdbool.h>

int stringLength(char * input1);
void concateString(char * result, const char * string1, const char * string2);
bool compareString(const char * string1, const char * string2);

void challenge_chapter70()
{

    char test1[] = "test123-1";
    char * test2 = "test123-2";



    char result[30];

    printf("String test1[]: %s\n",test1);
    printf("String test2[]: %s\n",test2);

    printf("Length of String test1[] (\"%s\"): %d\n",test1,stringLength(test1));

    concateString(result,test1,test2);

    printf("Concat string1 & string2: %s\n",result);


    printf("Compare string1 & 2: %s",(compareString(test1,test2)==1 ? "true" : "false"));

    /* Demo: why '\0' =  false:
    printf("Character Value:\nChar\tDecimal\tBool\n");
    for (int i=0;i<=90;i++){
        printf("%c\t%d\t%d\n",test1[i],(test1[i]),(bool)(test1[i]));
    }*/

}


int stringLength(char * input1)
{

    int i = 0;

    while(input1[i])
    {
        i++;
    }

    return i;

}

void concateString(char * result, const char * string1, const char * string2)
{


    int i=0;

    while(string1[i])
    {
        result[i] = string1[i];
        i++;
    }

    int k=0;

    while(string2[k])
    {
        result[i] = string2[k];
        k++;
        i++;
    }
    result[i] = '\0';

}

bool compareString(const char * string1, const char * string2)
{

    int i=0;

    while(string1[i] && string2[i])
    {
        if(string1[i]!=string2[i])
            return false;
        i++;
    }

    if(string1[i] != string2[i])
        return false;

    return true;
}
