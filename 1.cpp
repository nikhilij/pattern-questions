#include<iostream>
using namespace std;

// create start pattern have n number of rows and columns
void starPattern(){
    int n;
    cout<<"Enter how many rows do you want : "<<endl;
    cin>>n;
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void trianglestarPattern(){
    int n;
    cout<<"Enter how many rows do you want : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void trianglestarPattern2(){
    int n;
    cout<<"Enter how many rows do you want :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void trianglestarPattern3() {
    int n;
    cout << "Enter how many rows do you want : ";
    cin >> n;
    for (int a = 0; a < n; a++) {
        // Print leading spaces
        for (int i = n - a; i > 1; i--) {
            cout << "  ";
        }

        // Print stars with spaces
        for (int j = 1; j <= 2 * a + 1; j++) {
            cout << "* ";
        }

        cout << "\n";
    }
}

void triangularstarPattern4(){
    // without spaces b/w stars
    int n;
    cout<<"Enter how many rows do you want : ";
    cin>>n;
    cout<<"\n";

    for(int a=0;a<n;a++){
        for(int i=n-a;i>1;i--)
        {
            cout<<" "; 
        }
        for(int j=1;j<=2*a+1;j++){
            cout<<"*";
        }
        for(int k=n-a;k>1;k--){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void trianlestarPattern5(){
        // without spaces b/w stars
    int n;
    cout<<"Enter how many rows do you want : ";
    cin>>n;
    cout<<"\n";

    for(int a=n;a>=0;a--){
        for(int i=n-a;i>=1;i--)
        {
            cout<<" "; 
        }
        for(int j=2*a+1;j>=1;j--){
            cout<<"*";
        }
        for(int k=n-a;k>=1;k--){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void starPattern2(){
    int n;
    cout<<"Enter how many rows do you want : ";
    cin>>n;
    cout<<"\n";

    for(int a=0;a<=n;a++){
        for(int i=n-a;i>=1;i--)
        {
            cout<<" "; 
        }
        for(int j=1;j<=2*a+1;j++){
            cout<<"*";
        }
        for(int k=n-a;k>=1;k--){
            cout<<" ";
        }
        cout<<"\n";
    }
    for(int a=n;a>=0;a--){
        for(int i=n-a;i>=1;i--)
        {
            cout<<" "; 
        }
        for(int j=2*a+1;j>=1;j--){
            cout<<"*";
        }
        for(int k=n-a;k>=1;k--){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void triangularnumPattern(){
    int n;
    cout<<"Enter how many rows do you want : "<<endl;
    cin>>n;
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }
}

void triangularnumPattern2()
{
    int n;
    cout<<"Enter how many rows do you want : ";
    cin>>n;
    cout<<"\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}


int main(){

    // starPattern();
    // cout<<"\n";
    // trianglestarPattern();
    // cout<<"\n";
    // triangularnumPattern();
    // cout<<"\n";
    // triangularnumPattern2();
    // cout<<"\n";
    // trianglestarPattern2();
    // cout<<"\n";
    // trianglestarPattern3();
    // cout<<"\n";
    // triangularstarPattern4();
    // cout<<"\n";
    // trianlestarPattern5();
    // cout<<"\n";
    starPattern2();
    cout<<"\n";
}