#include <stdio.h>

char name[50];


int hello(void) {
    printf("May I have your name please: ");
    scanf("%s", name);
    printf("Hello, %s. This is greeting from the World!\n", name);
    return 0;
}

int main() 
{
    printf("Hello, World!\n");
    hello();
    return 0;
}
