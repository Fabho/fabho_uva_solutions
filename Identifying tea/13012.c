/*
*Author: Fabian Calsina
*Date: 25/12/2016
*/
#include<stdio.h>

int main(){

    int x, teaType, input, answer;

    while( scanf("%d", &teaType) != EOF ){
        answer = 0;
        for( x=0; x<5; x++ ){
            scanf("%d", &input);
            if(input == teaType)
                answer++;
        }

        printf("%d\n", answer);
    }
return 0;
}