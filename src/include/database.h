#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database{
    public:

    Database(){}

    void write(vector<string> list);
    void read();
};