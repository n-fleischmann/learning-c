#include <stdio.h>

int main()
{
    // Declaring an array
    int grades[10]; // Defines an array of grades with 10 elements, all of which are integers.
    // standard arrays do NOT allow for mixed types, and do NOT allow for a variable number of elements

    // The values of this array can be accessed like this:
    grades[0] = 100;

    // Other than that, the elements of an array work like normal variables:
    int values[5];
    values[0] = 100;
    values[1] = -156;
    values[2] = 26;
    values[3] = values[0] + values[1];
    values[4] = values[3] / values[2];
    values[0]++;

    for (int idx = 0; idx < 5; idx++)
    {
        printf("Values[%i] = %i\n", idx, values[idx]);
    }
}