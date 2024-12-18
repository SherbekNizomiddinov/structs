#include <stdio.h>
#include <string.h>

struct kampaniya
{
    char nomi[50];
    char manzili[50];
};

struct mahsulot
{
    char nomi[50];
    char narxi;
    int miqdori;
    struct kampaniya kampaniya;
};

int main()
{
    struct kampaniya one_kampaniya = {"one_kampaniya", "USA"};
    struct kampaniya two_kampaniya = {"two_kampaniya", "Germany"};

    struct mahsulot mahsulotlar[4] = 
    {
        {"one_mahsulot", 24.0, 100, one_kampaniya},
        {"two_mahsulot", 32.0, 150, two_kampaniya},
        {"three_mahsulot", 45.0, 300, two_kampaniya},
        {"one_mahsulot", 58.0, 250, two_kampaniya},
    };

    printf("AQSHda ishlab chiqarilgan mahsulotlar = \n          Nomi | Narxi | Miqdori | Kampaniya nomi | Kampaniya manzili \n");
    printf("-----------------------------------------------------------------\n");
    for(int i = 0; i < 4; i++)
    {
        if(!strcmp(mahsulotlar[i].kampaniya.manzili, "USA"))
        {
            printf("%15s", mahsulotlar[i].nomi);
            printf("| %6.1f", mahsulotlar[i].narxi);
            printf("| %8d", mahsulotlar[i].miqdori);
            printf("| %15s", mahsulotlar[i].kampaniya.nomi);
            printf("| %-13s\n", mahsulotlar[i].kampaniya.manzili);
        }
    }
    return 0;
}