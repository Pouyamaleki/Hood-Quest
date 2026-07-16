#include "Hash.h"

// convert to hash method implementation
size_t Hash::ConvertToHash(const string &pass)
{
    size_t hash = 0;
    for (char c : pass)
    {
        hash = hash * 31 + c;
    }
    return hash;
}