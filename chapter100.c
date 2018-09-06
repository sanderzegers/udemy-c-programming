#include <stdio.h>

void chapter100(){

struct date{
int day;
int month;
int year;};

struct InitializeAndDeclareAtSameTime{
int day;
int month;
int year;}tomorrow;

struct{
int day;
int month;
int year;} UnnamedStruct;

struct date today = {1,1,2017};
struct date birthday = {1,.year=1985};
birthday.month = 12;

//compound literal:
//date today = {1,1,2018}; <<- won't work.
today = (struct date){1,1,2018};


UnnamedStruct.day = 1;
UnnamedStruct.month = 2;
UnnamedStruct.year = 3;

today.day=3;

tomorrow.day = today.day+1;
tomorrow.month = today.month;
tomorrow.year = today.year;



printf("%d.%d.%d\n",today.day,today.month,today.year);
printf("%d.%d.%d\n",tomorrow.day,tomorrow.month,tomorrow.year);
printf("%d.%d.%d\n",birthday.day,birthday.month,birthday.year);
printf("%d.%d.%d\n",UnnamedStruct.day,UnnamedStruct.month,UnnamedStruct.year);


}
