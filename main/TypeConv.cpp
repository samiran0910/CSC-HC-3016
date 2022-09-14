#include <iostream>
using std::cerr;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <cstdlib>
int main()
{
    char x[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    ofstream outdata;
    outdata.open("num");
    if (!outdata)
    {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }
    for (int i = 0; i < 26; ++i)
    {
        outdata << (int)x[i] << "\t" << x[i] << endl;
    }
    outdata.close();
    ifstream infile;
    infile.open("num");

    char data[100];
    for (int i = 0; i < 52; ++i)
    {
        infile >> data;
        std::cout << endl;
        std::cout << data;
    }
    infile.close();

    return 0;
}