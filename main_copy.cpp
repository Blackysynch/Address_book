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
contact *current = nullptr;

//inserting contacts in the address book

void addContact(){//this wiil add contact info
    //using inserting into linked list from the end
    string name, phone, email;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter phone: "<<endl;
    cin>>phone;
    cout<<"enter email: "<<endl;
    cin>>email; 
    //creating the new contact
    contact* newContact = (struct contact*) malloc(sizeof(struct contact));
    newContact->name = name;
    newContact->phone = phone;
    newContact->email = email;
    newContact->next = nullptr;//points to null at the end

    //if our list is empty, change new contact to be the head;
    if (head == nullptr){
        head = newContact;
        current = newContact;
    } else {// else add to the end of the list
        current->next = newContact;
        current = newContact;
    }
    
    //delete newContact;
}

/*


void listContacts(){
    contact *ptr = head;

    while (ptr != NULL){
        cout<< " " << ptr->name << " "<<endl;
        ptr = ptr -> next;
    }

}



*/

int main(){
    
    bool status = true;
    


    while(status){
        int action;

        //user chooses what he wants to do;
        cout << "\n--- Address Book ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. remove contact \n";
        cout << "4. list all contact names\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> action;
        
        
        switch (action){//decide which action to make
            case 0:// stop the app
                cout<<"You choose to stop"<<endl;
                break;
            case 1:// add contacts
                cout<<"not available yet"<<endl;
                
                addContact();
                continue;
            case 2:// search the contacts
                //cout<<"not available yet"<<endl;
                break;
/*
            case 3:
                cout<<"enter a name to search"<<endl;
                break;
            case 4:
                cout<<"not available yet"<<endl;
                cout<<"list of contacts:";

                //listContacts();
                break;
                
*/           
        }

        cout<<"done";
        
    }

    return 0;
}

