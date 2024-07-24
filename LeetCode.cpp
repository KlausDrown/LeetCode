#include <vector>
#include <iostream>
#include "ValidParentheses.h"
using namespace std;











int main()
{
	ValidParentheses valid;
	if (valid.isValid("(]")) cout << "true" << endl; else cout << "false" << endl;
	return 0;
}

