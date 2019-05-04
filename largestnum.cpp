int main() {

int n;
cout<<"enter test case";
cin>>n;
while(n--)
{
int a[n], l, k, j;
cout<<"enter array";
for(int i=0; i<n; i++)
{
cin>>a[i];
}
int c[j];


for(int i=0; i<n; i++)
{
c[j]=a[i]%a[i+1];
j++;
}

    for(j = 1;j < n; ++j)
    {
        // Change < to > if you want to find the smallest element
        if(c[0] < c[j])
            c[0] = c[j];
    }
    cout << "Largest element = " << c[0];
}
return 0;
}

