#include <iostream>
#include <string>

using namespace std;


struct contact{
    string name; //details of the contact
    string phone;
    string email;
    contact* next;  //address
};

contact *head = nullptr;
contact *tail = nullptr;


void createContact(){//works
    //takes in user input
    string name, phone, email;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter phone: "<<endl;
    cin>>phone;
    cout<<"enter email: "<<endl;
    cin>>email;
    

    cout<<name<<" "<<phone<<" "<<email<<"\n"<<endl;

    contact *temp = new contact;//create a contact
    temp->name = name;
    temp->phone = phone;
    temp->email = email;
    temp->next = nullptr;//sets next pointer to null for the last node

    if (head == nullptr){//if list is empty
        head = temp;//both head and tail point to new node
        tail = temp;
        //temp = NULL;
    }
    else //if list has ellements
    {
        tail->next = temp;  //tail point to the new element
        tail = temp;      
    }

}

//lists all contacts found in the list
void seeContacts(){//works
    contact *temp;
    temp = head; // Start from the head of the list
    while(temp != nullptr){ //loops through contacts until the last contact
        cout<<"printing contact..."<<endl;
        cout<<temp->name<<endl;
        cout<<temp->phone<<endl;
        cout<<temp->email<<endl;
        temp = temp->next; //update pointer to become next
    }

    //delete temp; //unnecessary since the tail becomes unreferenced
}


//deletes every single node from list before termimating
void deleteAllnodes(){
    
    contact* current = head; // Start from the head of the list
    while (current != nullptr) {
        contact* next = current->next;
        delete current;
        current = next;
    }
}


void searchcontact(){//searches through the linked list for the name
    contact *temp = head; //starts from the head
    string sname;
    bool found = false;
    cout<<"enter name for search: ";
    cin >>sname;

    while (temp != nullptr){
        if (temp->name == sname){ //compare name in contact node to input
            found = true;
            cout<<"found:"<<endl;//if true prints data
            cout<<temp->name<<endl;
            cout<<temp->phone<<endl;
            cout<<temp->email<<endl;
            
        }

        contact* next = temp->next; //gets next contact to compare
        temp = next; //updates current node to next

        
    }

    if (found == false){
        cout<<"Not found"<<endl;
    }


}

void deleteContact() { // deletes contact
    string nameToDelete;
    cout<<"Enter name to be deleted: ";
    cin>>nameToDelete;
    if (head == nullptr) {
        cout << "Contact list is empty." << endl;
        return;
    }

    contact* current = head;
    contact* prev = nullptr;

    // Traverse the list to find the contact to delete
    while (current != nullptr) {
        if (current->name == nameToDelete) {
            if (prev == nullptr) {
                // If the node to delete is the head node
                head = current->next;
            } else {
                
                prev->next = current->next;
            }

            delete current;
            cout << "Contact deleted successfully." << endl;
            return;
        }
        prev = current;
        current = current->next;
    }

    // Contact with the given name not found
    cout << "Contact named " << nameToDelete << " not found." << endl;
}




int main(){

    int active = true;

    while(active){//maintains the app active
        int action;

        cout<<"--- Address Book ---"<<endl;//indicate to user choises.
        cout<<"1. Add Contact"<<endl;
        cout<<"2. List all Contact"<<endl;
        cout<<"3. Search Contact"<<endl;
        cout<<"4. Deleting Contacts"<<endl;
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
            case 3:
                searchcontact();
                break;
            case 4:
                //cout<<"not yet available"<<endl;
                deleteContact();
                break;
            case 5:
                cout<<"Not yet available";
                break;
            default:
                cout<<"ending..."<<endl;
                deleteAllnodes();
                return 0;

        }
    }


    return 0;
}

