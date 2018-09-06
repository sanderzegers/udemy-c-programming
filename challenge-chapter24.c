#include <stdlib.h>


int challenge_chapter24(int argc, char * argv[]){

 double rectangle_a = 0.0;
 double rectangle_b = 0.0;
 double rect_area = 0.0;
 double perimeter = 0.0;




 if (argc < 2){

    printf("Enter Side A: ");
    scanf("%f",&rectangle_a);
    printf("Enter Side B: ");
    scanf("%f",&rectangle_b);
 }
 else{
    rectangle_a = atof(argv[1]);
    rectangle_b = atof(argv[2]);
 }









 if (rectangle_a == 0.0 || rectangle_b == 0.0){
    printf("Invalid Input\n");
    printf("Usage: %s sideA sideB");
    return 1;
 }


 perimeter = 2.0 * (rectangle_a +  rectangle_b);
 rect_area = rectangle_a * rectangle_b;

 printf("Side A: %.3f\nSide B: %.3f\n",rectangle_a,rectangle_b);
 printf("Perimeter = %.3f\n", perimeter);
 printf("Area = %.3f\n", rect_area);


}
