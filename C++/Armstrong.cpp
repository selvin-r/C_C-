
// Armstrong Number


#include <iostream>

using namespace std;

int main (){

    int sum=0, n,t,r;

    cout<<"Enter The Number :"<<endl;
    cin>>n;

    t=n;

    while(n>0){

        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
      

 
        
    }
       if(sum==t){

            cout<<"This Is Armstrong number"<<endl;
        }
        else{

            cout<<"This Is Not Armstrong number"<<endl;
        }


    return 0;
}