Yashvesh Singhn 24070123138
#include<iostream>
using namespace std;
int main(){
    int x,sum,avg;
    cout<<"Enter the size of array: ";
    cin>>x;
    int num[x];
    cout <<"Enter any "<<x<<" integer values: ";
    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    for(int j=0;j<x;j++)
    {
        sum+=num[j];
        
    }
    cout<<"The sum of elements is: "<<sum;
    avg=sum/x;
    cout<<"\nThe average of elements is: "<<avg;
}
Output:
Enter the size of the array: 4
Enter any 4 integer values: 20
22
12
The sum of elements is : 50
The average of elements is : 18
