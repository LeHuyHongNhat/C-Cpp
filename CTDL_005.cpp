#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = NULL;
    return node;
}

int removeNode(Node*& head, int x) {
    int count = 0;
    Node* prev = NULL;
    Node* curr = head;
    while (curr) {
        if (curr->data == x) {
            count++;
            if (prev) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                head = curr->next;
                delete curr;
                curr = head;
            }
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return count;
}

void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int n, x;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        Node* node = newNode(data);
        if (!head) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    cin >> x;
    int count = removeNode(head, x);
    printList(head);
    return 0;
}

