
// Call By value


#include <iostream>

using namespace std;

void change(int x){


    x=10;

}

void change(int &x){
    x=10;
}