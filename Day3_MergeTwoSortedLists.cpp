//
// Created by turan on 8/11/2024.
//





#if 0 //1 ms
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* lead = new ListNode();
    ListNode* idle = lead;

    while (list1 != nullptr && list2 != nullptr) {
        if(list1->val >= list2->val) {
            idle->next = list2;
            list2 = list2->next;
        }else {
            idle->next = list1;
            list1 = list1->next;
        }
        idle = idle->next;
    }

    if (list1 != nullptr) {
        idle->next = list1;
    }else {
        idle->next = list2;
    }

    return lead->next;

}


int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(4);

    a->next = b;
    b->next = c;


    ListNode* d = new ListNode(1);
    ListNode* e = new ListNode(3);
    ListNode* f = new ListNode(4);
    d->next = e;
    e->next = f;


    ListNode* result = mergeTwoLists(a,b);

    std::cin.get();


}

#endif

#if 0 // 3ms
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr && list2 == nullptr) {
        return nullptr;
    }else if (list1 == nullptr) {
        return list2;
    }else if (list2 == nullptr) {
        return list1;
    }


    ListNode* lead = list1;

    if (list1->val >= list2->val) {
        lead = list2;
        list2 = list2->next;
    } else {
        list1 = list1->next;
    }

    ListNode* idle = lead;

    while (list1 != nullptr && list2 != nullptr) {
        if(list1->val >= list2->val) {
            idle->next = list2;
            list2 = list2->next;
        }else {
            idle->next = list1;
            list1 = list1->next;
        }
        idle = idle->next;
    }

    if (list1 != nullptr) {
        idle->next = list1;
    }else {
        idle->next = list2;
    }

    return lead;

}


int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(4);

    a->next = b;
    b->next = c;


    ListNode* d = new ListNode(1);
    ListNode* e = new ListNode(3);
    ListNode* f = new ListNode(4);
    d->next = e;
    e->next = f;


    ListNode* result = mergeTwoLists(a,b);

    std::cin.get();


}

#endif

#if 0 //WORSE
#include <iostream>
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr && list2 == nullptr) {
        ListNode* empty = nullptr;
        return empty;
    }

    ListNode* result = new ListNode();
    ListNode* nextNode;
    nextNode = result;
    while (list1 != nullptr && list2 != nullptr) {
        if(list1->val > list2->val) {
            nextNode->val = list2->val;
            list2 = list2->next;
        }else {
            nextNode->val = list1->val;
            list1 = list1->next;
        }
        nextNode->next = new ListNode();
        nextNode = nextNode->next;
    }

    while (list1 != nullptr) {
        nextNode->val = list1->val;
        list1 = list1->next;
        if(list1 != nullptr) {
            nextNode->next = new ListNode();
            nextNode = nextNode->next;
        }
    }
    while (list2 != nullptr) {
        nextNode->val = list2->val;
        list2 = list2->next;
        if(list2 != nullptr) {
            nextNode->next = new ListNode();
            nextNode = nextNode->next;
        }

    }

    return result;
}

int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(4);

    a->next = b;
    b->next = c;


    ListNode* d = new ListNode(1);
    ListNode* e = new ListNode(3);
    ListNode* f = new ListNode(4);
    d->next = e;
    e->next = f;


    ListNode* result = mergeTwoLists(new ListNode,new ListNode);

    std::cin.get();


}

#endif