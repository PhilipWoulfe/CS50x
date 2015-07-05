#include <stdio.h>
#include <cs50.h>

bool search(int value, int values[], int n)
{
    int lower = 0;
    int upper = n - 1;

    while (lower <= upper)
    {
        int middle = (upper + lower) / 2;
        if (value == (values[middle]))
        {
            return true;
        }
        else if (value < (values[middle]))
        {
            lower = middle++;
        }
        else
        {
            upper = middle--;
        }
    }

    return false;
}
