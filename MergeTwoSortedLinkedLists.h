#include <vector>
#include <iostream>
#include "ListNide.h"
using namespace std;



 

class MergeTwoSortedLinkedLists
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /*ListNode* NEXT = list1;*/
        ListNode ToRETURN(0);
        ListNode* curr = &ToRETURN;

        while ((list1 != NULL) && (list2 != NULL))
        {
            if (list1->val > list2->val)
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
        return ToRETURN.next;
    }
};

