// Command-Line Financial calculator & Budget Planner
#include <stdio.h>
#include <math.h>

#define TAX_RATE 0.05          // Lower 5% student stipend/freelance tax deduction 
#define ANNUAL_INTEREST 0.071  // Public Provident Fund (PPF) interest rate in India (7.1%) 
#define PROJECTION_YEARS 4

int main() 
{
    double monthly_parents = 0.0;      // money given by our parents
    double monthly_income = 0.0;       // personal income 
    double hostel_food_bill = 0.0;     // money paid to hostel
    double daily_needs = 0.0;          // pocket money left for me 
    double leisure_expenses = 0.0;     // Shopping, eating out, entertainment 
    
    double total_student_expenses = 0.0;
    double tds_amount = 0.0;
    double net_pocket_income = 0.0;
    double net_monthly_savings = 0.0;
    double savings_ratio = 0.0;
    double future_savings_wealth = 0.0;

    printf("\n");
    printf("FILL IN THE FOLLOWING - \n");
    printf("\n");
    
    printf("Enter monthly money in hand by parents: ");
    scanf("%lf", &monthly_parents);

    printf("Enter monthly income/freelance income: ");
    scanf("%lf", &monthly_income);
    
    printf("Enter monthly Hostel / PG Rent + mess /food bill: ");
    scanf("%lf", &hostel_food_bill);
    
    printf("Enter spending on daily needs: ");
    scanf("%lf", &daily_needs);

    printf("Enter extra expenses (Shopping, Eating out): ");
    scanf("%lf", &leisure_expenses);
    
    // Deduct standard Tax/TDS from earnings
    tds_amount = monthly_income * TAX_RATE;
    net_pocket_income = monthly_income - tds_amount;
    
    total_student_expenses = hostel_food_bill + daily_needs + leisure_expenses; // all student living costs
    
    // The remaining pocket savings balance 
    net_monthly_savings = (monthly_parents + net_pocket_income) - total_student_expenses;
    
    // The student savings health ratio 
    double total_income = monthly_parents + net_pocket_income;
    if (total_income <= 0.0)
    {
        savings_ratio = 0.0;
        printf("\nWarning: Total income is 0! Savings rate cannot be calculated.\n");
    }
    else
    {
        savings_ratio = (net_monthly_savings / total_income) * 100.0;
    }
    
    // Compound wealth calculation
    future_savings_wealth = (net_monthly_savings * 12.0) * pow((1.0 + ANNUAL_INTEREST), PROJECTION_YEARS);

    printf("\n");
    printf("THE FINANCIAL REPORT\n");
    printf("\n");
    printf("Income earned after deducting TDS : Rs. %.2f\n", net_pocket_income);
    printf("Total Monthly money in hand       : Rs. %.2f\n", net_pocket_income + monthly_parents);
    printf("Total Living Expenses             : Rs. %.2f\n", total_student_expenses);
    printf("--------------------------------------------------\n");
    
    if (net_monthly_savings < 0.0)
    {
        printf("Net Monthly Deficit               : Rs. %.2f\n", -net_monthly_savings);
    }
    else
    {
        printf("Net Monthly Savings               : Rs. %.2f\n", net_monthly_savings);
    }
    
    printf("My Savings Rate                     : %.1f%%\n", savings_ratio);
    printf("\nGRADUATION TARGET:\n");
    printf("If you save this consistently throughout college, \n");
    printf("your wealth in %d years (at %.1f%% PPF interest) will be:\n", PROJECTION_YEARS, (ANNUAL_INTEREST * 100.0));
    printf("Final Savings Balance             : Rs. %.2f\n", future_savings_wealth);
    printf("\n");

    return 0;
}
