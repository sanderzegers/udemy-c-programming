#include <stdio.h>

void challenge_chapter114(){

char * filename = "testfile.txt";
FILE * file1 = fopen("testfile.txt","r");
char a;

int counter = 0;

if(file1==NULL){
    printf("File Error: %s",filename);
}

while ((a=fgetc(file1))!=EOF){

if(a=='\n')counter++;

};

printf("%s:%d lines",filename,counter);

fclose(file1);


}
