#include <vector>
#include <iostream>
#include "LongestConsecutiveSequence.h"
using namespace std;

class ThreeSum
{
public:
    vector<vector<int>> sum3(vector<int>& nums) {
        vector<int> proba;
        vector<int>nums2;
        for (int i : nums)
        {
            nums2.push_back(i);
        }
        auto begin = nums2.cbegin();
        auto end = nums2.cend();
        end = begin;
        bool braking = false;
        int debag1;
        int SIZEnums = nums2.size();
        int strok = 0;
        for (int a = 0; a < 1 /*(SIZEnums - 2)*/; a++) //первый цикл
        {
            int SIZEnums = nums2.size();
            for (int b = a; b < (SIZEnums - 1); b++)
            {

                if (a != b) {
                    for (int c = b; c < SIZEnums - 2; c++)
                    {
                        if ((a != c) and (b != c)) {
                            if ((nums2.size()) <= 3)
                            {
                                if ((nums2.size()) < 3) break;
                                if ((nums2.size()) == 3)
                                {
                                    if ((nums2[0] + nums2[1] + nums[2]) == 0)
                                    {
                                        proba.push_back(nums2[0]);
                                        proba.push_back(nums2[1]);
                                        proba.push_back(nums2[2]);
                                        goto vuhod;
                                    }
                                    goto vuhod;
                                }
                            }
                            if ((nums2[(a + 0)] + nums2[(b + 0)] + nums2[(c + 0)]) == 0)
                            {
                                proba.push_back(nums2[a]);
                                proba.push_back(nums2[b]);
                                proba.push_back(nums2[c]);
                                nums2.erase(begin + a);
                                begin = nums2.cbegin();
                                nums2.erase(begin + (b - 1));
                                begin = nums2.cbegin();
                                nums2.erase(begin + (c - 2));
                                begin = nums2.cbegin();
                            }
                        }
                    }
                }
            }
        }
    vuhod:
        cout << "v sume dayut 0" << endl;
        for (int i : proba) cout << i << endl;
        int stroki = nums2.size() / 3;
        vector < vector <int> > a(stroki, vector <int>(3));

        for (int i = 0; i < stroki; i++)
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = nums2[j + (3 * i)];
            }
        cout << "udal ulement" << endl;
        for (int i = 0; i < stroki; i++) // Цикл, который идёт по строкам
        {
            for (int j = 0; j < 3; j++) // Цикл, который идёт по элементам
                cout << a[i][j] << ' '; // Вывод элементов i строки вектора
            cout << endl;
        }

        return a;
    }
};
