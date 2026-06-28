#include <stdio.h>
int main()
{
    int i, j, k,p,q,r;

    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(p=1;p<=5;p++){
    for(q=0;q<=p;q++){
        printf(" ");
    }
    for(r=5;r>=p;r--){
    printf(" *");
    }
    printf("\n");
   }
    return 0;
}
