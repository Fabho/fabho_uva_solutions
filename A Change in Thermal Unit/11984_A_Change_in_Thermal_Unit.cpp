#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c, f, tmpF, ansC;
    int casos;

    scanf("%d", &casos);

    for(int i=1; i<=casos; i++)
    {
        scanf("%lf %lf", &c, &f);

        tmpF = ((9.0/5.0)*c) + 32.0;
        ansC = ((tmpF+f - 32.0) * 5.0)/9.0;

        printf("Case %d: %.2f\n", i, ansC);
    }
return 0;
}
