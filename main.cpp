//
//  main.cpp
//  MultiMedia
//
//  Created by Ivar Tika on 2016-09-08.
//  Copyright © 2016 Ivar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Class_multimedia.hpp"
#include "mregister.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    int x;
    
    multimedia n1;
    
    mregister v1;
   
    cout << "Welcome to home automation! Select on of the following alternatives (by pressing the nr." << endl;
    cout << "1.Add new media!\n2.Delete Media\n3.Search Meaida\n4.Or exit" << endl;
    cin >> x;
    
    
    //Meny valen//
    switch (x)
    {
        case 1:
            // Add new media //
            v1.writetofile();
            break;
        case 2:
            //Read from file//
            v1.readfromfile();
            break;
        case 3:
            //Delete media//
            n1.deletefromfile();
            break;
        case 4:
            //Search media
            break;
        case 5:
            //Quit//
            if (x == '4')
                cout << "Thank you, Bey bey! " << endl;
            break;
        default:
            break;
    }
    
    return 0;
}
