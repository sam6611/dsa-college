#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* segregate(Node* head) {
        Node zeroDummy(0), oneDummy(0), twoDummy(0);
        Node *z = &zeroDummy, *o = &oneDummy, *t = &twoDummy;

        Node* curr = head;

        while (curr) {
            if (curr->data == 0) {
                z->next = curr;
                z = z->next;
            }
            else if (curr->data == 1) {
                o->next = curr;
                o = o->next;
            }
            else {
                t->next = curr;
                t = t->next;
            }
            curr = curr->next;
        }

        t->next = NULL;
        o->next = twoDummy.next;
        z->next = oneDummy.next ? oneDummy.next : twoDummy.next;

        return zeroDummy.next;
    }
};

Node* insert(Node* head, int val) {
    if (!head) return new Node(val);

    Node* temp = head;
    while (temp->next) temp = temp->next;

    temp->next = new Node(val);
    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 0);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 0);

    Solution obj;
    head = obj.segregate(head);

    printList(head);

    return 0;
}