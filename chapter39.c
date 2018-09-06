void chapter39(){


enum gender{male,female};

enum gender person1 = female;


switch (person1){

case male:
    printf("it's a male");
    break;

case female:
    printf("it's a female");
    break;

default:
    printf("error");
    break;
}

}
