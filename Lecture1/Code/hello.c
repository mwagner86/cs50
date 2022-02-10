#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask the Name of the user
    string answer = get_string("What's your name? ");
    // print out the answer = the Name.
    printf("hello, %s\n", answer);
}