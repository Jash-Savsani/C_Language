#include<stdio.h>//aa program ne yaad rakhi levo.
#include<time.h>
int main(){
    time_t currenttime;
    time (&currenttime);
    char*timestring=ctime(&currenttime);
    printf("%s",timestring);
}
