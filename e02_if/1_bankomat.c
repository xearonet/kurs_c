#include <stdio.h>

char pin[] = "2233";
char tmp_pin[3];
int zgodny = 0;

int main()
{
    printf("Witaj w Banku"); printf("\n");
    printf("Podaj PIN: ");
    scanf("%s", &tmp_pin);
    // printf("%s", tmp_pin); printf("\n");

    for (int i = 0; i < 4; i++)
    {
        if (!(tmp_pin[i] == pin[i])) zgodny = 1;
    }

    if (zgodny == 0)
    {
        printf("Poprawny PIN"); printf("\n");
    }
    else
    {
        printf("Niepoprawny PIN"); printf("\n");
    }

    return 0;
}
