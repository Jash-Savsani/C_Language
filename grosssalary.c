#include<stdio.h>
void main()
{ 
    float da,hra,salary,gross_salary;//aahi if else ma relational operators no upayog thayel che tethi fakta two value(20000,salary) j condition ma mukavi.
    printf("Enter Your Salary:");
    scanf("%f",&salary);
    if (salary>=30000){
        da=0.95*salary;
        hra=0.30*salary;
    }
    else if(salary>=20000){
        da=0.90*salary;
        hra=0.25*salary;
    }
    else if(salary>=10000){
        da=0.80*salary;
        hra=0.20*salary;
}
         gross_salary=salary+da+hra;//equation yaad rakhvu.
    printf("Your Gross Salary:%f",gross_salary);
}