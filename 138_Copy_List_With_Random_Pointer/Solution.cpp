#include "Node.h"
#include "Solution.h"
#include <unordered_map>


Node* Solution::copyRandomList(Node* head) {
    if (!head) {
        return NULL;
    }
    std::unordered_map<Node*, int> old_nodes;
    std::unordered_map<int, Node*> new_nodes;
    Node* new_head = new Node(head->val);
    int idx = 0;
    old_nodes[head] = idx;
    new_nodes[idx] = new_head;
    ++idx;
    Node* previous_node = new_head;
    Node* current_old = head->next;
    while (current_old) {
        old_nodes[current_old] = idx;
        Node* new_node = new Node(current_old->val);
        new_nodes[idx] = new_node;
        ++idx;
        previous_node->next = new_node;
        previous_node = new_node;
        current_old = current_old->next;
    }
    previous_node = new_head;
    while (head) {
        if (head->random) {
            previous_node->random = new_nodes[old_nodes[head->random]];
        }
        previous_node = previous_node->next;
        head = head->next;
    }
    return new_head;
}

