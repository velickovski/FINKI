// Да се напише програма каде од тастатура ќе се внесе еден број кој има пет цифри,
// но не мора да е петцифрен, како на пример 04569 или 00256. 
// Програмата ги печати сумите на паровите цифри од надвор кон внатре, 
// за на крај да ја испечати средишната цифра. Така, ако внесениот број е 12596, 
// програмата враќа 7 11 5.

#include <stdio.h>

int main(){
    int broj;
    scanf("%d",&broj);
    printf("%d %d %d",broj/10000 + broj%10, broj/1000%10 + broj%100/10, broj/100%10); 
    return 0;
}