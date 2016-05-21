/**
 * water.c
 * 
 * Eugenio Streliaev_Filho
 * geninhofloripa@hotmail.com
 * 
 * Calculates number of bottles of water one uses per minute
 * in a shower
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // given data demonstrates that 12 bottles of water are normally used/min
    printf("minutes: ");
    int time = GetInt();
    int waste = (time * 12);
    printf("%i\n", waste);
}
