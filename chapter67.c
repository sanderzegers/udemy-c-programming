#include <stdio.h>
#include <string.h>

void chapter67(){

char * t = "test123";

printf("\'%s\' length: %d\n" ,t,strlen(t));


char s[10];
char d[10];
//DOES NOT WORK: s = "hello";

strcpy(s,t); //strcpy(destination,source)

//strcpy(d,t);
strncpy(d,t,sizeof(d)-1); //10 = size of string

printf("%s\n",s);
printf("\n",s);
printf("%s\n",d);



//strcat() combines two strings

char myString[] = "My String";
char input[20];

printf("Enter a string to be concatenened: ");
scanf("%s",input);

printf("%s\n",strcat(myString,input));

//strncat(myString,String2,x) will add content to string but stops at  x additional chars. No buffer overflow possible


strcmp(s,d);


//strchr() search character in string

char str[] = "The quick brown fox";
char ch = 'q';
char * pGot_char = NULL;
pGot_char = strchr(str,ch); //strchr returns pointer.

printf("%s\n",pGot_char); //quick brown fox


// strstr() search substring in string

char text[] = "Every dog has his day";
char word[] = "dog";

char *pFound = NULL;

pFound = strstr(text,word); //pFound will be set to +6

printf("%s\n",pFound); //dog has his day


// strtok() break sentence in words
//strtok

char strb[90] = "Product1,Product2,Test123";
const char s2[2] =",";
char *token;

// get first token
token = strtok(strb,s2);

while(token !=NULL){
    printf("%s\n",token);
    //
    token=strtok(NULL,s2);
}


}
