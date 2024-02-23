#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

const int Maxn = 1e7 + 5;
int n, m, a[Maxn], b[Maxn], cnt;

void findEqual(int n, int m, int a[], int b[]){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i] == b[j]){
                a[i+1] = a[i];
                b[j+1] = b[j];
                cnt++;
            }
        }
    }
}

int main(){
    cout<<"Nhập số lượng phần tử trong mảng 1: ";
    cin>>n;
    cout<<"Nhập phần tử mảng 1: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Nhập số lượng phần tử trong mảng 2: ";
    cin>>m;
    cout<<"Nhập phần tử mảng 2: ";
    for(int i=1; i<=m; i++){
        cin>>b[i];
    }

    findEqual(n, m, a, b);
    cout<<"Mảng 1: ";
    for(int i=1; i<=(n-cnt); i++){
        cout<<a[i]<<" ";
    }
}

#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

void deleteDuplicates(int a[], int n, int b[], int m) {
    vector<int> vec1(a, a + n);
    vector<int> vec2(b, b + m);

    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    sort(vec1.begin(), vec1.end());

    auto it = unique(vec1.begin(), vec1.end());
    vec1.erase(it, vec1.end());

    cout << "Arrays after deleting duplicates: ";
    for (const auto& element : vec1) {
        cout << element << " ";
    }
}

int main() {
    cout<<"Nhập số lượng phần tử trong mảng 1: ";
    cin>>n;
    cout<<"Nhập phần tử mảng 1: ";
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    cout<<"Nhập số lượng phần tử trong mảng 2: ";
    cin>>m;
    cout<<"Nhập phần tử mảng 2: ";
    for(int i=1; i<=m; i++){
        cin>>b[i];
    }

    deleteDuplicates(a, n, b, m);

    return 0;
}