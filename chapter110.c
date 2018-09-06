#include <stdio.h>
#include <stdlib.h>

void chapter110(){

FILE *pfile = NULL;
char *filename = "testfile.txt";
pfile = fopen (filename,"a+");

//append cannot change existing content

if (pfile==NULL){
    printf("File open failed: %s",filename);
    return;
}


int mchar = fgetc(pfile);

while (mchar!=EOF){
    printf("%c",mchar);
    mchar = fgetc(pfile);
}

printf("\n");

rewind(pfile);

//pfile=fopen(filename,"r");

if (pfile==NULL){
    printf("File open failed: %s",filename);
    return;
}

char * lineInFile = malloc(sizeof(char)*60);


//fgets converts line to string until end of line is reach or max bytes (60)
if(fgets(lineInFile,60,pfile)!=NULL){
    printf("%s",lineInFile);
}


//int returnvalue = rename("testfile.txt","otherfile.txt");
//printf("Return value of rename %d",returnvalue);

rewind(pfile);

char * str1 = (char*)malloc(30);
char * str2 = (char*)malloc(30);

fscanf(pfile,"%s %s",str1,str2);

printf("String1: %s\nString2: %s\n",str1,str2);

fclose(pfile);


// Writing Files

char * filename2 = "testfile2.txt";
FILE * file2 = fopen(filename2,"w+");

if (file2 == NULL){
    printf("Error opening file: %s", filename2);
    return;
}

int ch;

for (ch=33;ch<=100;ch++){
    fputc(ch,file2);
}


fputs("\nTest123!!\n",file2);

fprintf(file2,"This just works like the %s function: %d","printf",32);

fclose(file2);


// File positioning

pfile = fopen (filename,"r");

if (pfile == NULL){
    printf("Error opening file: %s", filename2);
    return;
}

long fpos = ftell(pfile);

printf("Reading %s at position %d\n",filename,fpos);

fseek(pfile,SEEK_SET,SEEK_END);
fpos = ftell(pfile);

printf("Filesize is %d Bytes",fpos);


// using fgetpos()

rewind(pfile);

fpos_t position;

fgetpos(pfile,&position); // Save position

// do somehting

fsetpos(pfile,&position); // return to previous position

fclose(pfile);



}

