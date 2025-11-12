// Дано літерний рядок, який містить послідовність символів s0, …, sn, …
// .Відомо, що серед цих символів є по крайній мірі три крапки.
// 1. Знайти число і таке, що sі – третя за порядком крапка.
// 2. Замінити кожний четвертий символ крапкою.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int FindThirdDot(char* s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
        {
            count++;
            if (count == 3)
                return i; 
        }
    }
    return -1; 
}

void ReplaceEveryFourth(char* s)
{
    int len = strlen(s);
    for (int i = 3; i < len; i += 4)
    {
        s[i] = '.';
    }
}

int main()
{
    char str[201];
    cout << "start: ";
    cin.getline(str, 200);

    int index = FindThirdDot(str);
    if (index == -1)
    {
        cout << "not found point" << endl;
    }
    else
    {
        cout << "index 3 point: " << index << endl;
    }

    ReplaceEveryFourth(str);

    cout << "replace: " << str << endl;

    return 0;
}
