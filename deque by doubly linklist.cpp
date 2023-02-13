
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node* next;
    node* prev;
    node(int input)
    {
        value=input;
        next=NULL;
        prev=NULL;
        return;
    }
};






class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    
    
    void push_back(int value)
    {
    	 node* temp;
       node* n;
       n=new node(value);
   	if(head!=NULL)
    	{
    		head->next=n;
		}
       head=n;
    }
    
    
    void push_front(int value)
    {
      node* temp;
	  node* n;
	  n=new node(value);
	  if(head==NULL) 
	  {
	  	head=n;
	  }
       n->next=n;       
    }
    
    
    void pop_front()
    { int store;
    	node* temp;
    	temp=head;
      if(head==0)
      {
      	cout<<"queue is empty";
	  }
      store= temp->value;
      
     delete store;
      
    }
    
    void pop_back()
    {
      node* temp;
      temp=head;
	  
	 while(temp!=NULL)
	 {
	 	temp=temp->next;
	  } 
	  
	 delete (temp->value);
	 
	 
	   return 0; 
    }
    
    int get_front()
	{
		cout<<head->value;
		
    	return 0;
    }
    

    int get_back()
	{
		node* temp;
		temp=head;
		while(temp!=0)
		{
			temp->next=temp;
			
		}
		cout>>temp->value;
		
    	return 0;
    }
    
    void display_queue()
    {
    node* temp;
	node=temp;
		
    		while(temp!=0)
		{
			temp->next=temp;
				cout>>temp->value;
		}
   
    }
};




int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    cout<<"front: "<<get_front()<<"\n";
    cout<<"back: "<<get_back()<<"\n";
    s.display_queue();
}
