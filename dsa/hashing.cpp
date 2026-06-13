* #include<iostream>
    using namespace std ;
        int main(){

            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

                int hash[13]={0};
                for(int i=0;i<n;i++){
                    hash[arr[i]]++;
                }

                    int q;
                    cin>>q;

                    for(int i=0;i<q;i++){
                        int number;
                        cin>>number;
                    cout<<hash[number]<<endl;
                    }

                    return 0;

        }
*/

/* #include<iostream>
using namespace std;

int main() {

    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    int hash[26] = {0};

    // Pre-compute frequencies
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    for(int i = 0; i < q; i++) {
        char c;
        cout << "Enter a character: ";
        cin >> c;

        cout << "Frequency of " << c
             << " = " << hash[c - 'a'] << endl;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main() {

    string s;
    cout << "Enter a uppercase string: ";
    cin >> s;

    int hash[26] = {0};

    // Pre-compute frequencies
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'A']++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    for(int i = 0; i < q; i++) {
        char c;
        cout << "Enter a character: ";
        cin >> c;

        cout << "Frequency of " << c
             << " = " << hash[c - 'A'] << endl;
    }

    return 0;
}*/
/*
#include<iostream>
    using namespace std;
        int main()
    {
        string s;
        cout<<"Enter the string"<<endl;
        cin>>s;

        int hash[256]={0};

        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }

        int q;
        cout<<"Enter the quires"<<endl;
        cin>>q;

        for(int i=0;i<q;i++){
            char c;
            cout<<"Enter the number"<<endl;
            cin>>c;

            cout<<"Frequency"<<hash[c]<<endl;
          
        }
        return 0;
    }
    */
    
/* #include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}*/


