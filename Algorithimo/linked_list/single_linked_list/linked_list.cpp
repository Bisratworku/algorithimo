//=nb
#include <iostream>
using namespace std;
struct list{
    int item;
    struct list * next;
}*start =NULL;
    
void add_first(){
    int item;
    cout<<"Enter item"<<endl;
    cin>>item;
    struct list *first;
    first = new list;
    first->item = item;
    if (start == NULL){
        start = first;
        start ->next = NULL;
    }else{
        first ->next = start;
        start = first;
    }
}

void add_last(){
	int item;
	cout<<"Enter item"<<endl;
	cin>>item;
	struct list *last;
	last = new list;
	last ->item = item;
	if(start == NULL){
		start = last;
		last -> next = NULL;
	}else{
		struct list *iter = start;
		while(iter->next != NULL){
			iter = iter -> next;
		}
		iter -> next = last;
		last -> next = NULL;
	}
}

void del_first(){
	if(start == NULL){
		cout<<"The list is empty"<<endl;
	}
	else{
		struct list * del = start;
		start = del -> next;
		delete(del);
	}
}
void del_last(){
	if(start == NULL){
		cout<<"The list is empty"<<endl;
	}else{
		struct list *del_l = start;
		struct list *del_f;
		while(del_l->next != NULL){
			del_f = del_l;
			del_l = del_l -> next;
		}
		del_f -> next = NULL;
		delete(del_l);
	}
}

void display(){
    if(start == NULL){
        cout<<"The List is Empty"<<endl;
    }else{
        struct list *iter = start;
        while (iter != NULL){
            cout<<iter->item<<endl;
            iter = iter->next;
        }
    }
}

int main(){
	for(int i = 0; i < 3; i++){
		add_last();
	}
	cout<<"_________________"<<endl;
	display();
	del_last();
	cout<<"after-----------------"<<endl;   
	display();
    return 0;
}

