#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode *list3=new ListNode();
        ListNode *temp = list3;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val>=list2->val){
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            else if (list1->val<list2->val){
                temp->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            temp = temp->next;
        }

        while (list1) {
            temp->next = new ListNode(list1->val);
            list1 = list1->next;
            temp = temp->next;
        }

        while (list2) {
            temp->next = new ListNode(list2->val);
            list2 = list2->next;
            temp = temp->next;
        }
        
        return list3->next;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* list1 = new ListNode(1, new ListNode(3, new ListNode(5)));


    ListNode* list2 = new ListNode(2, new ListNode(4, new ListNode(6)));

    Solution sol;
    ListNode* merged = sol.mergeTwoLists(list1, list2);

    printList(merged); 

    return 0;
}