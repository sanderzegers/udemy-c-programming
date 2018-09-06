void challenge_chapter35(){

int a = 0;
char b = 'a';
long c = 0;
long long d = 0.0;
double e = 0.0;
long double f = 0.0;

printf("sizeof int: %d\n",sizeof(a));
printf("sizeof char: %d\n",sizeof(b));
printf("sizeof long: %d\n",sizeof(c));
printf("sizeof long long: %d\n",sizeof(d));
printf("sizeof float: %d\n",sizeof(float));
printf("sizeof double: %d\n",sizeof(e));
printf("sizeof long double: %d\n",sizeof(f));


//chapter 38

//Conditional parameter, usually used for assignment
int y = 9;
char * x = y > 7 ? "true": "false";

printf("x: %s\n",x);

}
