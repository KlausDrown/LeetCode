#include <vector>
#include <iostream>
//#include "MyLibrary\Task5_MinStack\MinStack.h"
using namespace std;

//Definition for singly-linked list.


class MinStack {
private:
    vector<long int> MyStack;
    vector<long int> minval;
    bool NewExit = true;
public:

    //MinStack() {  

    //};
    void push(int vallue) {
        MyStack.push_back(vallue);
        if (NewExit) minval.push_back(MyStack.back());

        if (minval.back() >= MyStack.back() && !NewExit)
        {
            minval.push_back(MyStack.back());
        }
        NewExit = false;



    }

    void pop() {
        auto iter = MyStack.cbegin();
        auto iter2 = minval.cbegin();
        if (minval.back() == MyStack.back())
        {
            minval.erase(iter2 + minval.size() - 1);
            auto iter2 = minval.cbegin();
            MyStack.erase(iter + MyStack.size() - 1);
            auto iter = MyStack.cbegin();
        }
        else {
            MyStack.erase(iter + MyStack.size() - 1);
            auto iter = MyStack.cbegin();
        }
    }

    int top() {
        return MyStack.back();
    }

    int getMin() {
        return minval.back();
    }
};








int main() {
    MinStack* minStack = new MinStack();
    minStack->push(2147483646);
    minStack->push(2147483646);
    minStack->push(2147483647);
    minStack->top();
    minStack->pop();
    minStack->getMin();
    minStack->pop();
    minStack->push(2147483647);
    minStack->top();
    minStack->getMin();
    minStack->push(-2147483648);
    minStack->top();
    minStack->getMin();
    minStack->pop();
    minStack->getMin();


    return 0;
}

