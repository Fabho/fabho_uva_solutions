#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos, walls, num, current, mayor, menor;
    scanf("%d", &casos);

    for(int i=1; i<=casos; i++)
    {
        vector<int> vec;
        scanf("%d", &walls);
        mayor = menor = 0;

        for(int j=0; j<walls; j++)
        {
            scanf("%d", &num);
            vec.push_back(num);
        }

        current = vec[0];
        for(int x=0; x<vec.size(); x++)
        {
            if(vec[x] > current)
               mayor++;
            else if(vec[x] < current)
                menor++;

            current = vec[x];
        }

        printf("Case %d: %d %d\n", i, mayor, menor);
    }
return 0;
}
