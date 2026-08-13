#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word = "", longestWord = "";
    int maxLength = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\0')
        {
            word += sentence[i];
        }
        else
        {

            if (word.length() > maxLength)
            {
                maxLength = word.length();
                longestWord = word;
            }
            word = "";
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << maxLength << endl;

    return 0;
}