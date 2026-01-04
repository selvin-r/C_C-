#include <iostream>


using namespace std;


// Sum Of n Numbers 

int main (){

int n,total=0;

cout<<"Enter The N value"<<endl;
cin>>n;

for(int i=1;i<=n;i++){


    total +=i;
    cout<<total<<endl;
}
    return 0;
}