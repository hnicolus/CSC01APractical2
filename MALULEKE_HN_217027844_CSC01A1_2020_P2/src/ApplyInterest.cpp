#include <iostream>
using namespace std;

int main()
{
    // declare dblPrice ,dblAmount ,dblRate 
    double dblPrice;
    double dblRate ;
    double dblAmount;

    //Get inputs
    cin >> dblPrice;
    cin >> dblRate;

    //Calculate 
    dblAmount = dblPrice*(1+dblRate);

    //Outputs price and Rate
    cout << dblAmount << endl;
    cout << dblRate << endl;
return 0;
}