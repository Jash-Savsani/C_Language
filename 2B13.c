//prime nums betwwn given intervals
#include<stdio.h>
void main(){
    int x,y,temp=0;
    printf("Enter Starting Point:");
    scanf("%d",&x);
    printf("Enter Ending Point:");
    scanf("%d",&y);
    printf("Prime Number Between Given %d to %d Interval is:",x,y);
    for(int j=(x+1);j<y;j++){
        temp=0;
        for(int i=2;i<j;i++){
            if(j%i==0){
                temp=1;
            }
        }
        if(temp==0){
            printf("%d, ",j);
        }
    }
}