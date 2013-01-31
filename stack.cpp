#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> allwords; // vector of strings to hold words
    string word;             // input buffer for each word.

    //--- read words/tokens from input stream
    while (cin >> word) {
        allwords.push_back(word);
    }
    
    int n = allwords.size();
    cout << "Number of words = " << n << endl;

    //--- write out all the words in reverse order.
    for (int i=n-1; i>=0; i--) {
        cout << allwords[i] << endl;
    }
    return 0;
}//end main