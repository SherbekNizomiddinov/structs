#include <stdio.h>

struct karta
{
    char karta_egasi_ismi[40];
    char karta_raqami[40];
    int muddat_tugash_yil;
    int cvv;

};

int main()
{
    struct karta kartalar[5] = 
    {
        {"Jhon Kage", "1243 5744 6811 8742", 2029, 123},
        {"Jhan Smit", "1564 6473 2643 3634", 2028, 123},
        {"Tom parkinson", "1456 5744 6811 5647", 2030, 123},
        {"Jorj Vashington", "1654 6544 6811 8743", 2028, 123},
        {"Piter Parker", "1544 5744 6811 8473", 2025, 123},
        {"Poul Pogba", "1345 8594 8547 8675", 2027, 123}, 
    };

    printf("Amal qilish muddati = \n Karta egasi ismi |           Karta raqami | Muddat tugash yili | CVV |\n");

    for(int i = 0; i < 5; i++)
    {
        if(2025 <= kartalar[i].muddat_tugash_yil)
        {
            printf("%-18s", kartalar[i].karta_egasi_ismi);
            printf("| %-23s", kartalar[i].karta_raqami);
            printf("| %-19d", kartalar[i].muddat_tugash_yil);
            printf("| %d\n", kartalar[i].cvv);
        }
    }
    

    return 0;
}