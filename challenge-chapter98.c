#include <stdlib.h>
#include <stdio.h>



challenge_chapter98(){



int i = 0;
printf("input char number: ");
scanf("%i",&i);
printf("you typed: %d\n",i);
printf("Enter String: ");
char * test = malloc(sizeof(char)*i);

if (!test){
    printf("malloc error");
    return;
}
gets(test);
gets(test);
printf("You typed: %s",test);

free(test);



}
