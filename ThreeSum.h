//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include "LongestConsecutiveSequence.h"
//using namespace std;
//
//class ThreeSum
//{
//public:
//    vector<vector<int>> sum3(vector<int>& nums) {
//        vector<int> nums2;
//        int SIZEnums = nums.size();
//        int poisk = 0;
//        int sdvig = 0;
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < nums.size();)
//        {
//
//            
//            poisk = nums[i] + nums[SIZEnums - sdvig-1];
//            i++;
//            for (int j = (i + 1); j < (SIZEnums - sdvig); j++)
//            {
//                if (poisk == nums[j] || (poisk + nums[j] == 0))
//                {
//                    cout << nums[i] << "\t" << nums[SIZEnums - sdvig - 1] <<"\t"<< nums[j] << endl;
// sdvig ++;
//                }
//            }
//         
//            
//        }
//
//
//
//
//        int stroki = nums2.size() / 3;
//        vector < vector <int> > a(stroki, vector <int>(3));
//
//        for (int i = 0; i < stroki; i++)
//            for (int j = 0; j < 3; j++)
//            {
//                a[i][j] = nums2[j + (3 * i)];
//            }
//        cout << "udal ulement" << endl;
//        for (int i = 0; i < stroki; i++) // Цикл, который идёт по строкам
//        {
//            for (int j = 0; j < 3; j++) // Цикл, который идёт по элементам
//                cout << a[i][j] << ' '; // Вывод элементов i строки вектора
//            cout << endl;
//        }
//
//        return a;
//    }
//}; /*идите нахуй с такиме задачами, я язык не так хорошо знаю, хули он находит только парно противоположенные цисла друг другу?!*/ 
