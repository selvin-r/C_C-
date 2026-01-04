
// Function Overloading 

//  Same Method name Deferrnat Parametter


#include <iostream>

using namespace std;


int sum (int a,int b){



return a+b;
}

int sum(int a,int b,int c){



    return a+b+c;

}


float sum(float a,float b){


return a+b;
}
int main (){

    cout<<"Total :"<<sum(20,30)<<endl;
    cout<<"Total :"<<sum(20,30,40)<<endl;
    cout<<"Total :"<<sum(2.0f,3.0f)<<endl;


    return 0;
}