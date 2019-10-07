#include <stdio.h>

int main() 
{    
    //initialize arrays
    char name[20];
    char surname[20];

    //get user input
    printf("\nHey! What is your name?\n");
    scanf("%s", &name);

    printf("\nWhat is your surname then?\n");
    scanf("%s", &surname);
    
    //print welcome message
    printf("\nHey %s %s! Have a nice day.", name, surname);
}