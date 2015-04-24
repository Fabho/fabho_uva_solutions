#include <bits/stdc++.h>

using namespace std;

void gen(int t)
{
    int c=1;
    for(int x=1; x<=t; x++)
    {
        for(int y=1; y<=c; y++)
            printf("%d", c);
        printf("\n");
        c++;
    }
    c=t - 1;
    for(int x=1; x<=t-1; x++)
    {
        for(int y=1; y<=c; y++)
            printf("%d", c);
        printf("\n");
        c--;
    }
}

int main()
{
    int casos, tam, times;

    scanf("%d", &casos);

    while(casos--){

        scanf("%d", &tam);
        scanf("%d", &times);

        for(int i=1; i<=times; i++)
        {
            gen(tam);

            if(i < times)
               printf("\n");
        }

        if(casos)
           printf("\n");
    }
return 0;
}
