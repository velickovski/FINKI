// Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG) ќе испечати 
//на стандарден излез порака DA или NEво зависност од тоа дали внесениот датум е правилен или не.
// При одредување на валидноста на датумот во предвид да се земат сите фактори:
// дали месецот е број помеѓу 1 и 12
// дали денот одговара со бројот на денови во тој месец
// доколку е 29.02. да се внимава дали станува збор за престапна година
// престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.

#include <stdio.h>

int main(){
    int d,m,y;
    scanf("%d%d%d",&d,&m,&y);
    if(m<0 || m>12){
        printf("NE");
        return 0;
    }
    if(m<8 && m%2==1 && (d>31 || d<0)){
        printf("NE");
        return 0;
    }
    if(m<8 && m%2==0 && (d>30 || d<0)){
        printf("NE");
        return 0;
    }
    if(m>=8 && m%2==1 && (d>30 || d<0)){
        printf("NE");
        return 0;
    }
    if(m>=8 && m%2==0 && (d>31 || d<0)){
        printf("NE");
        return 0;
    }
    if(!(y%4==0 && y%100!=0) && y%400!=0){
        if(m==2 && d>28){
            printf("NE");
            return 0;
        }
    }else{
        if(m==2 && d>29){
            printf("NE");
            return 0;
        }
    }
    printf("DA");


    return 0;
}