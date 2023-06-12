#include <iostream>
using namespace std;

#define size 8

int FindMax(int a[],int n) //function to find largest element
{
    int i, max;
    max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max =a[i];
    }
    return max; //returns the largest number to main function
}

int FindMin(int a[],int n) //function to find smallest element
{
    int i, min;
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min =a[i];
    }
    return min; //returns the smallest number to main function
}

int main()
{
    int arr[] = {57, 54, 69, 92, 78, 67, 85, 91}; //Marks of 8 students
    int max, min;
    max = FindMax(arr,size); //Passing the array
    min = FindMin(arr,size); //and calling the function
    cout<<"Maximum marks scored by a student:" << max << "\n";
    cout<<"Minimum marks scored by a student:" << min << "\n";
    return 0;
}
