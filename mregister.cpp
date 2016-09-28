//
//  mregister.cpp
//  MultiMedia
//
//  Created by Ivar Tika on 2016-09-22.
//  Copyright © 2016 Ivar. All rights reserved.
//
#include "mregister.hpp"
#include "Class_multimedia.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

//Lägg till i vector//
void mregister::add()
{
    multimedia obj1;
    
    cout << "Type Name, Model, and Code" << endl;
    
//Why is this not working?
    cin >> obj1;
    
};

//Write to file skall använda en vector som man skrivit till för att skriva denna till en fil!//
void mregister::writetofile()
{
    ofstream instrom ("Hemma Media.txt", ios_base::app);
    
    if (instrom.is_open())
    {
        instrom << .name << ' ' << .model << '' << .code << endl;
        
        instrom.close();
    }
    else
        cout << "Not able to open file" << endl;
    
    instrom.close();
    
    
};

//Läs av o skriva av det som står i filen//
void mregister::readfromfile()
{
    char x;
    string line;
    
    //Här ser vi till att läsa från filen, nu läser vi allt//
    if (toupper (x) == 'Y')
    {
        ifstream utstrom ("Hemma Media.txt");
        
        if (utstrom.is_open())
        {
            while (getline (utstrom, line))
            {
                cout << line << endl;
            }
            utstrom.close();
        }
        
    }
    else if (toupper (x) == 'N')
        cout << "Bey Felisha" << endl;
    
};

//Söka av filen och radera det användaren vill radera//
void mregister::deletefromfile()
{
    string erase, line;
    
    cout << "What do you want to delete?\n Name, Model or Code?" << endl;
    cin >> erase;
    
    //Vi vill hämta från filen//
    ifstream instrom;
    
    instrom.open("Hemma Meida.txt");
    
    if (instrom.is_open())
    {
        while (getline (instrom, line))
        {
            if (erase.compare(line) == 0)
            {
                //Här måste den tabort det du ville erase från filen//
                cout << "Replacing Successful" << endl;
            }
        }
        instrom.close();
    }
    
};

void mregister::searchfile()
{
    
    
};


//Vad fan gör denna??? //
ostream &operator << (ostream &stream, multimedia &outmulti)
{
    stream << "()=(" << outmulti.name << outmulti.model << outmulti.code << endl;
    
    return stream;
    
};

//Vad fan gör denna då? //
istream &operator >> (istream &stream, multimedia &inmulti)
{
    stream >> inmulti.name;
    stream >> inmulti.model;
    stream >> inmulti.code;
    
    return stream;
    
};


mregister::mregister()
{
    
};

