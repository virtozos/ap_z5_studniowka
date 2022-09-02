#include <iostream>
#include <cmath>

using namespace std;

void setArray(long long int* arr, long long int ile){
    for(int i=0; i<ile; i++)
        cin>>arr[i];
}

int main()
{
    int t;
    cin>>t;

    while(t){

        long long int n,m,k;
        cin>>n>>m>>k;

        long long int* arrN = new long long int[n];
        long long int* arrM = new long long int[m];

        setArray(arrN,n);
        setArray(arrM,m);

        long long int quantity=0;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                if(abs(arrN[i]-arrM[j])<=k)
                    quantity++;
            }
        }

        cout<<quantity;

        t--;
        if(t)
            cout<<"\n";

        delete[] arrN;
        delete[] arrM;

    }
    return 0;
}
