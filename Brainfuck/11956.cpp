/*
*Author: Fabian Calsina
*Date: 1/8/2016
*/
#include <bits/stdc++.h>
using namespace std;

vector<int>output(110);

int main(){
    int index;
    int cases;
    string instruction;
    char option;
    scanf("%d", &cases);

    for(int x=1; x<=cases; x++){
        cin>>instruction;
        fill(output.begin(), output.end(), 0);
        index = 0;

        for(int y=0; y<instruction.size(); y++){
            option = instruction[y];

            if(option == '>'){
                index++;

                if(index >= 100)
                    index = 0;
            }
            else if(option == '<'){
                index--;

                if(index <=-1)
                    index = 99;
            }
            else if(option == '+'){
                output[index]++;

                if(output[index] > 255)
                    output[index] = 0;
            }

            else if(option == '-'){
                output[index]--;
                if(output[index] < 0)
                    output[index] = 255;
            }
            else if(option == '.')
                continue;
        }

        printf("Case %d: ", x);

        for(int z=0; z<100; z++){
            if(z<99)
                printf("%02X ", output[z]);
            else
                printf("%02X\n", output[z]);
        }
    }
return 0;
}
