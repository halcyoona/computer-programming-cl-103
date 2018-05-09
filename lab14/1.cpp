#include<iostream>
using namespace std;

struct node
{
	int value;
	node *next;
};

class linkList
{
	private:
		node *head;
	public:
		linkList()
		{
			head = NULL;
		}
		
		void insertion()
		{
			node *temp;
			temp = head;
			if(head == NULL)
			{
				head = new node;
				cin >> head->value;
				head->next = NULL;
				 
			}
			else
			{
				temp = head;
				while(temp != NULL)
				{
					temp = temp->next;
				}
				temp = new node;
				cin >> temp->value;
				temp->next = NULL;
			}
		}
		
		void print()
		{
			node *temp;
			temp = head;
			while(temp != NULL)
			{
				cout<<temp->value<<endl;
				temp = temp->next;
			}
		}
		
		void Delete(int key)
		{
			node *temp;
			temp = head;
			node *t;
			while(temp != NULL)
			{
				if(temp->next->value == key)
				{
					t = temp->next;
					temp->next = t->next;
				}
			}
			delete t;
		}
		
		void search(int key)
		{
			node *t;
			node *temp;
			temp = head;
			while(temp != NULL)
			{
				if(temp->value == key)
				{
					cout<<"Yes"<<endl;
				}
			}
		}
		
};


int main()
{
	linkList l;
	l.insertion();
	l.insertion();
	//l.insertion();
	//l.search(3);
	l.print();
	return 0;
}
