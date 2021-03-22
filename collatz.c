#include <stdio.h>
#include <cs50.h>

int collatz(int num);
int get_positive_int(string prompt);

int main(void)
{
    int num = get_positive_int("Positive number: ");
    printf("Collatz of %i: %i\n", num, collatz(num));
}

int collatz(int num)
{
    int counter = 0;
    if (num > 0)
    {
        if (num == 1)
        {
            return counter;
        }
        counter ++;
        if (num % 2 == 0)
        {
            counter += collatz(num / 2);
        }
        else
        {
            counter += collatz((3 * num) + 1);
        }
    }
    return counter;
}

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1);
    return n;
}
