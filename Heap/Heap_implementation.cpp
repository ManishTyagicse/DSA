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

    int extractmin()
    {
        if(size==0)
            return INT_MAX;
        if(size==1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minheapify(0);

        return arr[size];
    }

    void replacekey(int i,int x)
    {
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void deletekey(int i) 
    { 
        replacekey(i, INT_MIN); 
        extractmin(); 
    }

};
int main()
{
    minheap h(11);
    h.insert(34); 
    h.insert(28);
    h.insert(15);
    h.insert(20);
    h.insert(13); 
    h.insert(29);
    h.insert(115);
    h.insert(290);

    cout<<"\nThe minimum of the heap is: "<<h.extractmin() << " ";

    h.replacekey(4,10);

    cout<<"\nThe minimum of the heap is: "<<h.extractmin() << " ";

    return 0;
}