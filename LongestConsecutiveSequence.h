#include<iostream>
#include <vector>
#include <set>
#include <set>
#include <unordered_set>
using namespace std;
/* https://neetcode.io/problems/longest-consecutive-sequence */
class LongestConsecutiveSequence 
{
public:
	int longestConsecutive(vector<int>& nums) {
		//переменные
		vector<int> newmass;
		int MAXposled=0;
		int Vrevposled = 0;
		int SIZEnums = nums.size();
		unordered_set<int> nums2;
		//переменные
		for (int i = 0; i < SIZEnums; i++)
		{
			nums2.insert(nums[i]);
		}
		for (int i : nums2)
		{
			cout << i << endl;
			if (!(nums2.count(i - 1)))
			{
				newmass.push_back(i);
			}
		}
		cout << "---------------------------------------" << endl << endl;
		for (int i : newmass)
		{
			cout << i << endl;
		}
		for (int i = 0; i < newmass.size(); i++)
		{
			int j = 0;
			while (true)
			{
				j++;
				if (nums2.count(newmass[i] + j))
				{
					Vrevposled += +1;
				}
				else
				{
					if (MAXposled <= Vrevposled)MAXposled = Vrevposled;
					break;
				}
			}
		}

		return (MAXposled + 1);
	}

};


