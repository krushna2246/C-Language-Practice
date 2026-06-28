#include<stdio.h>
int fact(int);
int main(){
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    fact(number);
    return 0;
}
int fact(int x){
    int faf=1;
    for(int i=1;i<=x;i++){
        faf*=i;
      
    }
    printf("final : %d\n",faf);
    return 0;
}