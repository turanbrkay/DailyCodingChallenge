//
// Created by turan on 8/18/2024.
//


#include <queue>
#if 0

class MyStack {
public:

    std::queue<int> q1;
    std::queue<int> q2;
    MyStack() {

    }

    void push(int x) {
        while (!q1.empty()) {
            q2.emplace(q1.front());
            q1.pop();
        }
        q1.emplace(x);
        while (!q2.empty()) {
            q1.emplace(q2.front());
            q2.pop();
        }
    }

    int pop() {
        int top = q1.front();
        q1.pop();
        return top;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        if (q1.empty())
            return true;
        return false;
    }
};


#endif