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
// another comparing
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,k;
   int input;
    vector<int> l;
    while ((cin >> input))
        l.push_back(input);


    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"before sorted";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"after sorted";
   for(int j=0; j<n; j++)
   {
       for(k=0; k<n; k++)
       {
           if(a[j]<a[k]) {
               int temp;
               temp = a[j];
               a[j] = a[k];
              a[k]=temp;
           }
       }
   }
for(int j=0; j<n; j++)
{
    cout<<a[j]<<endl;
}
return 0;
