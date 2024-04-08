

            
          Node* removeDuplicates(Node *head)
          {
           
                if (head == NULL or head->next==NULL) return head;
                else{
                    Node * current = head;
                   while(current->next!=NULL){
                       if (current->next->data == current->data)current->next = current->next->next;
                       else current = current->next;
                   }
                }
                
            return head;
          }

