

#include <stdio.h>

int main()
{
     int units;
     float total_bill;
    printf("WELCOME TO ELECTRICITY BOARD DEPARTMENT\n");
    printf("ELECTRICITY BOARD RATE CHART (Rates/Unit)\n");
    printf("An electricity board charges the following rates to domestic users to discourage large consumption of energy:\n\n");
    printf("0 Unit to 50 Units = Rs.2.5/Unit\n");
    printf("51 Unit to 100 Units = Rs.3/Unit\n");
    printf("101 Unit to 200 Units = Rs.3.5/Unit\n");
    printf("201 Unit to 300 Units = Rs.4/Unit\n");
    printf("301 Unit to 400 Units = Rs.4.5/Unit\n");
    printf("401 Unit to 500 Units = Rs.4.75/Unit\n");
     printf("and more than 500 Units = Rs.5/Unit\n");
     printf("************************************\n\n");
     printf("Please enter the number of units which has been consumed as per meter:");
     scanf("%d",&units);
     if(units <= 50)
     total_bill = units * 2.5;
     
     else if(units <= 100)
     total_bill = units * 3;
     
     else if(units <= 200)
     total_bill = units * 3.5;
     
     else if(units <= 300)
     total_bill = units * 4;
     
     else if(units <= 400)
     total_bill = units * 4.5;
     
     else if(units <= 500)
      total_bill = units * 4.75;
      
      else
      total_bill = units * 5;
      printf("\n\nthe bill to be paid by you is Rs.%f", total_bill);
      return 0;
}
