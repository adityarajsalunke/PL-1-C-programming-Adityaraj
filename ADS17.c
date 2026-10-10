#include <stdio.h>

int main() {
    int var1[5]; 
    float var2[5]; 
    char var3[5];

    var1[0] = 10;
    var1[1] = 20;
    var1[2] = 30;
    var1[3] = 40;
    var1[4] = 50;

    printf("\n The value of var1 of index 0 is %d ", var1[0]); 
    printf("and address is %p", (void*)&var1[0]);
    printf("\n The value of var1 of index 1 is %d ", var1[1]);
    printf("and address is %p", (void*)&var1[1]);
    printf("\n The value of var1 of index 2 is %d ", var1[2]); 
    printf("and address is %p", (void*)&var1[2]);
    printf("\n The value of var1 of index 3 is %d ", var1[3]);
    printf("and address is %p", (void*)&var1[3]);
    printf("\n The value of var1 of index 4 is %d ", var1[4]); 
    printf("and address is %p\n\n", (void*)&var1[4]);

    // Float Array
    var2[0] = 1.1f;
    var2[1] = 2.2f;
    var2[2] = 3.3f;
    var2[3] = 4.4f;
    var2[4] = 5.5f;

    printf("\n The value of var2 of index 0 is %f ", var2[0]); 
    printf("and address is %p", (void*)&var2[0]);
    printf("\n The value of var2 of index 1 is %f ", var2[1]);
    printf("and address is %p", (void*)&var2[1]);
    printf("\n The value of var2 of index 2 is %f ", var2[2]); 
    printf("and address is %p", (void*)&var2[2]);
    printf("\n The value of var2 of index 3 is %f ", var2[3]);
    printf("and address is %p", (void*)&var2[3]);
    printf("\n The value of var2 of index 4 is %f ", var2[4]);
    printf("and address is %p\n\n", (void*)&var2[4]);

    var3[0] = 'A';
    var3[1] = 'B';
    var3[2] = 'C';
    var3[3] = 'D';
    var3[4] = 'E';

    printf("\n The value of var3 of index 0 is %c ", var3[0]);
    printf("and address is %p", (void*)&var3[0]);
    printf("\n The value of var3 of index 1 is %c ", var3[1]);
    printf("and address is %p", (void*)&var3[1]);
    printf("\n The value of var3 of index 2 is %c ", var3[2]);
    printf("and address is %p", (void*)&var3[2]);
    printf("\n The value of var3 of index 3 is %c ", var3[3]);
    printf("and address is %p", (void*)&var3[3]);
    printf("\n The value of var3 of index 4 is %c ", var3[4]);
    printf("and address is %p\n\n", (void*)&var3[4]);

    return 0;
}
