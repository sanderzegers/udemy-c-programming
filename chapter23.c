#include <stdio.h>

int chapter23 (int argc, char *argv[]){

int numberOfArguments = argc;

printf("Number of arguments: %d\n",numberOfArguments);

char *argument1 = argv[0];
char *argument2 = argv[1];

printf("%s\n",argument1);
printf("%s\n",argument2);

}
