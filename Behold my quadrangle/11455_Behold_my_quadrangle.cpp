#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos,a,b,c,d;

    scanf("%d", &casos);

    while(casos--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(!a || !b || !c || !d)
           printf("banana\n");
        if(a == b && b == c && c == d)
           printf("square\n");
        else if((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
            printf("rectangle\n");
        else if(a<=(b+c+d) && b<=(a+c+d) && c<=(a+b+d) && d<=(a+b+c))
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
return 0;
}
