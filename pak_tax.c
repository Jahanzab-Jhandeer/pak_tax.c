#include<stdio.h>
#include<math.h>

int main () {

    float income;
    float taxable_income;
    float tax;
    printf("Enter Your Total Income :");
    scanf("%f" , &income);

    if(income >= 0 && income <= 600000) {
        printf("NO TAX\n");
    }
    if(income >= 600000 && income <= 1200000) {
        tax =  (income - 600000) * 2.5/100;
    }
     if(income >= 1200000 && income <= 2400000) {
        tax = (income - 1200000) * 12.5/100 - 15000;
    }
    if(income >= 2400000 && income <= 3600000) {
        tax = (income - 2400000) * 20/100 - 165000;
    }
    if(income >= 3600000 && income <= 6000000) {
        tax = (income - 3600000) * 25/100 - 405000;
    }
    if(income >= 6000000 && income <= 12000000) {
        tax = (income - 6000000) * 32.5/100 - 1005000;
    }
    if(income > 12000000) {
        tax = income * 35/100 - 2955000;
        }

printf ("your net income tax to be paid by end of this month is %f \n", tax);

return 0;
}