//
//  ex7_13.cpp
//  Exercise 7.13
//
//  Created by pezy on 11/9/14.
//

#include "ex7_12.h"

using namespace std;

int main()
{
    Sales_data total(cin);
    if (!total.isbn().empty())
    {
        istream &is = cin;
        while (is) {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    
    return 0;
}