#include <iostream>
using namespace std;

int main()
{
    int y;
    int sum=0;
    int n;
    int x;
    cout << "tell the no : ";
    cin >> n;

    cout << "reverse of the " << n << " is : ";
    y=n;

    while (n > 0)
    {
        int x = n % 10;
        sum=sum*10+x;
        n = n / 10;
    }
    
    cout<<sum;
    cout<<endl;

    if (y==sum)
    {
        cout<<"no is a pallindrome ";
    }
    else
    {
        cout<<"no is not a pallindrome ";
    }
    
    

    return 0;
}
