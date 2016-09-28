//
//  mregister.hpp
//  MultiMedia
//
//  Created by Ivar Tika on 2016-09-22.
//  Copyright © 2016 Ivar. All rights reserved.
//

#ifndef mregister_hpp
#define mregister_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Class_multimedia.hpp"
#pragma once


class mregister
{
protected:
    
    //Vector som jobbar med multimedia filen som "mall"//
    vector <multimedia> multivector;
    
public:
    
    //Detta är för att kunna skriva till och från fil //
    friend ostream &operator << (ostream &stream, multimedia &outmulti);
    friend istream &operator >> (istream &stream, multimedia &inmulti);
    
    //Detta är våra funktioner vi använder//
    void add();
    void writetofile();
    void readfromfile();
    void deletefromfile();
    void searchfile();
    
    //Destructor / constructor //
    mregister();
};


#endif /* mregister_hpp */
