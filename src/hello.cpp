#include <stdio.h>
#include <iostream>


char name[50];


int hello(void) {
    printf("May I have your name please: ");
    scanf("%s", name);
    printf("Hello, %s. This is greeting from the World!\n", name);
    return 0;
}

int main(int argc, char **argv) 
{
    std::cout << "Hello, World!" << std::endl;
    hello();
    return 0;
}
