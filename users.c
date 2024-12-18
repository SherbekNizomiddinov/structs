#include <stdio.h>

struct foydalanuvchi
{
    char familyasi[50];
    char ismi[50];
    char manzili[100];
    int tuglgan_kuni;
    char telefon_raqam;
};

int main()
{
    int n;
    printf("Foydalanuvchi sonini kiriting = ");
    scanf("%d",&n);
    
    struct foydalanuvchi foydalanuvchilar[n];


    for(int i = 0; i < n; i++)
    {
        printf("%d - foydalanuvchi ismini kiriting - ",i + 1);
        scanf("%s", foydalanuvchilar[i].ismi);

        printf("%d - foydalanuvchi familyasini kiriting - ",i + 1);
        scanf("%s", foydalanuvchilar[i].familyasi);

        printf("%d - foydalanuvchi joylashgan manzilini kiriting - ",i + 1);
        scanf("%s", foydalanuvchilar[i].manzili);

        printf("%d - foydalanuvchi tug'ilgan kunini kiriting - ",i + 1);
        scanf("%d", foydalanuvchilar[i].tuglgan_kuni);

        printf("%d - foydalanuvchi telefon raqamini kiriting - ",i + 1);
        scanf("%s", foydalanuvchilar[i].telefon_raqam);
    }

    printf("Foydalanuvchilar jadvali - \n");
    printf("Ismi | Familyasi | Tug'ilgan sanasini kiriting | Manzili | Telefon raqami\n");
    printf("-------------------------------------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%11s", foydalanuvchilar[i].ismi);


        printf("| %10s", foydalanuvchilar[i].familyasi);


        printf("| %11d", foydalanuvchilar[i].tuglgan_kuni);


        printf("| %9s", foydalanuvchilar[i].manzili);


        printf("%s", foydalanuvchilar[i].telefon_raqam);
    }
    return 0;
}