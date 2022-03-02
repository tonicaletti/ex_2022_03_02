#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>

bool issubstr(std::string &s, std::string &t)
{
    if (s.length() < t.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0])
        {
            bool flag = true;
            for (int j = 1; j < t.length(); j++)
            {
                if (s[i + j] != t[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                std::cout << "true at index: " << i << std::endl;
                return true;
            }
        }
    }


    return false;
}


bool is_subsequence(std::string &longstr, std::string &sub)
{
    unsigned int index = 0;
    for (int i = 0; i < longstr.length(); i++)
    {
        if (longstr[i] == sub[index])
        {
            index++;
        }
    }
    if (index == sub.length())
    {
        return true;
    }
    return false;
}

int main()
{
    std::cout << "Is substring exercise:" << std::endl;

    std::string s = "longstring";
    std::string t = "ngstr";
    std::string t_2 = "mffgs";

    //char c = t[0];
    //auto it = std::find(s.begin(), s.end(), 'c');


    std::cout << std::boolalpha << issubstr(s, t) << std::endl;
    std::cout << std::boolalpha << issubstr(s, t_2) << std::endl;


    return 0;
}
