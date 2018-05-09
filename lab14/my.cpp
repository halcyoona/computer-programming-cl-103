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
				node *t;
				while(temp != NULL)
				{
					t = temp;
					temp = temp->next;
					
				}
				temp = new node;
				t->next = temp;
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
				temp = temp->next;
			}
			delete t;
		}
		
		void Search(int key)
		{
			node *temp;

			temp = head;
			while(temp != NULL)
			{
				if(temp->value == key)
				{
					cout<<"Yes"<<endl;
				}
				temp = temp->next;
			}
		}
		
};


int main()
{
	linkList l;
	l.insertion();
	l.insertion();
	l.insertion();
	l.Search(3);
	//l.print();
	//l.Delete(3);
	//l.print();
	return 0;
}
