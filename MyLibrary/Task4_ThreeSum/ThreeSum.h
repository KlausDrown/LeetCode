#pragma once
#include <vector>
#include <algorithm>

using namespace std;
class ThreeSum
{
public:
    vector<vector<int>> sum3(vector<int>& nums) {
        vector<int> nums2;
        sort(nums.begin(), nums.end());
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
        for (int i = 0; i < (stroki - 1); i++)
        {
            for (int j = 0; j < stroki; j++)
            {
                if (i !=j && j>i)
                {

                    if (a[i] == a[j]) {
                        auto iterA = a.cbegin();
                        a.erase(iterA + i);
                        i = 0;
                        j = 0;
                        stroki = a.size();

                }
                }

            }
        }
        return a;
    }
};
