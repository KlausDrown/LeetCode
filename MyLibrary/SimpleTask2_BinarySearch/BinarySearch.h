#include <vector>
using namespace std;
/*Solution For https://neetcode.io/problems/binary-search */
class BinarySearch
{
public:
    int search(vector<int>& nums, int target) {
        int leftNums = 0;
        int RightNums = nums.size() -1;
        if (target < nums[leftNums] || target > nums[RightNums]) return -1;
        while (leftNums <= RightNums)
        {
            int mid = (leftNums + RightNums) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) leftNums = mid + 1;
            else RightNums = mid - 1;
        }
        return -1;
    }
};

