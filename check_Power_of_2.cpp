#include <iostream>

using namespace std;
bool checkPow_2(int n){
    if((n&n-1)==0){
        return 1;
    }
    return 0;
}


int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<checkPow_2(n);

    return 0;
}
