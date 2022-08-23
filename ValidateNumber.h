//  Created by Franiskus Agapa on 8/23/2022.

#ifndef BASICCLASS6_VALIDATENUMBER_H
#define BASICCLASS6_VALIDATENUMBER_H

#include "string"
#include "cctype"

using std::string;
using std::isdigit;

bool ValidateNumber(string& strNumber)
{
    int amountValidDigit = strNumber.size();         // all chars in input has to be digit
    int keepTrackValidDigit = 0;                     // keep track of valid digit

    for(size_t i = 0; i < strNumber.size(); ++i)
    {
        if(isdigit(strNumber[i]))
        {
            keepTrackValidDigit += 1;
        }
    }

    if(keepTrackValidDigit != amountValidDigit)
    {
        return false;
    }
    return true;
}


#endif //BASICCLASS6_VALIDATENUMBER_H
