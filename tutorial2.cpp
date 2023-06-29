// Program 1 Function Overloading

#include<bits/stdc++.h>
using namespace std;
int maxi(int n1,int n2){
    if(n1>n2)return n1;
    return n2;
}
int maxi(int n1,int n2,int n3){
if(n1>n2){
    if(n1 > n3)return n1;
    return n3;
    }else{
        if(n2>n3)return n2;
        return n3;
        
    }
    
}

int maxi (int n1,int n2,int n3, int n4){
// int a = maxi(n1, n2);
// int b = maxi(n3, nd);
// return maxi (a, b);
int a = maxi(n1,n2,n3);
return maxi(a,n4);
}

int main(){
// max()
cout<<maxi(2,5);
cout<<maxi(2,5,3);
cout<<maxi(2,5,3,5);

return 0;
}

// Program 2 Increament

#include<bits/stdc++.h>
using namespace std;
void increment (int a){
    a++;
    return ;
}


int main(){
int i = 11;
increment (i);
cout<<i<<endl;
return 0;
}
