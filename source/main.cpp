#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inf("../test/expressive_cpp17_before.csv");
    if(!inf)
    {
	    cout << "[Error]: could not open test/expressive_cpp17_before.csv.\n";
	    exit(1);
    }

    ofstream outf("../test/out.csv");
    if(!outf)
    {
	    cout << "[Error]: could not open test/out.csv.\n";
	    exit(1);
    }

    string strInput;
    while(true)
    {
	    if(inf.eof()) break;       // avoid to read the lastline twice.
	    getline(inf, strInput);
	    cout << strInput << '\n';
	    outf << strInput << '\n';
    }


    return 0;
}
