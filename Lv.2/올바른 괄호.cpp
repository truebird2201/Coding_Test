#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int check = 0;
    for (char& c : s)
    {
        if (c == '(') check++;
        else check--;
        if (check < 0)return false;
    }
    return !check;
}