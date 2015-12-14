//
//  Lab VII Part III
//
//  Created by Edgar Esparza on 6/29/15.
//

#include <iostream>
#include<cmath>
using namespace std;

int sum (int, int);
int sum (int, int, int);
int sum (int, int, int, int);
int sum (int, int, int, int, int);

int main() {
   int a = 1;
   int b = 2;
   int c = 3;
   int d = 4;
   int e = 5;
   
    cout<<sum(a, b);
    cout<<sum(a, b, c);
    cout<<sum(a, b, c, d);
    cout<<sum(a, b, c, d, e);
    
    return 0;
}

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
   
    return a+b+c;
}

int sum(int a, int b, int c, int d){

    return a+b+c+d;
}

int sum(int a, int b, int c, int d, int e){

    return a+b+c+d+e;
}