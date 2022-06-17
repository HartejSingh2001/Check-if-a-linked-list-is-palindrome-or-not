 bool isPalindrome(Node *head)
    {
         Node *temp=head;
         unsigned long long int num=0;
        if(temp->next==NULL)
        {
            return true;
        }
        while(temp!=NULL)
        {
           num=(num*10)+temp->data;
           temp=temp->next;
        }
        // Now reversing the number
         unsigned long long int num1=num, num2=0,rem=0;
        
        while(num1!=0)
        {
            rem=num1%10;
            num2=(num2*10)+ rem;
            num1=num1/10;
        }
        
        if(num==num2)
        {
            return true;
        }
         return false;
    }
