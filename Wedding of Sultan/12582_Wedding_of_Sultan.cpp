/*
*Author: Fabian Calsina
*Date: 4/7/2016
*/
#include <iostream>
#include <cstdio>
#include <stack>
#include <map>
#include <set>

using namespace std;

map<char, set<char> > graph;
stack<char> currentNode;

void cleanData()
{
    while(currentNode.size())
        currentNode.pop();

    graph.clear();
}

int main()
{
    string str;
    int casos;
    char tmp;

    scanf("%d", &casos);

    for(int i=1; i<=casos; i++)
    {
        cin>>str;

        for(int x=0; x<str.size(); x++)
        {
            if(x-1 < 0)
            {
                currentNode.push(str[x]);
                continue;
            }


            if(currentNode.top() == str[x])
                currentNode.pop();
            else
            {
                tmp = currentNode.top();
                graph[tmp].insert(str[x]);
                graph[str[x]].insert(tmp);

                currentNode.push(str[x]);
            }
        }

        printf("Case %d\n", i);

        for(map<char, set<char> >::iterator iter =  graph.begin(); iter != graph.end(); iter++)
        {
            printf("%c = %d\n", iter->first, iter->second.size());
        }

        cleanData();
    }
return 0;
}
