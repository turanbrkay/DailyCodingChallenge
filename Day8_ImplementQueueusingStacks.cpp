//
// Created by turan on 8/18/2024.
//



#if 0
#include <stack>
class MyQueue {
public:
    std::stack<int> st1;
    std::stack<int> st2;
    int turn = 0;
    MyQueue() {

    }

    void push(int x) {

        while (!st1.empty()) {
            st2.emplace(st1.top());
            st1.pop();
        }
        st1.emplace(x);
        while (!st2.empty()) {
            st1.emplace(st2.top());
            st2.pop();
        }

    }

    int pop() {

        int front = st1.top();
        st1.pop();
        return front;



    }

    int peek() {
        return st1.top();
    }

    bool empty() {
        if (st1.empty())
            return true;

        return false;
    }
};


#endif