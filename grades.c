#include <stdio.h>

struct Student
{
    char ismi[50];
    char familyasi[50];
};

struct Mavzu
{
   char nomi[30]; 
};

struct tezlik
{
    float tezlik;
    struct Mavzu mavzu;
    struct Student student;
};
int main()
{   //Fanlarni elon qilamiz 
    struct Mavzu one_mavzu = {"Geographiy"};
    struct Mavzu two_mavzu = {"Math"};
    struct Mavzu three_mavzu = {"Bilogiy"};

    //Talabalarni elon qilamiz
    struct Student one_pupil = {"Sherbek", "Nizomiddinov"};
    struct Student two_pupil = {"Abdurasul", "Salimov"};
    struct Student three_pupil = {"Eldor", "Xayitov"};
    struct Student four_pupil = {"Suxrobbek", "Yaxshiboyev"};
    
    //To'plagan ballarni elon qilamiz
    struct tezlik ballar[4] = 
    {
        {95.1, one_mavzu, one_pupil},
        {88.5, two_mavzu, two_pupil},
        {75.8, three_mavzu, two_pupil},
        {63.1, one_mavzu, three_pupil},
    };

    float s = 0;
    for(int i = 0; i < 5; i++)
    {
        s += ballar[i].tezlik;
    }

    s = s / 5;

    printf("O'rtacha bahodan yuqori ball to'plagan talabalar bu - \n    Ismi   | Familyasi   | Mavzusi   | Tezligi\n");

    for (int i = 0; i < 5; i++)
    {
        if(s < ballar[i].tezlik)
        {
            printf("%-11s", ballar[i].student.ismi);
            printf("| %-12s", ballar[i].student.familyasi);
            printf("| %-10s", ballar[i].mavzu.nomi);
            printf("| %.1f\n", ballar[i].tezlik);
        }
    }
}