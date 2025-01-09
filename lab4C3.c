#include<stdio.h>
int main(){
int num = 12;
if (num % 2 == 0){
printf("%d is divisible by 2.", num);
}
if (num % 3 == 0){
printf("\n%d is divisible by 3.", num);
}
else{
printf("%d is not divisible by 2 or 3.", num);
}
return 0;
}
