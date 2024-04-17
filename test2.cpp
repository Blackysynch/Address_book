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

//inserting contacts in the address book



int main(){
    
    bool status = true;
    


    while(status){
        int action;


        cout << "\n** Address Book **\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. remove contact \n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> action;
        
        
        switch (action){
            case 0:
                cout<<"You choose to stop"<<endl;
                status = false;
            case 1:
                cout<<"not available yet"<<endl;
            case 2:
                cout<<"not available yet"<<endl;
            case 3:
                cout<<"enter a name to search"<<endl;
            case 4:
                cout<<"not available yet"<<endl;
            case 5:
                cout<<"not available yet"<<endl;
            case 6:
                cout<<"not available yet"<<endl;
            
            /*
            case 1:
                cout<<"remember use only lowercase letters with no space"<<endl;

            case 2:
            */
            
        }
        
    }

    return 0;
}

