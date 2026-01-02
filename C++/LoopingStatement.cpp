#include <iostream>

using namespace std;

int main()
{

    int i=1, n;
    cout<<"Enter The n Value"<<endl;
    cin>>n;

    while (i <= n)
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
}


// Counter Controller Loop 



int main1(){

int n,t;
cout<<"Enter the n value"<<endl;
cin>>n;
cout<<"Enter The t value"<<endl;
cin>>t;

for(int i=1;i<=n;i++){


    cout<<t<<"*"<<i<<"="<<t*i<<endl;
}


    return 0;
}