/* infinite loop by using the recursion bro
 #include<iostream>
    using namespace std;
       int fn(int n){
            cout<<n;
            n++;
            fn(n);
        }
    int main(){

        int n;
            n=0;
        cout<<fn(0);

        return 0;

    }
    */

/* #include<iostream>
using namespace std;

void fn(int n,int count){
    if(n==3){
        return;
    }

    cout<<count;
    fn(n+1,count+1);
}

int main(){
    fn(0,0);
    return 0;
}
*/

/* #include<iostream>
    using namespace std;
       void fn(int i,int n){
            if(i>n){
                return ;
            }
            cout<<"jeevan"<<endl;
            fn(i+1,n);
        }

        int main(){

            fn(0,5);
            return 0;
        }
        */

/* #include<iostream>
    using namespace std;
          void fn(int i, int n){
                    if(i>n){
                        return ;
                    }
                    cout<<i<<endl;
                    fn(i+1,n);
            }
    int main(){

        fn(0,5);
        return 0;
    }
*/

/* #include<iostream>
    using namespace std;
        void fn(int i){
            if(i<1){
                return;
            }
           
            fn(i-1);
             cout<<i<<endl; ##master stoke 
        }

        int main(){
            fn(4);
            return 0;
        }
*/

/* #include<iostream>
    using namespace std;
    void fn(int i,int n){
        if(i>n){
            return;
        }
        fn(i+1,n);
        cout<<i<<endl;
    }
    int main(){
        fn(1,4);
        return 0;
    }
*/

/* #include<iostream>
    using namespace std;
       void fn(int i,int sum){
            if(i<1){
                cout<<sum;
                return ;
            }
            fn(i-1,sum+i);

        }

        int main(){

            fn(4,0);
                return 0;
        }    */

/*
#include<iostream>
    using namespace std;
            int fn(int n){
                if(n==0){
                    return 0;
                }
                return n+fn(n-1);
            }

int main(){
    cout<<fn(4);
    return 0;
}
*/
/* #include<iostream>
    using namespace std;
        int fn(int n){
            if(n==0){
                return 1;
            }
            return n*fn(n-1);
        }
int main(){
    cout<<fn(4);
    return 0;
}*/

