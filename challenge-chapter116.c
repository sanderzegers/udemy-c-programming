#include <stdio.h>
#include <stdlib.h>

void challenge_chapter116(){


char * filename = "testfile3.txt";
char * filename2 = "tempfile.txt";

FILE * file1 = fopen(filename,"r");
FILE * file2 = fopen(filename2,"w+");

if (file1 == NULL){
    printf("Error opening %s",filename);
    return;
}
if (file2 == NULL){
    printf("Error opening %s",filename2);
    return;
}

int a;

while((a=fgetc(file1))!=EOF){
    //printf("%c",a);

    if(a >= 'a' && a<= 'z'){
        a -= 32;
    }
    fputc(a,file2);
}


rewind(file2);

char * line = malloc(sizeof(char)*60);

while(fgets(line,60,file2)!=NULL){

printf("%s",line);

}


fclose(file1);
fclose(file2);

//remove("testfile3.txt");
//rename("tempfile.txt","testfile3.txt");

}
