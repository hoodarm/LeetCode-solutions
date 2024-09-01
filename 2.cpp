#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* result = nullptr;  // Head of the result list
    ListNode* tail = nullptr;    // Pointer to the last node in the result list
    ListNode* current = l1;
    ListNode* current2 = l2;
    int first = 0;
    int second = 0;
    int carry = 0;

    while (current != nullptr || current2 != nullptr) {
        if (current != nullptr) {
            first = current->val;
            current = current->next;
        } else {
            first = 0;
        }
        
        if (current2 != nullptr) {
            second = current2->val;
            current2 = current2->next;
        } else {
            second = 0;
        }
        
        int sum = first + second + carry;
        carry = sum / 10;
        ListNode* newNode = new ListNode(sum % 10);

        if (result == nullptr) {
            // Initialize the result list with the first node
            result = newNode;
            tail = newNode;
        } else {
            // Append the new node to the result list
            tail->next = newNode;
            tail = newNode;
        }
    }

    // If there's a carry left after processing all nodes, add a new node with this carry
    if (carry != 0) {
        tail->next = new ListNode(carry);
    }

    return result;  // Return the head of the resulting linked list
}


int main(){
    ListNode* l1_node7 = new ListNode(9, nullptr);
    ListNode* l1_node6 = new ListNode(9, l1_node7);
    ListNode* l1_node5 = new ListNode(9, l1_node6);
    ListNode* l1_node4 = new ListNode(9, l1_node5);
    ListNode* l1_node3 = new ListNode(9, l1_node4);
    ListNode* l1_node2 = new ListNode(9, l1_node3);
    ListNode* l1_node1 = new ListNode(9, l1_node2);

    // Head of the list l1
    ListNode* l1 = l1_node1;

    // Creating the nodes for list l2
    ListNode* l2_node4 = new ListNode(9, nullptr);
    ListNode* l2_node3 = new ListNode(9, l2_node4);
    ListNode* l2_node2 = new ListNode(9, l2_node3);
    ListNode* l2_node1 = new ListNode(9, l2_node2);

    // Head of the list l2
    ListNode* l2 = l2_node1;

    addTwoNumbers(l1,l2);
}