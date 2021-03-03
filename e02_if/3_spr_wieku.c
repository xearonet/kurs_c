#include <stdio.h>

int wiek;

int main()
{
    printf("Ile masz lat: ");
    scanf("%d", &wiek);

    if (wiek<18)
    {
        printf("Jestes niepelnoletni"); printf("\n");
        printf("Nie mozesz kandydowac na prezydenta"); printf("\n");
    }
    else if ((wiek>=18) && (wiek<35))
    {
        printf("Jestes pelnoletni"); printf("\n");
        printf("Nie mozesz kandydowac na prezydenta"); printf("\n");
    }
    else
    {
        printf("Jestes pelnoletni"); printf("\n");
        printf("Mozesz kandydowac na prezydenta"); printf("\n");
    }

    return 0;
}
