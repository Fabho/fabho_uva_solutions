/*
*Author: Fabian Calsina
*Date: -
*/
#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    int tmp = 0;

    while(n != 0)
    {
        tmp += (n%10);
        n /= 10;
    }

    if(tmp < 10)
      return tmp;
    else
        f(tmp);
}

int main()
{
    int n, ans;

    while(scanf("%d", &n))
    {
        if(!n)
          break;

        ans = f(n);
        printf("%d\n", ans);
    }
return 0;
}
