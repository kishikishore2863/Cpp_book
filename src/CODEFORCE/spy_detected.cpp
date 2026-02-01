//
// Created by Kishi Kishore N on 01/02/26.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        int a_len;
        cin>>a_len;
        int arr[a_len];
        for (int j=0; j<sizeof(arr)/sizeof(int); j++) {
            int temp;
            cin>>temp;
            arr[j] = temp;
        }
        int first=0;
        int second =1;
        // int third =0;
        for (int k=2; k<sizeof(arr); k++) {
            if ( (arr[first]!=arr[second]) && (arr[first]!=arr[k])) {
                cout<<first+1<<endl;
                break;
            }
            if ((arr[second]!=arr[first]) && (arr[second]!=arr[k])){
                cout<<second+1<<endl;
                break;
            }
            if ((arr[k]!=arr[first]) && (arr[k]!=arr[second])){
                cout<<k+1<<endl;
                break;
            }
            first++;
            second++;

        }


    }
    return 0;
}