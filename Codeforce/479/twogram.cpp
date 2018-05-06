// Link = https://stackoverflow.com/questions/4484440/the-most-frequent-substring-of-length-x
#include <iostream>
#include <string>
#include <map>
#include <algorithm>


int main()
{
    std::string s;
    int x;
    int n;
     x = 2;
    std::cin >> n >> s;

    unsigned const int base = 256;
    unsigned long long xPowOfBase = 1;
    int i = 0;
    for(i = 1; i <= x; ++i)
        xPowOfBase *= base;

    unsigned long long firstXLengthSubString = 0;
    for(i = 0; i < x; ++i)
    {
        firstXLengthSubString *= base;
        firstXLengthSubString += s[i];
    }

    unsigned long long nextXLengthSubstring = firstXLengthSubString;

    std::map<unsigned long long, std::pair<int, int> > hashTable;
    for(;i <= s.size(); ++i)
    {
        if(hashTable.find(nextXLengthSubstring) != hashTable.end())
            ++hashTable[nextXLengthSubstring].first;
        else
            hashTable.insert(std::make_pair(nextXLengthSubstring, std::make_pair(1, i - x)));

        if(i != s.size())
        {
            nextXLengthSubstring *= base;
            nextXLengthSubstring += s[i];
            nextXLengthSubstring -= s[i - x] * xPowOfBase;
        }
    }

    std::map<unsigned long long, std::pair<int, int> >::iterator it = hashTable.begin();
    std::map<unsigned long long, std::pair<int, int> >::iterator end_it = hashTable.end();
    std::pair<int, int> maxCountAndFirstPosition = std::make_pair(0, -1);

    for(;it != end_it; ++it)
    {
        if(maxCountAndFirstPosition.first < it->second.first)
            maxCountAndFirstPosition = it->second;
    }

    //std::cout << maxCountAndFirstPosition.first << std::endl;
    std::cout << s.substr(maxCountAndFirstPosition.second, x) << std::endl;
    return 0;
}