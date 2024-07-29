#include <vector>
#include <iostream>
#include "ListNide.h"
using namespace std;



 

class MergeTwoSortedLinkedLists
{
public:
    ListNode* mergeTwoLists(ListNode* list1 /*ListNode* list2*/) {
        ListNode* NEXT = NULL;
        ListNode* curr(0);
        ListNode* ToRETURN = curr;

        for(int i=0; i <4; i++)
        {
            if (true/*list1->val > list2->val*/)
            {
                curr->next = list1;
                curr = list1;
                list1 = list1->next;
                
            }
            else
            {

            }
        }
        return curr;
    }
};

