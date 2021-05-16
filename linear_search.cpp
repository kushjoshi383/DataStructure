#include<iostream>
#include<iomanip>
using namespace std;
class Array
{
private:

    int *A;
    int size;
    int length;

public:

    Array()
    {
        A=new int[10];
        size=10;
        length=0;
    }

    Array(int sz,int len)
    {
        A=new int[sz];
        size=sz;
        length=len;
    }

    ~Array()
    {
        delete []A;
    }

    void set_data()
    {
        int i;
        cout<<"Enter the elements of the array"<<endl;
        for(i=0;i<length;i++)
        {
            cin>>A[i];
        }
    }

    int linear_search(int key)
    {
        for(int i=0;i<length;i++)
        {
            if(key==A[i])
            {
                cout<<"element found at index "<<i<<endl;
                return i;
            }
        }

        cout<<"element not found"<<endl;
        return -1;
    }
    void display()
    {
        int i;
        for(i=0;i<length;i++)
        {
            cout<<A[i]<<endl;
        }
    }
};
int main()
{
    Array arr(10,6);
    arr.set_data();
    arr.display();
    arr.linear_search(90);
    return 0;
}


