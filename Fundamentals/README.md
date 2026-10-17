# College Student Budget Planner 🎓💰

Hey! This is a command-line budget and wealth calculator written in **C**. I built this project to manage typical student finances by tracking both allowances from parents and personal side-income (like stipends or freelance gigs), breaking down expenses, and predicting college savings by graduation.
---

## What It Does

* **Double-Income Tracking:** Separates your allowance from parents and your personal side-income to give an accurate picture of your total monthly cash flow.
* **TDS Tax Calculation:** Automatically deducts a 5% Tax Deducted at Source (TDS) from your freelance/stipend earnings, mirroring real Indian corporate intern payouts.
* **Smart Deficit Handling:** If your spending exceeds your income, the report automatically catches it and prints your monthly **Deficit** instead of a broken savings number.
* **Graduation Savings Target:** Uses the C math library to calculate how your leftover savings will compound over 4 years in a standard PPF account at a 7.1% interest rate.

---

## Concepts Used -

This project applies the exact fundamentals from our first module:
* **Data Types:** Used `double` everywhere to make sure currency calculations don't drop paise or create rounding bugs.
* **Symbolic Constants:** Used `#define` at the top for fixed parameters like the 5% tax rate, 7.1% interest, and the 4-year graduation timeline.
* **Basic Expressions:** Uses pure arithmetic (`+`, `-`, `*`, `/`) and sequential statements to pass data from input to output.

---

## Formulas Used

1. **Total Living Expenses** = Hostel & Food Bills + Daily Needs + Extra Spending
2. **Net Personal Income** = Freelance Income - 5% TDS Tax
3. **Total Monthly Cash** = Allowance from Parents + Net Personal Income
4. **Monthly Savings / Deficit** = Total Monthly Cash - Total Living Expenses
5. **Graduation Savings Target** = (Monthly Savings * 12) * (1 + 0.071) raised to the power of 4

---

## Program Logic Flow (ASCII)

```text
-----------------------------------------------------------------
                       PROGRAM LOGIC FLOW
-----------------------------------------------------------------

                      +------------------+

                      |      START       |
                      +--------+---------+
                               |
                               v
               +--------------------------------+

               | Declare Variables (double, int)|
               | & Constants (#define)          |
               +---------------+----------------+
                               |
                               v
               +--------------------------------+

               | Read Student Inputs            |
               | (Parents cash, Income, Rent,   |
               |  Daily Needs, Extras)          |
               +---------------+----------------+
                               |
                               v
               +--------------------------------+

               | Calculate TDS on Income &      |
               | Sum Up Total Living Expenses   |
               +---------------+----------------+
                               |
                               v
               +--------------------------------+

               | If-Else: Check for Zero Income |
               | Calculate Savings or Deficit   |
               +---------------+----------------+
                               |
                               v
               +--------------------------------+

               | Compute 4-Year Target via pow()|
               +---------------+----------------+
                               |
                               v
               +--------------------------------+

               | Print Custom Financial Report  |
               | Screen to Console              |
               +---------------+----------------+
                               |
                               v
                      +--------+---------+

                      |       END        |
                      +------------------+

-----------------------------------------------------------------
```

---

## Quick Output Preview

```text
FILL IN THE FOLLOWING - 

Enter monthly money in hand by parents: 8000
Enter monthly income/freelance income: 10000
Enter monthly Hostel / PG Rent + mess /food bill: 6500
Enter spending on daily needs: 2000
Enter extra expenses (Shopping, Eating out): 2500

THE FINANCIAL REPORT

Income earned after deducting TDS : Rs. 9500.00
Total Monthly money in hand       : Rs. 17500.00
Total Living Expenses             : Rs. 11000.00
--------------------------------------------------
Net Monthly Savings               : Rs. 6500.00
My Savings Rate                   : 37.1%

GRADUATION TARGET:
If you save this consistently throughout college, 
your wealth in 4 years (at 7.1% PPF interest) will be:
Final Savings Balance             : Rs. 411024.27
```

---

## How to Run It Locally

You just need a standard C compiler like GCC installed on your machine. Run these two commands in your terminal window:

```bash
# Compile the code (don't forget -lm to link the math pow library!)
gcc main.c -o budget_planner -lm

# Execute the program binary
./budget_planner
```
