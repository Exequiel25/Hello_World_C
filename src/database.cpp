#include "include/database.h"

void Database::write(vector<string> list){
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open()){
        for(int i=0; i<list.size(); i++) db << list[i] << endl;

    }else {
        cout<<"Cannot open the file"<<endl;
    }

    db.close();
}

void Database::read(){
    ifstream db;
    db.open("db/lists.sl");

    string line;

    if(db.is_open()){

        while( getline(db, line, '\n') ){
            if( line.front() == '#'){

            }else if( line.front() == '%'){

            }else {
                
            }
        }

    }else {
        cout<<"Cannot open the file for reading"<<endl;
    }

    db.close();
}