void challenge_chapter33(){


int inputMinutes = 0;
double minutesInYear = 60*24*365;
double outputYears = 0;
double outputDays = 0;

printf("Please enter minutes: ");
scanf("%d",&inputMinutes);

printf("You entered %d Minutes\n",inputMinutes);

outputYears = inputMinutes / minutesInYear;
outputDays = inputMinutes / (24.0*60.0);

printf("This are %f years or %f days",outputYears,outputDays);

}
