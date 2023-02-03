#include<bits/stdc++.h>
using namespace std;
class minheap
{
    int *arr;
    int size,cap;

    public:
    minheap(int c)
    {
        arr=new int[c];
        cap=c;
        size=0;
    }

    int left(int i)
    { 
        return (2*i + 1); 
    } 
    int right(int i) 
    { 
        return (2*i + 2); 
    } 
    int parent(int i) 
    { 
        return (i-1)/2; 
    } 
    
    void insert(int x)
    {
        if(size==cap)
            return ;
        size++;
        arr[size-1]=x;

        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void minheapify(int i)
    {
        int smallest;
        int lfch=left(i),rtch=right(i);
        if(lfch<size && arr[lfch]<arr[i])
            smallest=lfch;
        if(rtch<size && arr[rtch]<arr[smallest])
            smallest=rtch;
        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            minheapify(smallest);
        }
    }

    void buildheap()
    {
        for(int i=(size-2)/2;i>=0;i--)
            minheapify(i);
    }
};
int main()
{
    minheap h(10);
    return 0;
}