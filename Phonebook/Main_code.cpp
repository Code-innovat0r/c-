#include<iostream>
#include<map>
#include<fstream>
#include<string>
using namespace std;

// static int choice;

class Methods{
    protected:
    map<string, string> Contact;
    map<string, string> :: iterator iterContact;
    string name; 
    string number;
    public:
    virtual void SomeInitialContact()=0;
    virtual void SearchByName()=0;
    virtual void SearchByNumber()=0;
    virtual void AddContact()=0;
    virtual void EditContact()=0;
    virtual void ViewAllContact()=0;
    virtual void BackupContact()=0;
    virtual void DeleteContact()=0;
    virtual void DeleteAllContact()=0;
};

void Home(){
    cout<<"\n"<<endl;
    printf("Following are the choice for you-> \n");
    cout<<"1. for Search By name"<<endl;
    cout<<"2. for Search By Number"<<endl;
    cout<<"3. for Add contact"<<endl;
    cout<<"4. for Edit contact"<<endl;
    cout<<"5. for View all contact"<<endl;
    cout<<"6. for Back Up Contact "<<endl;
    cout<<"7. for Delete a Contact"<<endl;
    cout<<"8. for Delete all Contact"<<endl<<endl;
}

void ContactExit(){
    cout<<endl<<endl;
    printf("Enter 0 to Home or any other to exit -> \n");
    int option;
    cin>>option;
    switch (option)
    {
     case 0:
        Home();
        break;
     default:
        exit(0);
    }
}    

class FunctionDefining : public Methods{
    public:
        void SomeInitialContact(){
            Contact.insert({{"shayam lal", "234"}, {"satyam Pal", "312"}, {"Ram lal", "34"}, {"Moti lal", "25"}});
        }
        void SearchByName(){
            string name1, name2;
            printf("Enter the First name of the Person: \n");
            cin>>name1;
            printf("Enter the Second name of the Person: \n");
            cin>>name2;
            name = name1 + " "+ name2;
            int i = 0;
            cout<<name<<endl;
                for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++)
                {
                    if ((*iterContact).first == name)
                    {
                        cout<<"Name: "<<(*iterContact).first<<", Contact Number: "<<(*iterContact).second<<endl;
                        i++;
                    }
                }
                if (i==0)
                {
                    cout<<" No, Contact With this Name is Found \n";
                }
                
            ContactExit();
        }
        
        void SearchByNumber(){
            printf("Enter the number of the Person: \n");
            cin>>number;
            int i = 0;
                for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++)
                {
                    if ((*iterContact).second == number)
                    {
                        cout<<"Name: "<<(*iterContact).first<<", Contact Number: "<<(*iterContact).second<<endl;
                        i++;
                    }  
                    
                }
                if (i==0)
                {
                    cout<<"No, Such contact found.."<<endl;
                }
                
            ContactExit();
        }

        void AddContact(){
            string name1, name2;
            printf("Enter the First name of the Person: \n");
            cin>>name1;
            printf("Enter the Second name of the Person: \n");
            cin>>name2;
            name = name1 + " "+ name2;
            printf("Enter the Contact detail: \n");
            cin>>number;
            int i = 0;
                for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++)
                {
                    if ((*iterContact).first == name)
                    {
                        cout<<"Contact with this Name Already Exist Pls Select another name..."<<endl; 
                        i++;   
                    }  
                    else if ((*iterContact).second == number)
                    {
                       cout<<"Contact with this Number Already Exist Pls Edit in that Contact..."<<endl; 
                       i++;   
                    }
                }
                if(i==0){
                        Contact.insert({name, number});
                        printf("Successfully Contact is Saved..\n");
                    }
            ContactExit();
        }

        void EditContact(){
            string new_name, new_name1, new_name2, name1, name2, new_number;
            printf("Enter the First older name of the Person: \n");
            cin>>name1;
            printf("Enter the Second older name of the Person: \n");
            cin>>name2;
            name = name1 + " "+ name2;
            printf("Enter the older Number of the Person: \n"); 
            cin>>number;
                for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++){
                    if ((*iterContact).second == number and (*iterContact).first == name){
                        printf("Enter the First name of the Person: \n");
                        cin>>new_name1;
                        printf("Enter the Second name of the Person: \n");
                        cin>>new_name2;
                        new_name = new_name1 + " "+ new_name2;
                        printf("Enter the New Number of the Person: \n"); 
                        cin>>new_number;
                        Contact.erase(name);
                        Contact.insert({new_name , new_number});
                        printf("Contact Updated..\n");
                    }
                }
            ContactExit();
        }

        void ViewAllContact(){
            for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++)
            {
                cout<<"Name: "<<(*iterContact).first<<", Contact Number: "<<(*iterContact).second<<endl;
            }
            ContactExit();
        }

        void BackupContact(){
            printf("Creating BackUp Please Wait..\n");
            ofstream Backup;
            Backup.open("BackContact.txt");
            int a = 1;
            for (iterContact = Contact.begin(); iterContact != Contact.end() ; iterContact++)
            {
                Backup<<a<<". Name: "<<iterContact->first<<", Contact Number: "<<iterContact->second<<endl;
                a++;
            }
            printf("BackUp File 'BackContact.txt' is Created..\n");
            ContactExit();
        }

        void DeleteContact(){
            printf("Enter Password: \n");
            string pass;
            cin>>pass;
            if(pass == "12PARAS"){
                printf("Enter the name: \n");
                cin>>name;
                Contact.erase(name);
                printf("Contact with name: %s, is deleted Successfully \n", name.c_str());
            }
            else{
                cout<<"Wrong Password.."<<endl;
            }
            ContactExit();
        }

        void DeleteAllContact(){
            cout<<"Enter Password: \n";
            string pass;
            cin>>pass;
            if(pass == "12PARAS"){
                Contact.clear();
                printf("All the Contact is Deleted Successfully..\n");
            }
            else{
                cout<<"Wrong Password.."<<endl;
            }
            ContactExit();
        }
   
};

int main(){
    FunctionDefining object;
    object.SomeInitialContact();
    int c = 0;
    while(c==0){
        int choice;
        Home();
        cout<<"Enter Your Choice -> "<<endl;
        cin>>choice;
        if(choice == 1){
            object.SearchByName();
        }
        else if (choice == 2){
            object.SearchByNumber();
        }
        else if (choice==3)
        {
            object.AddContact();
        }
        else if (choice==4)
        {
            object.EditContact();
        }
        else if (choice==5)
        {
            object.ViewAllContact();
        }
        else if (choice==6)
        {
            object.BackupContact();
        }
        else if (choice==7)
        {
            object.DeleteContact();
        }
        else if (choice==8)
        {
            object.DeleteAllContact();
        }
        else{
            string a;
            printf("You have made a wrong selection...\n");
            printf("Enter 0 for Home and any other key to exit -> ");
            cin>>a;
            if(a=="0"){}
            else{c = 23;}
        }
    }
    return 0;
}