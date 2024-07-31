#include<iostream>
#include<vector>
using namespace std;
class MinStack {
private:
    vector<long int> MyStack;
    vector<long int> minval;
    bool NewExit = true;
public:

    MinStack() {  

    };
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
            minval.erase(iter2 + minval.size()-1);
            auto iter2 = minval.cbegin();
            MyStack.erase(iter + MyStack.size()-1);
            auto iter = MyStack.cbegin();
        }
        else {
            MyStack.erase(iter + MyStack.size()-1);
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
