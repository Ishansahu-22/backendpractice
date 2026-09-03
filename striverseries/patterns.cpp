#include<iostream>
using namespace std;

int pSONE(int j){
    for (int i = 0;  i <=j; i++){
        for(int k =0;  k <=j; k++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}

int pSEC(int j){
    for(int i =0; i<j; i++){
        for(int k = 0; k <= i; k++){
            cout<<"*";

        }
        cout<<endl;
    }
}

int pTHIR(int j){
    for(int i =1; i<=j; i++){
        for(int k = 1; k <= i; k++){
            cout<<k;

        }
        cout<<endl;
    }
}

int pFOUR(int j){
    for(int i = 1; i <= j; i++){
        for(int k = 1; k <= i; k++){
            cout<<i;

        }
        cout<<endl;
    }
}
 
int pFIVE(int j){
    for(int i = 1; i <= j; i++){
        for(int k = j; k >= i; k--){
            cout<<"*";

        }
        cout<<endl;
    }
}


int pSIX(int j){
    for(int i = j; i >= 1; i--){
        for(int k = 1; k <= i; k++){
            cout<<k;

        }
        cout<<endl;
    }
}


int pSEVEN(int j){// this was a bit difficult one
    for(int i = 0; i < j; i++){
        for(int k = j-i-1; k > 1 ;  k--){
            cout<<" ";

        }
    for(int z = 0 ; z < 2*i+1 ;z++){
        cout<<"*";
    }
        cout<<endl;
    }
}

int peight(int j){
    //reverse of seventh one
    for(int i = 0; i <=j ; i++){
        //space
        for(int k = 0; k < i ; k++){
            cout<< ' ';

        }
        //stars
        for(int l = 0; l <= 2*j - 2*i-1 ; l++){
            cout<<"*";
        }
        for(int m =0 ; m <= i ; m++){
            cout<< ' ';
        }
        cout<<endl;
    }

}


int main(){
  cout<<peight(5)<<endl;
  return 0;


}