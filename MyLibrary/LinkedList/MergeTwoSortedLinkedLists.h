#include <vector>
#include <iostream>
#include "ListNide.h"
using namespace std;

/* Solution For https://leetcode.com/problems/merge-two-sorted-lists/submissions/1341314447/ */

 

class MergeTwoSortedLinkedLists
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode ToRETURN;
        ListNode* curr = &ToRETURN;

        while ((list1 != NULL) && (list2 != NULL))
        {
            if (list1->val < list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
                
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (list1 != NULL)  curr->next = list1; else curr->next = list2;

        return ToRETURN.next;
    }
};

