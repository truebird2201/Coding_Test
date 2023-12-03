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
        if (check < 0) return false;    // 0���� �۾����� ���� )�� �� �������Ƿ� �ùٸ��� �ʾ���
    }
    return !check;      // check�� 0�� ���� ������ ��ȣ�� ¦�� ���� �����Ƿ� 0�϶��� true
}