#include <stdio.h>
#include <string.h>

char login[5], haslo[4];
int is_equal = 0;

int main()
{
    printf("Witaj w Banku"); printf("\n"); printf("\n");
    printf("Login: ");
    scanf("%s", &login);
    printf("Haslo: ");
    scanf("%s", &haslo);

    if ((strcmp(login, "admin"))!=0)
    {
        is_equal = 1;
    }
    else if ((strcmp(haslo, "pass"))!=0)
    {
        is_equal = 1;
    }

    if (is_equal == 0)
    {
        printf("Poprawne logowanie"); printf("\n");
    }
    else
    {
        printf("Blad logowania"); printf("\n");
    }

    return 0;
}
