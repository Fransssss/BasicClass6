// Created by Fransiskus Agapa on 8/23/2022.


#ifndef BASICCLASS6_TOUPPER_H
#define BASICCLASS6_TOUPPER_H

#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::string;

string ToUpper(string& word)
{
    for(size_t i = 0; i < word.size(); ++i)
    {
        if(islower(word[i]))                      // if any lower case is found
        {
            word[i] = toupper(word[i]);          // make it upper case and assign it as new value
        }
    }
    return word;
}

#endif //BASICCLASS6_TOUPPER_H
