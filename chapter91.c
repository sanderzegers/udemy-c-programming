#include <stdlib.h>



void chapter91(){


 void* test = malloc(1000);
 int *pNumber = (int*)malloc(100);
 //can hold 25 int values (25*4bytes) (if int is 4bytes


 *pNumber = (int*)malloc(25*sizeof(int));

 //if memory allocation fails, pointer returns NULL. Always good idea to check if malloc value != null

 if(!pNumber){
    printf("malloc failed");
 }

 //Free Memory
 free(pNumber);
 pNumber = NULL;



 //Calloc advantages
 //allocates memory as a number of elements of a given size
 // initializes memory. that is allocate so that all bytes are zero

int*test2 = (int*)calloc(25,sizeof(int));

 //realloc() reuse or extend memory that you previously allocated using malloc or calloc
 realloc(test2,50);

  if(!test2){
    printf("realloc failed");
 }


 // Example

 char * str;
 str = (char *) malloc(6 * sizeof(char));
 strcpy(str,"jason");
 printf("String = %s, Address = %p\n",str,str);


 str = (char*) realloc(str,25* sizeof(char));
 strcat(str,".com");
 printf("String = %s, Address = %p\n",str,str);

 free (str);

}
