#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL;
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    
    

private:
    Node *head; 
};


int main (){
	
 	LinkedList list;
	int choice, num, x, temp;
	
	while(1){
		cout<<"~~~~~Choices~~~~~"<<endl;
		cout<<"[1]Insert into linked list"<<endl;
		cout<<"[2]Pop"<<endl;
		cout<<"[3]Exit"<<endl<<endl;
		cout<<"Enter Choice: ";
		cin>>choice;
		switch(choice){
            case 1:
            	cout<<"Enter a number: ";
			   	cin>>num;
			   	list.addValue(num);
			  	cout<<"Value Added!"<<endl;
                break;
            case 2:
               	list.popValue();
				cout<<"Value deleted!"<<endl;
				break;
            case 3:
                return 0;
                break;
           
			}
        }
        return 0;
    }
    
