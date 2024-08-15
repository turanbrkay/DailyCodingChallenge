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

bool hasCycle(ListNode *head) {
    std::cin.tie(NULL); std::ios::sync_with_stdio(false);
    ListNode *slowPointer=head, *fastPointer=head;


    while (fastPointer) {
        if (fastPointer->next == nullptr || fastPointer->next->next == nullptr)
            return false;

        fastPointer = fastPointer->next->next;
        slowPointer = slowPointer->next;

        if (fastPointer==slowPointer) {
            return true;
        }
    }

    return false;

}



#endif


/*bool hasCycle(ListNode *head) {
    std::unordered_map<ListNode*, int> passedNodes;
    int counter=0;
    ListNode* temp = head;

    while (temp) {
        if (passedNodes.find(temp) == passedNodes.end()) {
            passedNodes[temp] = counter++;
            temp = temp->next;
        }else {
            return true;
        }
    }

    return false;
}*/