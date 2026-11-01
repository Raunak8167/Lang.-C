#include <stdio.h>
int main() {
    float Computer_Monitor;
    float CPU;
    float Other_Components;
    float Hours_Per_Day;
    float Rate_Per_Unit;
    float Total_Power_Consumption;
    float Monthly_Consumed_Units;
    float Monthly_Payable_Bill;
    printf("Power consumed by Computer Monitor: ");
    scanf("%f", &Computer_Monitor);
    printf("Power consumed by CPU: ");
    scanf("%f", &CPU);
    printf("Power consumed by Other Components: ");
    scanf("%f", &Other_Components);
    printf("Hours used per day: ");
    scanf("%f", &Hours_Per_Day);
    printf("Rate per unit: ");
    scanf("%f", &Rate_Per_Unit);
    Total_Power_Consumption = Computer_Monitor + CPU + Other_Components;
    Monthly_Consumed_Units = 
        (30 * Total_Power_Consumption * Hours_Per_Day) / 1000;
    Monthly_Payable_Bill = Monthly_Consumed_Units * Rate_Per_Unit;
    printf("\nTotal Power Consumption: %f Wh\n",
           Total_Power_Consumption);
    printf("Monthly Consumed Units: %f Units\n",
           Monthly_Consumed_Units);
    printf("Monthly Payable Bill: Rs. %f\n",
           Monthly_Payable_Bill);
    return 0;
}