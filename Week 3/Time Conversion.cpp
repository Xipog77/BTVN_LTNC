#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string hh,mm,ss;
    getline(cin,hh,':');
    getline(cin,mm,':');
    getline(cin,ss);
    if (ss[2]== 'P')
    {
        hh[0] += 1;
        hh[1] +=2;
    }
    if (ss[2]== 'A' && hh[0] == '1' && hh[1] == '2')
    {
            hh[0] = '0';
            hh[1] = '0';
    }
    if (ss[2]== 'P' && hh[0] == '2' && hh[1] == '4')
    {
            hh[0] = '1';
            hh[1] = '2';
    }
    cout << hh << ":" << mm<< ":" << ss[0] << ss[1];
}
