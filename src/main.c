#include <stdio.h>

void other()
{
    printf("What's Boris doing here?\n");
    fflush(stdout);
    printf("Boris, what are you doing in the secret function?\n");
    fflush(stdout);
}

void input()
{
    char buffer[20];

    printf("Enter the code for a case: ");
    fflush(stdout);
	printf("%p\n", &other);
    fflush(stdout);
    scanf("%s", buffer);
    printf("You entered: %s\nCase was stolen\n", buffer);
    fflush(stdout);
}

int main()
{
    input();
    return 0;
}