//Practice problem Link - https://practice.geeksforgeeks.org/problems/find-length-of-loop/1#

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    struct Node *t1,*t2;
    t1=t2=head;
    while(1){
        if(t2->next==NULL || t2->next->next==NULL)
        return 0;
        t1=t1->next;
        t2=t2->next->next;
        if(t1==t2)
        break;
    }
    t1=head;
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;
    }
    int count=1;
    t1=t2->next;
    while(t1!=t2){
        t1=t1->next;
        count++;
    }
    return count;
}
