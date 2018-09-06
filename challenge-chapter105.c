
struct employee{
char * name;
int hireDate;
float salary;

};

void challenge_chapter105(){

struct employee employee[2] = {"Sir James",342,60000.0};

char * inputname = malloc(sizeof(char)*30);

int hireDate = 0;
float salary = 0.0;

printf("Input name: ");
gets(inputname);
scanf(""); //catch Newline
printf("Input hire date: ");
scanf("%d",&hireDate);
printf("Input salary: ");
scanf("%f",&salary);

employee[1] = (struct employee){.name=inputname,.hireDate=hireDate,.salary=salary};


for (int i=0;i<2;i++){
    printf("Employee Nr: %d\n",i+1);
    printf("Name: %s\n",employee[i].name);
    printf("hireDate: %d\n",employee[i].hireDate);
    printf("Salary: %fl\n\n",employee[i].salary);
}



}
