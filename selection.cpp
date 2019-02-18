#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int index,key,temp,num;
    cout<<"How many elements do you want? \n";
    cin>>num;
    int arr[num];
    cout<<"enter values of array : ";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= num - 1; i++)
    {
        index = i;
        key = arr[i];
        for (int j = i + 1; j <= num; j++)
        {
            if (arr[j] < key)
            {
                key = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    cout<<"After sorting using selection sort : \n";
    for (int k = 0; k < num; k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}
