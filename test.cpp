#include <iostream>
#include <string>

using namespace std;


string contact_list[50] ={};//keeping track of contacts 

struct contact;


struct contact{
    string name;
    string phone;
    string email;
    contact* next;  //address
};

contact *head = nullptr;

void addContact(string name, string phone, string email){
    
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

void printList() {
  Contact* current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << std::endl;
}

int main(){
    int action;
    /*
    contact* newContact = new contact;
    newContact->data = 40;
    newContact->next = nullptr;
    
    */
    /*
    Node* createNode(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        return newNode;
}
    */
   cout<<"choose between 1 to 4"<<endl;
   cin>>action;

   
   switch (action){
    case 1:
        cout<<"adding contact"<<endl;
        string name, phone, email;
        addContact(name, phone, email);
   }
    return 0;
}
