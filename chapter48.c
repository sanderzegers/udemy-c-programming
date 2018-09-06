#include <stdio.h>


#define MONTHS 12

void chapter48(){
    int counts[5] = {1,2,3}; //remaining value to 0
    int test2[] = {1,2,3};

    //c99 feature: Designated Initializers
    float sample_date[500] = {[2]= 500.5,[1]=300.0};


    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i=0;i<MONTHS;i++){
        printf("Month %2d has %d Days\n",i+1,days[i]);
    }


    //Chapter49

    int chess[4][2] = {
        {0,0},
        {0,1},
        {1,0},
        {1,1}
        };


    for(int i=0;i<4;i++){
        for (int x=0;x<2;x++){
            printf("Chess[%d][%d] = %d\n",i,x,chess[i][x]);
        }
    }




}


