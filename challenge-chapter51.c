#include <stdio.h>
#include <stdbool.h>
#define ARRAYSIZE 10000

void challenge_chapter51()
{

    int primesfound=1;
    int primenumbers[ARRAYSIZE] = {2,3};
    bool prime=false;

    //printf("%d\n",primenumbers[0]);


    int x=0;
    for (int i=5; i<=1000; i=i+2)
    {
        //printf("i=%d\n",i);

        x=0; prime=false;
        while(x<ARRAYSIZE && !prime)
        {
            //printf("i=%d mod primenumbers[%d](%d) == %d\n",i,x,primenumbers[x],i%primenumbers[x]);

            if (primenumbers[x] != 0 && (i%primenumbers[x])==0)
            {
                prime = false;
                break;
            }
            //x >= primesfound: we checked all known primes
            //i >= primenumbers[primesfound]: new primenumber is bigger than biggest known prime so far
            else if (x >= primesfound && i >= primenumbers[primesfound])
            {
                prime = true;
                primesfound += 1;
                //printf("i(%d) >= primenumbers[%d](%d)\n",i,primesfound-1,primenumbers[primesfound-1]);
                //printf("i=%d assigned to primenumbers[%d]\n",i,primesfound);
                primenumbers[primesfound] = i;
            }

            x++;
        }

    }

    for (int i=0; i<ARRAYSIZE; i++)
    {
        if(primenumbers[i]==0){
            break;
        }
        printf("%d ",primenumbers[i]);
    }

}

