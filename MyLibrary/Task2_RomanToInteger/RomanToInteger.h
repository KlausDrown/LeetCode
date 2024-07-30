#include <string>
#include <unordered_map>
#include <iostream>
/*����� �� �����, ����� ������� ����� ���� ���������� � leedcode */

/* https://leetcode.com/problems/roman-to-integer/description/ */

using namespace std;

class RomanToInteger
{
public:
    int romanToInt(string RomanChar) {
        int ToRetur=0;//��� �� �����
        unordered_map<char, int> ROMtoINT //������� ���� ������
        {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for (int i = 0; i < RomanChar.size(); i++) //���� ����������� ������� ������
        {
            if ((RomanChar[i] == 'V' || RomanChar[i] == 'X') && i !=0) //� ������ ����� ������� ����� ��� ���������, �� ��� � ��� ��������.
            {
                if (RomanChar[i - 1] == 'I') ToRetur += ROMtoINT[RomanChar[i]] - 2; else ToRetur += ROMtoINT[RomanChar[i]];
            }
            else if ((RomanChar[i] == 'L' || RomanChar[i] == 'C') && i != 0)
            {
                if (RomanChar[i - 1] == 'X') ToRetur += ROMtoINT[RomanChar[i]] -20; else ToRetur += ROMtoINT[RomanChar[i]];
            }
            else if ((RomanChar[i] == 'D' || RomanChar[i] == 'M') && i != 0)
            {
                if (RomanChar[i - 1] == 'C') ToRetur += ROMtoINT[RomanChar[i]] -200; else ToRetur += ROMtoINT[RomanChar[i]];
            }
            else 
            {
                ToRetur += ROMtoINT[RomanChar[i]];
            }
        } 

        return ToRetur;
    }
};

