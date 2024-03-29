#include<stdio.h>

struct date{
    int date;
    int month;
    int year;
};

int main(){
    struct date d1,d2;
    printf("Enter the date1 :");
    scanf("%d %d %d",&d1.date,&d1.month,&d1.year);
    printf("Enter the date2 :");
    scanf("%d %d %d",&d2.date,&d2.month,&d2.year);
    if(d1.year==d2.year){
        if(d1.month==d2.month){
           if(d1.date==d2.date){
            printf("0");
           }
           else if(d1.month>d2.month){
            printf("1");
           }
           else{
            printf("-1");
           }
        }
        else if(d1.month>d2.month){
            printf("1");
        }
        else{
            printf("-1");
        }
    }
    else if(d1.year>d2.year){
        printf("1");
    }
    else{
        printf("-1");
    }
    return 0;
}


