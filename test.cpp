#include <iostream>
#include <vector>
#include <string>
//인섭이가 알려준 방법~~~~
using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}