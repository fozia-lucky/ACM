#include <bits/stdc++.h>
using namespace std;

int main(){
    int T , a , i , subarr, j;
    cin>>T;
    while(T--){
        cin>>a;
        int arr[a+2];
        for(i = 0; i < a ; i++)
            cin>>arr[i];
        for(i = 0 ; i < a ; i++){
            cout<<arr[i]<<' ';
            subarr= arr[i];
            for( j = i + 1 ; j < a ; j++){
                subarr = max(subarr,arr[j]);
                cout<<subarr<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
