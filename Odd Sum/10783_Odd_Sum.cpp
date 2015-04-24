#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos, a, b, ans;

    scanf("%d", &casos);
    for(int i=1; i<=casos; i++)
    {
        scanf("%d %d", &a, &b);
        ans = 0;

        for(int x=a; x<=b; x++)
        {
            if(x%2 != 0)
                ans += x;
        }

        printf("Case %d: %d\n", i, ans);
    }
return 0;
}
