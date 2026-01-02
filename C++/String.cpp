#include <iostream>


using namespace std;

/*

C++ String
Input Functions
Capacity Functions
Iterator Functions
Manipulating Functions

 */

int main()
{


    // string s("Hello iam Selvin ");
    // cout<<s<<endl;



    // String Concatenation 

    // string s ="selvin";
    // string s1="David";
    // cout<<s+s1<<endl;


    // fflush(stdin);   // Defalut value Clera Garbage Valeu clearing 

    // s.push_back('s');   // Add Tha value In String 
    // cout<<s<<endl;
    // s.pop_back();    // Remove tha letter in String 
    // cout<<s<<endl;
    


    // Capacity Functions 


    // string str =("selvin ");

    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.max_size()<<endl;
    // cout<<str.capacity()<<endl;
    // cout<<str.empty()<<endl;    


    // Iterator Functions




    string str = "Selvin David";
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++) {
        cout << *it<<endl;
    }
   

    cout<<"-----------------------------"<<endl;

    //  Reverse Print

      string::reverse_iterator it1;

    for (it1 = str.rbegin(); it1 != str.rend(); it1++) {
        cout << *it1<<endl;
    }

    return 0;


}