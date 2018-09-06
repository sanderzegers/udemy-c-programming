chapter30(){


    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101


    int result = 0;

    int c = a & b;


    /*

    a&b:
    0011 1100
    0000 1101
    ---------
    0000 1100

    a|b:
    0011 1100
    0000 1101
    ---------
    0011 1101


    a^b:
    0011 1100
    0000 1101
    ---------
    0011 0001

    a >> 3:
    0011 1100
    ---------
    0000 0111

    b << 7:
    0000 0000 1101
    0110 1000 0000


    */



    printf("a:%d b:%d\n",a,b);
    printf("a&b: %d\n",a & b);
    printf("a|b: %d\n",a|b);
    printf("a^b: %d\n",a^b);
    printf("a >> 3: %d\n",a >> 3);
    printf("b << 7: %d\n",b << 7);
}
