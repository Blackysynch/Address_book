#include <iostream>
#include <string>

using namespace std;


struct contact{
    string name;
    string phone;
    string email;
    contact* next;  //address
};

contact *head = nullptr;
contact *tail = nullptr;


void createContact(){//works
    string name, phone, email;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter phone: "<<endl;
    cin>>phone;
    cout<<"enter email: "<<endl;
    cin>>email;
    

    cout<<name<<" "<<phone<<" "<<email<<"\n"<<endl;

    contact *temp = new contact;
    temp->name = name;
    temp->phone = phone;
    temp->email = email;
    temp->next = nullptr;//sets next pointer to null for the last node

    if (head == nullptr){
        head = temp;//bith head and tail point to new node
        tail = temp;
        //temp = NULL;
    }
    else
    {
        tail->next = temp;  
        //tail = temp;      
    }

}

void seeContacts(){//works
    contact *temp;
    temp = head;
    while(temp != nullptr){
        cout<<"printing contact..."<<endl;
        cout<<temp->name<<endl;
        cout<<temp->phone<<endl;
        cout<<temp->email<<endl;
        temp = temp->next;
    }

    //delete temp; //unnecessary since the tail becomes unreferenced
}


void deleteAllnodes(){//works
    contact* current = head;
    while (current != nullptr) {
        contact* next = current->next;
        delete current;
        current = next;
    }
}




int main(){

    int active = true;

    while(active){//maintains the app active
        int action;

        cout<<"--- Address Book ---"<<endl;//indicate to user choises.
        cout<<"1. Add Contact"<<endl;
        cout<<"2. List all Contact"<<endl;
        cout<<"0. Exit Address book"<<endl;
        cout<<"Enter your choice: ";

        cin>>action;

        switch (action){
            case 0:
                cout<<"You choose to quit\nExiting app"<<endl;
                deleteAllnodes();
                return 0;
            case 1:
                cout<<"in progress..."<<endl;
                createContact();
                break;
            case 2: 
                seeContacts();
                break;

        }
    }


    return 0;
}