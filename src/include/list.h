#include <iostream>
#include <vector>

using namespace std;

class List{
    public:

    List(){}

    vector<vector<string>> mainList;
    vector<string> list;
    string name;

    int current_user_index;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();

    bool find_userList();
    void save_list();
};