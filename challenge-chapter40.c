void challenge_chapter40(){


double weeklyHours;
const double payrate = 12.0;

double GrossPay = 0.0;
double taxes = 0.0;
double NetPay = 0.0;


printf("Weekly hours made: ");
scanf("%lf",&weeklyHours);

//printf ("hours: %f",weeklyHours);

if (weeklyHours > 40.0)
    {
    GrossPay += 40 * payrate;
    GrossPay += (weeklyHours-40.0)*(payrate*1.5);
}else{
    GrossPay += weeklyHours * payrate;
}

printf("Grosspay: %f\n", GrossPay);


if (GrossPay <= 300.0){
    taxes += GrossPay * 0.15;}
else if (GrossPay > 300.0 && GrossPay <= 450.0){
    taxes = 300.0 * 0.15;
    taxes += (GrossPay-300.0)*0.20;
}
else if (GrossPay > 450.0){
    taxes = 300.0 * 0.15;
    taxes += 150.0 * 0.20;
    taxes += (GrossPay-450.0)*0.25;
}

NetPay = GrossPay-taxes;

printf("Taxes: %f\n",taxes);
printf("Net Pay: %f\n",NetPay);

}
