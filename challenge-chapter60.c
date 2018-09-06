#include <stdio.h>
#include <math.h>

//greatest common divider
unsigned int gcd(unsigned int, unsigned int);

//absolute value (DE: Betrag)
float absolute(float);

//squar root
float sqr(float);


void challenge_chapter60(){

unsigned int value1 = 12;
unsigned int value2 = 24;

float value3 = -43;
float value4 = 64;

printf("gcd %u %u = %u\n",value1,value2,gcd(value1,value2));
printf("absolute |%.0lf| = %.0lf, |%.1lf| = %.1lf\n",value3,absolute(value3),value4,absolute(value4));

printf("sqrt(%.0lf) = %.0lf, sqrt(%.1lf) = %.1lf\n",value3,sqr(value3),value4,sqr(value4));

printf("sqrt(64)=%lf\n",sqrt(value4));

}


unsigned int gcd(unsigned int input1, unsigned int input2){

    int gcd;

    for(int i=1; i <= input1 && i <= input2; ++i)
    {
        // Checks if i is factor of both integers
        if(input1%i==0 && input2%i==0)
            gcd = i;
    }

    return gcd;

}

float absolute(float input1){
    if (input1<0)
        return input1*-1;
    return input1;
}

float sqr(float input1){

if (input1<0)
    return -1;

return (float) sqrt(input1);
}



