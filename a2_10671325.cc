#include <iostream>

using namespace std;
int checkprimenumber(int);
int main()
{
int n;
cout <<"Input Number"<<endl;
cin>>n;
if(checkprimenumber(n)==0)
    cout <<n<<"is a prime number.";
else
    cout<<n<<"is not a prime number.";


    return 0;
}
int checkprimenumber(int n)
{
    bool flag =false;
    for (int i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag =true;
            break;
        }
    }
    return flag;
}
