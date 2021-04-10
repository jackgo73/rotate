#ifndef P_00019_REMOVE_NTH_FROM_END
#define P_00019_REMOVE_NTH_FROM_END

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n);
};


#endif //P_00019_REMOVE_NTH_FROM_END