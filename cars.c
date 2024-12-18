#include <stdio.h>

struct mashina
{
    char madeli[50];
    char brandi[50];
    int narxi;
    int yili;
};

int main()
{
    int n;

    printf("Nechta mashina qidirmoqchisz ? - ");
    scanf("%d",&n);

    struct mashina mashinalar[n];
    for(int i = 0; i < n; i++)
    {
        printf("%d-mashina: \n%d - modelini kiriting = ",i+1, i+1 );
        scanf("%s", mashinalar[i].madeli);

        printf("%d-mashina brendini kiriting = ",i + 1);
        scanf("%s", mashinalar[i].brandi);
        
        printf("%d-mashina narxini kiriting = ",i + 1);
        scanf("%d", &mashinalar[i].narxi);

        printf("%d-mashina yili kiriting = ",i + 1);
        scanf("%d", &mashinalar[i].yili);
    };
    int max = mashinalar[0].narxi, max_index = 0;
    printf("Eng qimmat mashina \nMadeli      | Brendi    | Narxi     | Yili");
    for(int i = 0; i < n; i++)
    {
        if(max <= mashinalar[i].narxi)
        {
            max = mashinalar[i].narxi;
            max_index = i;
        }
    }
    printf("\n%12s", mashinalar[max_index].madeli);

    printf("| %10s", mashinalar[max_index].brandi);

    printf("| %10d", mashinalar[max_index].narxi);

    printf("| %d", mashinalar[max_index].yili);

    return 0;
}