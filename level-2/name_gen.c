#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NAMES_AMOUNT 5
#define SURNAMES_AMOUNT 5 

int main () 
{

    srand(time(NULL));
    
    char names[NAMES_AMOUNT][25] =
    {
        "Roman",
        "Paul",
        "Tyler",
        "Byron",
        "Cole"
    };

    char surnames[SURNAMES_AMOUNT][25] =
    {
        "Olsen",
        "McCarty",
        "Niro",
        "Fox",
        "Hogan"
    };     

    for (int i = 0; i < SURNAMES_AMOUNT; i++)
    {
        printf("His name is %s and surname is %s \n", names[i], surnames[i]);
    }
}