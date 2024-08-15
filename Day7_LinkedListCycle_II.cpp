//
// Created by turan on 8/15/2024.
//


#if 0
#include <unordered_map>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    std::cin.tie(NULL); std::ios::sync_with_stdio(false);
    ListNode *slowPointer=head, *fastPointer=head;


    while (fastPointer) {
        if (fastPointer->next == nullptr || fastPointer->next->next == nullptr)
            return nullptr;

        fastPointer = fastPointer->next->next;
        slowPointer = slowPointer->next;

        if (fastPointer==slowPointer) {
            fastPointer = head;

            while (fastPointer!=slowPointer) {
                fastPointer = fastPointer->next;
                slowPointer = slowPointer->next;
            }
            return fastPointer;
        }
    }

    return fastPointer;
}


bool detectCyle(ListNode *head) {
    std::cin.tie(NULL); std::ios::sync_with_stdio(false);
    ListNode *slowPointer=head, *fastPointer=head;


    while (fastPointer) {
        if (fastPointer->next == nullptr || fastPointer->next->next == nullptr)
            return false;

        fastPointer = fastPointer->next->next;
        slowPointer = slowPointer->next;

        if (fastPointer==slowPointer) {

            return fastPointer;
        }
    }

    return fastPointer;
}

#endif