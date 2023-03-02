#include<stdio.h>
int main(){
    int hnd,eng,math,phy,chem,tm;
    float am;
    printf("Enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&hnd,&eng,&math,&phy,&chem);
    tm=hnd+eng+math+phy+chem;
    printf("%d",tm);
    am=tm/5;
    if(am>=0 && am<30){
        printf("FAIL");
    }
    else if(am>=30 && am<40){
            printf("THIRD DIVISION");
            }
    else if (am>=40 && am<60){
        printf("SECOND DIVISION");
    }
    else if
        (am>=80 && am<=100){
            printf("FIRST DIVISION");
        }
        return 0;





}
