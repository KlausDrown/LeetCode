#pragma once
#include <vector>
#include <iostream>

using namespace std;
class ThreeSum
{
public:
    vector<vector<int>> sum3(vector<int>& nums) {
        vector<int> nums2;

        for (int i = 0; i < (nums.size() - 2); i++)
        {
            for (int j = i; j < (nums.size() - 1); j++)
            {
                for ( int  k = j; k <  nums.size()  ; k++)
                {
                    if ( i != k && i !=j && j !=k )
                    {
                        if ((nums[i] + nums[j] + nums[k]) == 0)
                        {
                            nums2.push_back(nums[i]);
                            nums2.push_back(nums[j]);
                            nums2.push_back(nums[k]);
                        }
                    }
                }
            }
        }

        int SIZEnums = nums.size();
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
