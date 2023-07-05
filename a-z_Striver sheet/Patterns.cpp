#include <iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        //star
        for(int j=0;j<2*i+1;j++)
            cout<<"*";
        //space(optional)
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=0;i<n;i++)
	    {
	        //space
	        for(int j=0;j<i;j++)
	            cout<<" ";
	        //star
	        for(int j=0;j<2*n-(2*i+1);j++)
	            cout<<"*";
	        //space
	        for(int j=0;j<i;j++)
	            cout<<" ";
	       cout<<endl;
	    }
}

void pattern9(int n)
{
     for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        //star
        for(int j=0;j<i+1;j++)
            cout<<"* ";
        //space(optional)
       
        cout<<endl;
    }
        
       for(int i=0;i<n;i++)
	    {
	        //space
	        for(int j=0;j<i;j++)
	            cout<<" ";
	        //star
	        for(int j=0;j<n-i;j++)
	            cout<<"* ";
	        //space
	        
	       cout<<endl;
	    }
}

void pattern10(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(int n)
{
    int start=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)  start=1;
        else start=0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;      //flipping condition b/w 0 and 1
        }
        cout<<endl;
    }
}

void pattern12(int n)
{
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        //number
        for(int j=1;j<=i;j++)
            cout<<j;
        //space  
        for(int j=0;j<space;j++)
            cout<<" ";
        //number
        for(int j=i;j>0;j--)
            cout<<j;
        cout<<endl;
        space-=2;
    }
}

void pattern13(int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
            cout<<ch;
        cout<<endl;
    }
}

void pattern16(int n)
{
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<ch;
        cout<<endl;
        ch++;
    }
}


void pattern17(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        //alphabets
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++)
        {
            cout<<ch;
            if(j<breakpoint)
            ch++;
            else
            ch--;
        }
            
        //space(optional)
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
        cout<<endl;
    }
}

void pattern18(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void pattern19(int N)
{
     //upper half 
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //stars 
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //spaces
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //stars
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
            cout<<endl;
      }
      //lower half
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //stars 
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //spaces
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //stars
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          cout<<endl;
      }
}

void pattern20(int n)
{
    int iniS=2*n-2;
        for(int i=1;i<=(2*n-1);i++)
        {
            int star=i;
            if(i>n) star=2*n-i;
            //star
            for(int j=1;j<=star;j++)
                cout<<"*";
            //space
            for(int j=1;j<=iniS;j++)
                cout<<" ";
            //star
            for(int j=1;j<=star;j++)
                cout<<"*";
            cout<<endl;
            if(i<n) iniS-=2;
            else iniS+=2;
        }
}

void pattern21(int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || i==n-1 || j==0 || j==n-1)   cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
}

void pattern22(int n)
{
    for(int i=0;i<(2*n-1);i++)
        {
            for(int j=0;j<(2*n-1);j++)
            {
                int top=i;
                int left=j;
                int right=2*n-2-j;
                int bottom=2*n-2-i;
                cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
            }
            cout<<endl;
        }
}

int main()
{
    int n;
    cin>>n;
    pattern22(n);
    return 0;
}
