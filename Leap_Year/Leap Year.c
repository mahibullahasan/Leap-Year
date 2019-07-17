#include<stdio.h>
int main(){
int year;
scanf("%lf",&year);
if(year%400==0){
        printf("Leap Year");
}


    else if(year%100!=0 && year%4==0){

        printf("Leap Year");

}
else{
    printf("Not Leap Year");

}
return 0;
}
