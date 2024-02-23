#include <string>
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(a, low, high);

        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}

int main(){
    int n;
    cout<<"Nhập số lượng phần tử: "; cin>>n;
    int a[n];
    cout<<"Nhập phần tử: "<<endl;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    quickSort(a, 0, n-1);
    cout<<"Hàm sau khi sắp xếp: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

