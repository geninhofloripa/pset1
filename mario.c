/**
 * mario.c
 * 
 * Eugenio Streliaev-Filho
 * geninhofloripa@hotmail.com
 * 
 * Prints on screen the several steps which comprise Mario's Piramid with Height
 * determined by user's input.
 */

#include <stdio.h>
#include <cs50.h>

int height;
int step;

int main(void)
{
    // requests an int from 1-23, as per assignment
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23); 


    // prints on screen the several steps the comprise Marios piramid
    for (step = 0; step < height; step++)
    {
        // prints the spaces prior to the hashes
        for (int n_spaces = (height - 2) - step; n_spaces >= 0; n_spaces--)
        {
            printf(" ");
        }

        // prints the hashes or steps
        for (int n_hashes = (step + 2); n_hashes > 0 ; n_hashes--) 
        {
            printf("#");
        }
        
        // new line
        printf("\n");
    }
}
