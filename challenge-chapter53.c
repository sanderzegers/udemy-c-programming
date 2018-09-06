#include <stdio.h>


//total rainfall for each year
//avery yeraly rainfaill
//average rainfal for each month

// float, for past 5 years
//2d array 5rows 12 columns


void challenge_chapter53()
{


    float rainfall[5][12] = { {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float totalAverage = 0;

    float rainYearTotal[5] = {0};
    float rainMonthAvg[12] = {0};

    for(int i=0; i<5; i++)
    {
        for(int a=0; a<12; a++)
        {
            rainYearTotal[i] += rainfall[i][a];
        }
    }

    printf("YEAR\tRAINFALL(inches)\n");
    for (int i=0; i<5; i++)
    {
        printf("%d\t%.2lf\n",2010+i,rainYearTotal[i]);
        totalAverage += rainYearTotal[i];
    }

    printf("The yearly average is %.2lf\n\n",totalAverage/5);

    printf("MONTHLY AVERAGES\n");


    printf("JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC\n");

    for (int i=0; i<12; i++)
    {
        for (int a=0; a<5; a++)
        {
            rainMonthAvg[i] += rainfall[a][i];
        }
        rainMonthAvg[i] /= 5;
        printf("%2.2lf ",rainMonthAvg[i]);
    }
    printf("\n");

}

