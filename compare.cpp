#include<iostream>
using namespace std;
int main()
{
    int arr[4], brr[6], crr[10], k=0, i,j;
    cout<<"enter the element";
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<6; j++)
    {
        cin>> brr[j];
    }
    while(i<4 && j<6)
    {
        if(arr[i]<brr[j])
        {
            crr[k++]=arr[i++];
            cout<<crr[k];
        }
        else
        {
            crr[k++]=brr[j++];
            cout<<crr[k];
        }}
    return 0;

}
