#include <iostream>

using namespace std;   // Value For All Packagaes 


/*

Why using Namespace nameinhg Config Error Tha mena using 

*/

/*
using std::cout;      // Single Value 
using std::cin;


*/


namespace name1{
    string name="selvin";
    int age=23;

}
namespace name2{
    string name="selvin";

}

using namespace name1;

int main() {

//     int a;
//     cout << "Enter Tha value of a:\n";                     // Output print
//     cin>>a;                                     // Input User Put Tha Value 
//     cout<< "A value Of \n"<<a;
//     return 0;


cout<<name1::name,"\n";
cout<<name2::name,"\n";

    return 0;



}
