// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//         Income SlabTax
//         2.5L – 5.0L 5%
//         5.0L - 10.0L 20%
//         Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>

int main(){
    float annual_income, tax =0 ;

    printf("Enter Your annual income: ");
    scanf("%f",&annual_income);

    if (annual_income<250000){
        printf("You don't have to pay interest.\n");
    }
    else if (annual_income>=250000.0 && annual_income<= 500000.0){
         tax = (annual_income-250000)*0.05;
        printf("You have to pay Rs %.2f /- as interest\n",tax);   //.2f jis used to get two decimal places in the output.
    } 
    else if(annual_income>500000.0 && annual_income<= 1000000.0){
        tax = (annual_income-250000)*0.05 + (annual_income-500000)*0.20;
        printf("You have to pay Rs %.2f /- as interest\n",tax);
    }
    else if(annual_income>1000000.0){
        tax = (annual_income-250000)*0.05 + (annual_income-500000)*0.20 + + (annual_income-1000000)*0.30;
        printf("You have to pay Rs %.2f /- as interest\n",tax);
    }
    

    return 0;
}