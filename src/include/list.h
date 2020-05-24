#include <iostream>
#include <vector>
using namespace std;

class List 
{
    private:
    protected:
    public:
        List(){
            //constructor
        }
        ~List(){
            //destructor
        }
        vector<string> list;
        vector<vector<string>> mainList;
        string name;
        int currentUserIndex;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
        bool find_userList();
        void save_list();
};