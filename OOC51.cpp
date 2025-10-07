//Function Overloading
    //Area
// #include<iostream>
// using namespace std;
// int area(int r){
//     return 2*r*r;
// }
// int area(int l,int w){
//     return l*w;
// }
// float area(float h,float b){
//     return 1/2*h*b;
// }
// int main(){
// cout<<"Area of circle: "<<area(3)<<endl;
// cout<<"Area of ractangle: "<<area(3,2)<<endl;
// cout<<"Area of triangle: "<<area(2,3)<<endl;
// return 0;
// }


// addition
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
float add(float a,float b ){
    return a+b;
}
int main(){
cout<<"sum of integers: "<<add(3.6,0)<<endl;
cout<<"sum of integers: "<<add(3,2,3)<<endl;
cout<<"sum of float: "<<add(2,8.9)<<endl;
return 0;
}