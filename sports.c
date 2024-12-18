#include <stdio.h>

struct Stadion
{
    char nomi[20];
    char sigimi[50];
};
struct Jamoa
{
    char jamoa_nomi[20];
    char murabbiy[20];
    int oyinchi_soni;
    int tashkil_topgan_yil;
    struct Stadion stadion;
};

int main()
{
    struct Stadion one_stadion = {"Dinamo", 150};
    struct Stadion two_stadion = {"Spartak", 50};
    struct Stadion three_stadion = {"Paxtakor", 250};

    struct Jamoa jamoa[5] =
    {
        {"Paxtakor", "Jumanazar", 18, 1999, two_stadion},
        {"Bunyodkor", "Kozak", 17, 2002, one_stadion},
        {"Olimpik", "Asadbek", 21, 1998, two_stadion},
        {"Paxtakor", "Ibroxim", 23, 2001, three_stadion},
    };

    printf("Eng eski jamoa - \n    Jamoa nomi   | Murabbiy | O'yinchi soni | Tashkil topgan yil | Stadion nomi\n");
    int min = jamoa[0].tashkil_topgan_yil;
    for(int i = 0; i < 4; i++)
    {
        if(min > jamoa[i].tashkil_topgan_yil)
        {
            printf("%-17s", jamoa[i].jamoa_nomi);
            printf("| %-9s", jamoa[i].murabbiy);
            printf("| %-14d", jamoa[i].oyinchi_soni);
            printf("| %-19d", jamoa[i].tashkil_topgan_yil);
            printf("| %s\n", jamoa[i].stadion.nomi);
        }
    }
    return 0;
}