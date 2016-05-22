/**
 * greedy.c
 * 
 * Eugenio Streliaev-Filho
 * geninhofloripa@hotmail.com
 * 
 * Requests for an input as an amount in US dollars and prints out the least
 * number of coins that corresponds to that value, in a "greedy" fashion.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

float input;

int main(void)
{
    do
    {
        printf("How much change is owed? ");
        input = GetFloat();
    }
    while (input <= 0);
    
    // transforms input to cents and rounds it 
    float pre_cents =  (input * 100.0);
    int cents = round(pre_cents);

    // calculate quarters
    int aux = (cents / 25); 
    int mod = (cents % 25);
    int num_coins_0 = aux;
  
    // calculate dimes
    aux = (mod / 10);
    mod = (mod % 10);
    int num_coins_1 = aux;
  
    // calculate nickles
    aux = (mod / 5);
    mod = (mod % 5);
    int num_coins_2 = aux;

    // calculate pennies
    aux = (mod / 1);
    mod = (mod % 1);
    int num_coins_3 = aux;

    // sums up partial countings and prints our answer
    int answer = (num_coins_0 + num_coins_1 + num_coins_2 + num_coins_3);
    printf("%i\n", answer);
}
