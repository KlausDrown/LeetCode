#include <vector>
using namespace std;
/*Solution For https://neetcode.io/problems/subsets*/
class Subsets
{
private:
    vector<vector<int>> returned;
    void Foo(vector<int>& nums, int iterator, vector<vector<int>>& returned,vector<int>& subset)      
    {
        if (iterator >= nums.size())
        {
            returned.push_back(subset);
            iterator--;
            return;
        }
        subset.push_back(nums[iterator]);
        Foo(nums, iterator +1, returned,subset);
        subset.pop_back();
        Foo(nums, iterator + 1, returned, subset);

        return;
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        int kolwo =(int)pow(2, nums.size()) -1;
        Foo(nums, 0, returned, subset);

        return returned;
    }
};

