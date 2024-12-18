#include <stdio.h>

struct muallif
{
    char ismi[40];
    int tuglgan_yil;
};

struct kitob
{
    char sarlavha[40];
    float narxi;
    int chiqarilgan_yil;
    struct muallif muallif;
};

int main()
{

    struct muallif one_muallif = {"Jhone Doe", 1987};
    struct muallif two_muallif = {"Mary White", 1976};
    struct muallif three_muallif = {"Jhon Green", 1975};

    struct kitob kitoblar[10] =
    {
        {"kitob A", 25.0, 2021, one_muallif},
        {"kitob B", 25.0, 2021, two_muallif},
        {"kitob C", 25.0, 2021, one_muallif},
        {"kitob D", 25.0, 2021, three_muallif},
        {"kitob E", 25.0, 2021, one_muallif},
    };

    printf("XXI asr kitoblari = \n     Sarlavha| Narxi | Chiqarilgan yil | Muallif ismi | Muallif tug'ilgan sanasi | \n");

    for(int i = 0; i < 10; i++)
    {
        if(kitoblar[i].chiqarilgan_yil >= 2000)
        {
            printf("%13s", kitoblar[i].sarlavha);
            printf("| %6.1f", kitoblar[i].narxi);
            printf("| %16d", kitoblar[i].chiqarilgan_yil);
            printf("| %13s", kitoblar[i].muallif.ismi);
            printf("| %d\n", kitoblar[i].muallif.tuglgan_yil); 
        }
    }
    return 0;
}