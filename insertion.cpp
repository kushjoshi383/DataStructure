#include<iostream>
#include<iomanip>
using namespace std;

void display(int A[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        cout<<A[i]<<endl;
    }
}

void index_insertion(int A[],int index,int element,int length)
{
    int i;
    for(i=length;i>index;i--)
    {
        A[i]=A[i-1];
    }
    A[index]=element;

}



int main()
{
    int A[10]={5,3,4,6,7};
    int length=5,element=87,index=3;
    display(A,length);
    index_insertion(A,index,element,length);
    length++;
    display(A,length);
    return 0;


}
