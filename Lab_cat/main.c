#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE* file;
    file = fopen(argv[1], "r");
    if (!file || argc != 2)
    {
        printf("ERROR");
    }

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);
}
