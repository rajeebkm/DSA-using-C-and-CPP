#include<stdio.h>
#include<iostream>

using namespace std;

int main () {
    int A[10]={13,2,3,5,7,9,65,9};

    // foreach loop
    for (int x:A)

    {
        cout<<x<<endl;
    }
    // int A[5];
    // A[0]=13;
    // A[1]=2;
    // A[2]=3;
    // int i;
    // for (int i=0; i<5; i++)
    // {
    //     cout<<A[i]<<endl;
        // cout<<A[8]<<endl;

        // cout<<A[3]<<endl;
        // cout<<sizeof(A)<<endl; size of A=20; Current Compiler

        // printf("%d\n", A[9]);
        // printf("%d\n", A[3]);
    // }
    return 0;
}