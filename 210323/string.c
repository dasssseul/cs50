#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string animal = get_string("What's your favorite animal?\n");
    printf("my favorite animal is %s\n", animal);
}
