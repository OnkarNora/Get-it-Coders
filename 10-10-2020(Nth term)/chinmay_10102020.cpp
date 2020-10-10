// Chinmay's C++ code
// https://www.hackerrank.com/challenges/recursion-in-c/problem

#include<iostream>
using namespace std;

int nth_term(int n, int* a, int i)
{
    // Sorry! : there was no need to declare variable 'x' in the C code.
    if(i<3)
    {
        i++;
        nth_term(n, a, i);
    }
    else if(i>2 && i<n)
    {
        a[i] = a[i-1] + a[i-2] + a[i-3];
        i++;
        nth_term(n, a, i);
    }
    return a[n-1];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int i=3;
    cout<<"The nth term of considered series is:"<<endl<<nth_term(n,a,i);
    return 0;
}

// OUTPUT

// 5
// 1 2 3
// The nth term of considered series is:
// 11