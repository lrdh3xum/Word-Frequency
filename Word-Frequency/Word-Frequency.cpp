/*
    Using unordered set functionality to count the frequency
    at which words appear in a sentence.
*/
#include <iostream>
#include <unordered_map>
#include <sstream>

void getWordFrequency(const std::string& str)
{
    std::unordered_map<std::string, int> freq;

    std::stringstream ss(str);
    std::string word;
    while (ss >> word)
    {
        freq[word]++;
    }

    std::unordered_map<std::string, int>::iterator itr;
    for (itr = freq.begin(); itr != freq.end(); itr++)
    {
        std::cout << "(" << itr->first << ", " << itr->second << ")\n";
    }
}

int main()
{
    std::string testString = "All truth passes through three stages. First, it is ridiculed. Second, it is violently opposed. Third, it is accepted as being self-evident.";
    getWordFrequency(testString);

    return 0;
}