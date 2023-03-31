#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arr[100];
    int count = 0;

    while (1 == 1)
    {

        system("cls");
        printf("-- MENIU PRINCIPAL --\n");
        printf("1. Vizualizare restaurante\n");
        printf("2. Istoric comanda\n");
        printf("3. Iesiti\n");

        int choice;
        do
        {
            printf("Introdu varianta dorita :");
            scanf("%d", &choice);
        } while (choice < 1 || choice > 3);

        system("cls");

        if (choice == 1)
        {
            while (1 == 1)
            {
                system("cls");
                printf("Selectati produsul dorit: \n");
                printf("1. Spartan\n");
                printf("2. Mesopotamia\n");
                printf("3. Pizza\n");
                printf("0. Iesiti\n");
                int choice2;
                do
                {
                    printf("Introdu varianta dorita :");
                    scanf("%d", &choice2);

                } while (choice2 < 0 || choice2 > 3);
                system("cls");
                // Spartan
                if (choice2 == 1)
                {
                    while (1 == 1)
                    {
                        system("cls");
                        printf("Selectati produsul dorit: \n");
                        printf("1. gyros\n");
                        printf("2. souvlaki\n");
                        printf("3. pita\n");
                        printf("0. Intoarcere la lista restaurante\n");
                        int choice3;
                        do
                        {
                            printf("Introdu varianta dorita :");
                            scanf("%d", &choice3);
                            switch (choice3)
                            {
                            case 0:
                                break;
                            case 1:
                                arr[count] = "Spartan, gyros";
                                count++;
                                break;
                            case 2:
                                arr[count] = "Spartan, souvlaki";
                                count++;
                                break;
                            case 3:
                                arr[count] = "Spartan, pita";
                                count++;
                                break;
                            }
                        } while (choice3 < 0 || choice3 > 3);

                        system("cls");
                        break;
                    }
                }
                // Mesopotamia
                if (choice2 == 2)
                {
                    while (1 == 1)
                    {
                        system("cls");
                        printf("Selectati produsul dorit: \n");
                        printf("1. shaorma\n");
                        printf("2. hamburger\n");
                        printf("3. doner\n");
                        printf("0. Intoarcere la lista restaurante\n");
                        int choice4;
                        do
                        {
                            printf("Introdu varianta dorita :\n");
                            scanf("%d", &choice4);
                            switch (choice4)
                            {
                            case 0:
                                break;
                            case 1:
                                arr[count] = "Mesopotamia, shaorma";
                                count++;
                                break;
                            case 2:
                                arr[count] = "Mesopotamia, hamburger";
                                count++;
                                break;
                            case 3:
                                arr[count] = "Mesopotamia, doner";
                                count++;
                                break;
                            }
                        } while (choice4 < 0 || choice4 > 3);
                        system("cls");
                        break;
                    }
                }
                // Pizza
                if (choice2 == 3)
                {
                    char temp;
                    scanf("%c", &temp); // temp statement to clear buffer
                    char *ingrediente;
                    ingrediente = (char *)malloc(1000 * sizeof(char));
                    int lungime;
                    printf("Introdu ingriedente :\n");
                    scanf("%[^\n]", ingrediente);
                    printf("introdu lungimea :");
                    scanf("%d", &lungime);
                    char charLungime[10];
                    char descriere[10000] = "";
                    sprintf(charLungime, "%d", lungime);
                    strcat(descriere, "Pizza:");
                    strcat(descriere, ingrediente);
                    strcat(descriere, ",Lungime: ");
                    strcat(descriere, charLungime);
                    arr[count] = &descriere;
                }
                if (choice2 == 0)
                {
                    break;
                }
            }

            char *locatie;
            locatie = (char *)malloc(1000 * sizeof(char));
            char temp;
            printf("Finalizare comanda: Introduceti locatie :");
            scanf("%c", &temp); // temp statement to clear buffer
            scanf("%[^\n]", locatie);
            arr[count] = locatie;
            count++;
            arr[count] = "----------";
            count++;
        }
        else if (choice == 2)
        {
            printf("Istoric comanda:\n");
            for (int i = 0; i < count; i++)
            {
                printf("%s\n", arr[i]);
            }
            printf("Apasati enter pentru a reveni la meniul anterior:\n");
            char locatie[1000];
            scanf("%s", &locatie);
        }
        else if (choice == 3)
        {
            break;
        }
    }
    return 0;
}
