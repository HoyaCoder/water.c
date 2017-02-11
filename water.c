#include <stdio.h>
#include <cs50.h>

/* water.c cs50 project
   by James Meehan
*/   

int main(void)
{
    printf("How long was your shower in minutes?\n");
    int minutes = get_int();
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", minutes * 12);
}
