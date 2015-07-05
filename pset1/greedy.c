/**
 * greedy.c 
 *
 * Philip Woulfe
 * philip.woulfe@gmail.com
 *
 * Create a program that takes in an amount and returns the smallest 
 * amount of coins that could make up that amount
 */
 
 #include <stdio.h>
 #include <cs50.h>
 #include <math.h>
 
 // main method
 int main(void)
 {  
    float input = 0;
    int cents, remainder;
    int num_coins = 0;
    
    // take double input from user greater than 0
    do 
    {
        printf("Enter the amount you would like converted into the least number of coins: ");
        input = GetFloat();
    }
    while (!(input > 0)); 
    
    // convert dollars to cents
    cents = (int)(round(input * 100));
        
    // do calculations to work out number of each coin
    num_coins += cents / 25;
    remainder = cents % 25;
        
    num_coins += (remainder / 10);
    remainder %= 10;
    
    num_coins += (remainder / 5);
    remainder %= 5;
       
    num_coins += remainder;
    printf("%i\n", num_coins);
   
 }
