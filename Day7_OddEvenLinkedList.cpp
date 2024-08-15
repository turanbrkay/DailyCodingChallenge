//
// Created by turan on 8/15/2024.
//



#if 0

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* oddEvenList(ListNode* head) {
    std::cin.tie(NULL); std::ios::sync_with_stdio(false);

    if (head==nullptr || head->next == nullptr ||  head->next->next == nullptr) {
        return head;
    }

    ListNode* previousNode = head;
    ListNode* currentNode = head->next;
    ListNode* beginOfOddNodes = head->next;

    while (currentNode!=nullptr) {

        previousNode->next = currentNode->next;
        currentNode->next = currentNode->next->next;

        currentNode = currentNode->next;
        previousNode = previousNode->next;

        if (currentNode == nullptr || currentNode->next == nullptr) {
            previousNode->next = beginOfOddNodes;
            break;
        }

    }

    return head;

}




#endif