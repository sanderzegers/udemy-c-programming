#include <stdio.h>

chapter101()
{

    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date myDates[10];

    myDates[1] = (struct date)
    {
        1,1,1243
    };

    struct date myDates2[5] = {{1,2,1923},{1,4,1980},{5,3,2012}};

    struct date myDates3[5] = {[2] = {12,10,1975}};

    struct date myDates4[5] = {[1].month = 12, [1].year = 1985};

    printf("myDates[1] = %d.%d.%d",myDates[1].day,myDates[1].month,myDates[1].year);


//chapter 102

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };

    struct dateAndTime event;

    event.sdate = (struct date)
    {
        1,2,1912
    };
    event.stime.hours = 12;
    event.stime.minutes = 34;
    event.stime.seconds = 0;

    struct dateAndTime event2 = {{2,1,2015},{30,30,0}};


    //structure inside a structure

    struct time2
    {

        struct date2
        {
            int day;
            int month;
            int year
        } date;

        int hour;
        int minutes;
        int seconds;
    };


}
