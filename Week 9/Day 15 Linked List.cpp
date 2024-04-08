

      Node* insert(Node *head,int data)
      {
          Node* newNode = new Node(data);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
        }
            current->next = newNode;
    }
    return head;
         
      }
      
      

