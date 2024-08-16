//
// Created by turan on 8/16/2024.
//




// 	plausible

#if 0



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


void deleteNode(ListNode* node) {
    ListNode* nextNode = node->next;
    node->val = nextNode->val;
    node->next = nextNode->next;

    delete nextNode;
}



#endif
