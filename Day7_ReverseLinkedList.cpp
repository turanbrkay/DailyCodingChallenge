//
// Created by turan on 8/15/2024.
//


#if 0
#include <iostream>
#include <queue>
 struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
   };

ListNode* reverseList(ListNode* head) {
    std::cin.tie(NULL); std::ios::sync_with_stdio(false);
    if (!head || !(head->next))
        return head;

    ListNode* back = head;
    ListNode* temp = head->next;
    ListNode* forward;
    back->next = nullptr;

    while (temp) {
        forward = temp->next;
        temp->next = back;
        back = temp;
        temp = forward;
    }

    return back;
}


#endif



/*ListNode* reverseList(ListNode* head) {
    if (!head || !(head->next))
        return head;
    std::queue<ListNode*> trash;


    trash.emplace(head);
    trash.emplace(head->next);

    ListNode* temp = head->next;
    head->next = nullptr;

    while (temp) {
        temp = temp->next;

        trash.back()->next=trash.front();
        trash.pop();



        if (temp) {
            trash.emplace(temp);
        } else {
            return trash.front();
        }

    }

    return temp;

}*/

