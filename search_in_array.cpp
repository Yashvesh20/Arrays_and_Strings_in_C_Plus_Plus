Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main(){
    int num[10]={20,22,56,220};
    int key;
    cout<<"Enter the value to search in the array: ";
    cin>>key;
    for(int j=0;j<5;j++)
    {
        if(key==num[j])
        {
        cout<<"Key found at Location:"<<j;
        }
        break;
        
        
    }
}
Output:
Enter the value to search in the array: 220
Key found at Location:3
