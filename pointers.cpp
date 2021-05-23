#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array\n";
    cin>>n;
    int *p=new int[n];
   // p=new int[n];
    cout<<"\n now enter the array elements\n";
    for(i=0;i<=n;++i)

        cin>>*(p+i);

    cout<<"array elements are\n";
    for(i=0;i<n;++i)
        cout<<*(p+i);

    delete p;

}
