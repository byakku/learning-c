#include <stdio.h>

#define PI 3.14

int main(void)
{   

    //get user input
    int lenght; 
    printf("Plz give me lenght of a radius: \n");
    scanf("%i", &lenght);

    // calculate and print result
    float area = PI * lenght;

    printf("Area equals to %F", area);
}