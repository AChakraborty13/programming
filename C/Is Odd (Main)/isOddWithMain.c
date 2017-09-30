#include <stdio.h>
#include <stdbool.h>

bool isOdd(int);

int main()
{

    printf("Is Odd? \n");

    int number;
    printf("number = ");
    scanf("%d", &number);

    printf(isOdd(number) ? "isOdd(%d) -> true" : "isOdd(%d) -> false", number);

    return 0;
}

bool isOdd(int number)
{
    /* 
    An odd number is an integer of the form n=2k+1, where k is an integer.
    The congruence n ≡ 1 (mod2) holds for odd n.
    */

    // If the number is not divisible by 2 then return true
    return number % 2 == 1 ? true : false;
}