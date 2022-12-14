//  Created by Fransiskus Agapa on 8/23/2022.

#ifndef BASICCLASS6_CAPITILIZEWORD_H
#define BASICCLASS6_CAPITILIZEWORD_H

#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::string;

string Capitalize(string& word)
{
    if(islower(word[0]))                     // if first char is lower
    {
        word[0] = toupper(word[0]);          // make the lower case to upper case
    }

    return word;
}

#endif //BASICCLASS6_CAPITILIZEWORD_H
