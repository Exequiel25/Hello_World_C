#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database{
    public:

    Database(){}

    vector<vector<string>> mainList;

    void write(vector<vector<string>>);
    vector<vector<string>> read();
};