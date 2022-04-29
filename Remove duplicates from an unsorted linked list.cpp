//Practice problem Link - https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#

Node * removeDuplicates( Node *head) 
    {
    unordered_set<int> s;
    Node *t=head;
    Node *temp=head;
    s.insert(t->data);
    Node *p=t;
    t=t->next;
    while(t!=NULL){
        if(s.find(t->data)!=s.end()){
            t=t->next;
            temp=p->next;
            p->next=temp->next;
            temp->next=NULL;
            free(temp);
        }
        else{
          s.insert(t->data);   
          p=p->next;
          t=t->next;
        }
    }
    return head;
    }
