//
//  Class_multimedia.hpp
//  MultiMedia
//
//  Created by Ivar Tika on 2016-09-08.
//  Copyright © 2016 Ivar. All rights reserved.
//

#ifndef Class_multimedia_hpp
#define Class_multimedia_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#pragma once

using namespace std;

class multimedia
{
public:
    
    string name;
    int model;
    float code;
    
    //Konstruktor//
    multimedia (string n, int m, float k);
    
    //Destructor????//
    multimedia();
    
    
};

#endif /* Class_multimedia_hpp */
