#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int len1=a.length();
        int len2=b.length();
        int flag=0;
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(a[i]==b[j])
                {    
                    flag++;
                    break;
                }

            }
        }
        cout<<flag<<endl;
        cout<<abs(len1+len2-2*flag)<<endl;
    }
    return 0;
}
