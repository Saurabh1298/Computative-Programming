#include<iostream>
using namespace std;

int main(){
unsigned int a, b,mc,cl;
while(cin >> a>> b){
    unsigned int i  ,j;
    i= a<=b ?a:b;
    j= a<=b ? b:a;
    cl=0;
   mc=0;
   for(int k=i;k<=j;k++){
       cl=0;
       int k2=k;
       while(k2 !=1){
           if(k2%2==1){
               k2= 3*k2 +1 ;
               cl++; //To add last count of 1 in every series.
           }
           else{
               k2 /=2;
               cl++;
           }
       }
       cl++;
        if(cl>mc)
       mc=cl;
    }
    cout << a <<" " << b << " " << mc;
    }
       return 0;
}
