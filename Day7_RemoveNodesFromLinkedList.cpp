//
// Created by turan on 8/16/2024.
//



#if 0
#include <queue>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseLinkedList(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* backNode = nullptr;
    ListNode* currentNode = head;

    while (currentNode) {
        ListNode* nextNode = currentNode->next;
        currentNode->next = backNode;
        backNode = currentNode;
        currentNode = nextNode;
    }

    return backNode;
}

ListNode* removeNodes(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* reversedList = reverseLinkedList(head);

    ListNode* headof = reversedList;
    ListNode* temp = reversedList->next;
    int high = reversedList->val;

    while (temp) {
        if (temp->val >= high) {
            high = temp->val;
            reversedList->next = temp;
            reversedList = reversedList->next;
            temp = temp->next;
        }else {
            temp = temp->next;
        }
    }

    reversedList->next = nullptr;

    ListNode* reversed = reverseLinkedList(headof);
    return reversed;

}

#endif