//
// Created by Kishi Kishore N on 02/02/26.
//
#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int j=0;j<n; j++) {
        int seat;
        cin>>seat;
        int left=0;
        int right=0;
        int flag =0;
        for (int i=1; i<=seat; i++) {
            int c;
            cin>>c;
            if (i==1) {
                right =c;
                left = c;
            }
            if (i>1) {
                if ( (c==right+1 || c==left-1) && (c<=seat)) {
                    if (c==right+1) {
                        right++;
                    }else {
                        left--;
                    }
                }else {
                    flag =1;
                    break;
                }
            }
        }
        flag==1?cout<<"NO"<<endl:cout<<"Yes"<<endl;
    }

}