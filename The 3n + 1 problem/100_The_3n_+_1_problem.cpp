/*
*Author: Fabian Calsina
*Date: -
*/
#include <bits/stdc++.h>

using namespace std;

int getC(int n)
{
    int c = 0;

    while(n != 1)
    {
        if(n%2 == 0)
           n /=2;
        else
            n = (3*n) + 1;

        c++;
    }
return c;
}

int main()
{
    int a,b, ao, bo, maxC;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a > b)
        {
            ao = a;
            bo = b;
            swap(a,b);
        }
        cout<<ao<<"   "<<bo<<endl;
        maxC = 0;
        for(int x=a; x<=b; x++)
        {
            maxC = max(maxC, getC(x));
        }

        printf("%d %d %d\n", ao, bo, maxC);
    }
return 0;
}
