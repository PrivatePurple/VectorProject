//
//  Controller.cpp
//  VectorProject
//
//  Created by Davis, Keenan on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"


Controller :: Controller()
{
    for(int index = 0; index <5; index++)
    {
        this->intVect.push_back(index);
    }
    this->strVect.push_back("Hey! it works!");
    this->strVect.push_back("Wow!");
    this->strVect.push_back("Amazing!");
    
}

void Controller :: start()
{
    cout << "Integer Vector" << endl;
    for (int index = 0; index < this->intVect.size(); index++)
    {
    cout << this->intVect.at(index) << " ";
    }
    
    cout<< "Sring Vector" << endl;
    for(int index = 0; index < this->strVect.size(); index++)
    {
        cout << this->strVect.at(index) << endl;
    }
}


