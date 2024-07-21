#include <iostream>
#include "LongestConsecutiveSequence.h"

int main() {
	LongestConsecutiveSequence solut;
	vector<int> nums{ 2,20,4,10,3,4,5 };
	cout << "Function return = ";
	cout << solut.longestConsecutive(nums);
	return 0;
}

