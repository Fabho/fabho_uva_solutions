/*
*Author: Fabian Calsina
*Date: -
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos, players, init, pases;

    scanf("%d", &casos);

    for(int i=1; i<=casos; i++)
    {
        scanf("%d %d %d", &players, &init, &pases);

        for(int x=1; x<=pases; x++)
        {
            init++;

            if(init > players)
               init = 1;
        }

        printf("Case %d: %d\n", i, init);
    }
return 0;
}
