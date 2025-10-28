#include <bits/stdc++.h>
#include <fstream>
#include <cstdio>
using namespace std;


int main(){
    ifstream inFile("hello.txt");
    if(!inFile){
        cout << "File not found";
        return 0;
    }
    string line;
    while(getline(inFile,line)){
        cout<<line << " work"<<endl;
    }

    inFile.close(); 

    // -1 != -1

    // ! (-1 == -1)


    ofstream outFile("example.txt");

    if(!outFile){
        cout<<"file not found";
        return 0;
    }

    outFile << "This is new line";

    outFile.close();


    ofstream outFile1("ex.txt",ios::app);

    if(!outFile1){
        cout<<"file not found";
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        outFile1 << "This is new line " << i+10 << "\n";
    }
    

    outFile1.close();


    fstream file("ex.txt",ios::in | ios::out );

    if(!file){
        cout << "file not found";
        return 0;
    }
    while(getline(file,line)){
        cout<<line << endl;
    }

    file.close();
    cout << "program run" << endl;

    if(remove("ex.txt") == 0){
        cout<< "file deleted";

    }else{
        cout << "file not found";
    }
    return 0;

}