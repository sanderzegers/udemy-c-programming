#include <stdio.h>

int stringLen(const char * input){


int returnValue = input;
int i = 0;
while(*input){
    ++input;
}

return (int)(input-returnValue);
}


void challenge_chapter96(){

char * test = "123456789";

printf("length of string: \'%s\' = %d",test,stringLen(test));

}
