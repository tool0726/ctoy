#include <stdio.h>

int c ;

int main() {
    int i;
    // get the value of c and i
    printf("outside the function %d\n", c );
    printf("inside the function %d\n\n", i );
    //get the address of c and i
    printf("outside the function %p\n", &c );
    printf("inside the function %p\n\n", &i );
    return 0;
}