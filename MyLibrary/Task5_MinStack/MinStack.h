#pragma once
class MinStack {
public:
    int val;
    MinStack* next;
    MinStack() : val(0), next(nullptr) {}
    MinStack(int x) : val(x), next(nullptr) {}
    MinStack(int x, MinStack* next) : val(x), next(next) {}

    void push(int val) {

    }

    void pop() {

    }

    int top() {

    }

    int getMin() {

    }
};
