#include <stdio.h>
#include <stdlib.h>

struct point{

int * x;
int * y;
};

void getinfo(struct point*);


void chapter103(){


// structures and pointers

struct date{

int day;
int month;
int year;

};

struct date todaysDate = {5,7,2018};
struct date * datePtr = &todaysDate;

(*datePtr).month = 9;

printf("%d.%d.%d\n",(*datePtr).day,(*datePtr).month,(*datePtr).year);

datePtr->month = 10; // same as (*datePtr).month = 10;

(&todaysDate)->month = 11;

printf("%d.%d.%d\n",(*datePtr).day,(*datePtr).month,(*datePtr).year);










struct point point1;

point1.x = (int *)malloc(sizeof(int));
point1.y = (int *)malloc(sizeof(int));

*point1.x = 12;
*point1.y = 1234;


printf("%d %d\n",*point1.x,*point1.y);

printf("Debug: ");
getinfo(&point1);

}


void getinfo(struct point * input){

printf("input->x: %d, input-y: %d\n",*(input->x),*(input->y));

}
