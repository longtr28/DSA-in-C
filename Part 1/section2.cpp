#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int num1=10,num2=15;

    swap(&num1,&num2);

    cout<<"First Number "<<num1<<endl;
    cout<<"second Number "<<num2<<endl;

    return 0;
}