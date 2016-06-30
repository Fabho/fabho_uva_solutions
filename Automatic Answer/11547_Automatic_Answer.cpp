/*
*Author: Fabian Calsina
*Date: -
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos, n;

    scanf("%d", &casos);

    while(casos--)
    {
        scanf("%d", &n);
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;

        if(n <0)
           n *= (-1);
        n/=10;
        printf("%d\n", n%10);

    }
return 0;
}
