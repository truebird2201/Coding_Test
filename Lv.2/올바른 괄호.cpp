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
        if (check < 0) return false;    // 0보다 작아지는 순간 )이 더 많아지므로 올바르지 않아짐
    }
    return !check;      // check가 0이 되지 않으면 괄호의 짝이 맞지 않으므로 0일때만 true
}