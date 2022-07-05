#include <gtest/gtest.h>
#include "../Solution.h"
#include "../Node.h"

TEST(BaseTest, BasicAssertions) {
    Solution a = Solution();
    Node* head = new Node(1);
    Node* another_node = new Node(2);
    head->next = head->random = another_node;
    another_node->random = another_node;
    Node* new_head = a.copyRandomList(head);
    EXPECT_NE(new_head, head);
    EXPECT_NE(new_head->next, nullptr);
    EXPECT_EQ(new_head->next, new_head->random);
    EXPECT_EQ(new_head->next->random, new_head->next);
    EXPECT_EQ(new_head->next->next, nullptr);
    EXPECT_EQ(new_head->val, head->val);
    EXPECT_EQ(new_head->next->val, head->next->val);
}
