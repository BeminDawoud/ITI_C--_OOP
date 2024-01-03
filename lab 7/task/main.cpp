#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    string filename = "txt.txt";
    string line;



    ifstream filePointer(filename);

    if (!filePointer.is_open())
    {
        cout << "unable to open the file"  << endl;
        return -1;
    }


    cout << "Contents of the file:" << endl;
    while (getline(filePointer, line))
    {
        cout << line << endl;
    }

    // Close the file
    filePointer.close();

    return 0;
}
