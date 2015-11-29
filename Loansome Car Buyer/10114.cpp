#include <bits/stdc++.h>
#define MAX 101
using namespace std;

double vec[MAX];

void init()
{
    for(int x=0; x<MAX; x++)
        vec[x] = 0.0;
}

void setPercentage(int month, double percen)
{
    for(int x=month; x<MAX; x++)
        vec[x] = percen;
}

int main()
{
    double downPayment, loan;
    int monthsLoan, deprecation;

    double value, deprec, percen, carValue, monthPayment, calc;
    int month, currentMonth;


    while(scanf("%d %lf %lf %d", &monthsLoan, &downPayment, &loan, &deprecation) && monthsLoan >= 0)
    {
        init();

        for(int i=0; i< deprecation; i++)
        {
            scanf("%d %lf", &month, &percen);
            setPercentage(month, percen);
        }

        value = loan;
        monthPayment = loan /(double)monthsLoan;
        deprec = vec[0];
        carValue = loan + downPayment;
        currentMonth = 0;

        deprec = vec[currentMonth];
        calc = carValue * deprec;
        carValue -= calc;

        while(value > carValue)
        {
            currentMonth++;
            deprec = vec[currentMonth];
            calc = carValue * deprec;
            carValue -= calc;
            value -=monthPayment;

        }

        if(currentMonth == 1)
            printf("%d month\n", currentMonth);
        else
            printf("%d months\n", currentMonth);
    }
    return 0;
}
