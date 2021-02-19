#include "include/list.h"

void List::print_menu(){
    int choice;

    cout<<"\n**************\n";
    cout<<"Hi "<<name<<" !"<<endl;
    cout<<"1 - Print List"<<endl;
    cout<<"2 - Add to List"<<endl;
    cout<<"3 - Delete from List"<<endl;
    cout<<"4 - Quit"<<endl;

    cin >> choice;

    if(choice == 4){
        exit(0);
    }else if(choice == 1){
        print_list();
    }else if(choice == 2){
        add_item();
    }else if(choice == 3){
        delete_item();
    }else cout<<"Not a correct choice..."<<endl;

}

void List::print_list(){
    cout<<"\n\n\n";
    cout<<" List :"<<endl;
    for(int i=0; i<list.size(); i++) cout<<" * "<<list[i]<<endl;

    cout<<"M - Menu"<<endl;

    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu();
    }else cout<<"Invalid!---Try again!"<<endl;
}

void List::add_item(){
    cout<<"\n\n\n";
    cout<<"***Add Item***"<<endl;
    cout<<"Type in an item and press enter"<<endl;

    string item;
    cin >> item;

    list.push_back(item);

    cout<<"Succesfully added"<<endl;
    
    cin.clear();

    print_menu();
}

void List::delete_item(){
    if( list.size() ){
        cout<<"\n\n\n";
        cout<<"***Delete Item***"<<endl;
        cout<<"Type the index of the item to delete and press enter"<<endl;

        for(int i=0; i<list.size(); i++){
            cout << i << " : " << list[i] <<endl;
        }
        int choice;
        cin >> choice;

        if(choice >= 0 && choice < list.size()) list.erase(list.begin() + choice);
    }else{
        cout<<"The list is empty"<<endl;
    }

    print_menu();
}