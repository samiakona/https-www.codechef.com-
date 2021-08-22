#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int T;
    char ar[15];

    cin>> T;
    while(T--)
    {
        cin>> ar;
        int cnt=0,i;
        for(i=0; i<strlen(ar); i++)
        {
            if(ar[i]=='4') cnt++;
        }
        cout<< cnt << endl;
    }
    return 0;
}
