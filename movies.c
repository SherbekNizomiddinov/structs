#include <stdio.h>
#include <string.h>

struct Janr
{
    char nomi[50];
    char tavsifi[50];
};

struct Kino
{
    char nomi[20];
    float reyting;
    int chiqarilgan_yil;
    struct Janr janr;
};

int main()
{
    struct Janr one_janr = {"Action", "Action-packed thriller"};
    struct Janr two_janr = {"Trailer", "High-octane advanture"};
    struct Janr three_janr = {"Action", "High-octane advanture"};

    struct Kino kinolar[4] =
    {
        {"Krishna", 10.0, 2018, one_janr},
        {"Ludi_X", 09.0, 2015, two_janr},
        {"Pulat Alendar", 08.0, 2003, three_janr},
        {"Jhon Uik", 10.0, 2018, two_janr},
    };

    printf("Action janrdagi kinolar - \n   Nomi      | Reyting | Chiqarilgan yil | Janr nomi | Janr tavsifi\n");

    for(int i = 0; i < 4; i++)
    {
        if(!strcmp(kinolar[i].janr.nomi, "Action"))
        {
            printf("%-13s", kinolar[i].nomi);
            printf("| %-8.1f", kinolar[i].reyting);
            printf("| %-16d", kinolar[i].chiqarilgan_yil);
            printf("|%-11s", kinolar[i].janr.nomi);
            printf("|%s\n", kinolar[i].janr.tavsifi);
        }
    }
        

    return 0;
}