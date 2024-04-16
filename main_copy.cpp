#include <iostream>
#include <string>

using namespace std;


struct contact{
    int data; //
    string name;
    string phone;
    string email;
    contact* next;  //address
};

contact *head = nullptr;
contact *current = nullptr;

//inserting contacts in the address book

void addContact(){
    string name, phone, email;
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter phone: "<<endl;
    cin>>phone;
    cout<<"enter email: "<<endl;
    cin>>email;

    contact* newContact = new contact;
    newContact->name = name;
    newContact->phone = phone;
    newContact->email = email;
    newContact->next = nullptr;
    
    
    cout<<newContact->name<<endl;
    cout<<newContact->phone<<endl;
    cout<<newContact->email<<endl;
}

void search(){

}

void listContacts(){
    contact *ptr = head;

    while (ptr != NULL){
        cout<< " " << ptr->name << " "<<endl;
        ptr = ptr -> next;
    }

}



int main(){
    
    bool status = true;
    


    while(status){
        int action;


        cout << "\n** Address Book **\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. remove contact \n";
        cout << "4. list all contact names\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> action;
        
        
        switch (action){
            case 0:
                cout<<"You choose to stop"<<endl;
                status = false;
                break;
            case 1:
                //cout<<"not available yet"<<endl;
                
                addContact();
                break;
            case 2:
                cout<<"not available yet"<<endl;

                search();
                break;

            case 3:
                cout<<"enter a name to search"<<endl;
                break;
            case 4:
                cout<<"not available yet"<<endl;
                cout<<"list of contacts:";

                break;
            case 5:
                cout<<"not available yet"<<endl;
                break;
            case 6:
                cout<<"not available yet"<<endl;
                break;
            
            /*
            case 1:
                cout<<"remember use only lowercase letters with no space"<<endl;

            case 2:
            */
            
        }
        
    }

    return 0;
}

