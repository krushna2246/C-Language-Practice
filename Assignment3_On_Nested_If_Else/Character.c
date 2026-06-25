#include<stdio.h>
int main(){
    char character;
    printf("Enter a character\n");
    scanf("%c",&character);
    printf("%d\n",character);
    if(character>=65 && character<=96){
        character=character+32;
    }
    else{
        character=character-32;
    }
    printf("%c",character);

    return 0;
}