#include <stdio.h>

int string_length(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}

int main(int argc, char* argv[])
{
    printf(string_length("hello"));
    return 0;
}
