    #include <stdio.h>
    #include<stdlib.h>
    typedef struct test
    {
        int a;
        int b;
        struct test* c;

    }Test;
    // typedef struct test* Test;

    int main(void)
    {
        struct test* cac;
        cac = &Test;
        // struct test* cac;
        // cac = &buoi;
        cac->a = 12;
        // printf("address: %d\n",cac);
        printf("address: %d\n",&cac);
        printf("address: %d\n",&(cac->a));

        return 0;
    }