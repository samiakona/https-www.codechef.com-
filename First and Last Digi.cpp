#include<iostream>
using namespace std;
int main()
{
    int num, sum=0, s, k,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>> num;
        k = num % 10;
        s = num;

        while(num >= 10)
        {
            num = num / 10;
        }
        s = num;
        sum = s + k;

       cout << sum << endl;
    }
    return 0;
}
