/*
*Author: Fabian Calsina
*Date: 24/11/2016
*/
#include <bits/stdc++.h>
using namespace std;

map<string, int> numbers;

void generateN(){
    numbers["zero"] = 0;
    numbers["one"] = 1;
    numbers["two"] = 2;
    numbers["three"] = 3;
    numbers["four"] = 4;
    numbers["five"] = 5;
    numbers["six"] = 6;
    numbers["seven"] = 7;
    numbers["eight"] = 8;
    numbers["nine"] = 9;
    numbers["ten"] = 10;
    numbers["eleven"] = 11;
    numbers["twelve"] = 12;
    numbers["thirteen"] = 13;
    numbers["fourteen"] = 14;
    numbers["fifteen"] = 15;
    numbers["sixteen"] = 16;
    numbers["seventeen"] = 17;
    numbers["eighteen"] = 18;
    numbers["nineteen"] = 19;
    numbers["twenty"] = 20;
    numbers["thirty"] = 30;
    numbers["forty"] = 40;
    numbers["fifty"] = 50;
    numbers["sixty"] = 60;
    numbers["seventy"] = 70;
    numbers["eighty"] = 80;
    numbers["ninety"] = 90;
    numbers["hundred"] = 100;
    numbers["thousand"] = 1000;
    numbers["million"] = 1000000;
}

int main(){
    int answer, tmp;
    string word, str;
    bool isNegative;
    generateN();

    while(getline(cin, str)){
        answer = tmp = 0;
        isNegative = false;
        stringstream ss(str);

        while (ss >> word){
            if(word == "negative")
                isNegative = true;
            else if(word == "million"){
                answer =  answer + tmp * numbers[word];
                tmp = 0;
            }
            else if(word == "thousand"){
                answer =  answer + tmp * numbers[word];
                tmp = 0;
            }
            else if(word == "hundred"){
                tmp *= numbers[word];
            }
            else{
                tmp += numbers[word];
            }
        }

        if(tmp != 0)
            answer =  answer + tmp;
        if(isNegative)
            answer *= -1;
        printf("%d\n", answer);
    }

return 0;
}
