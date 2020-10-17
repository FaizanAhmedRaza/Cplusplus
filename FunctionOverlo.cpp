// Function Overloading

#include <iostream>
using namespace std;

int add(float a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

//Calculate volume of cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

//Calculate volume of cube
int volume(int a){
    return (a*a*a);
}

//Calculate volume of Rectangular box
double volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6);  
    cout<<"\nhe sum of  3,7 and 6 is "<<add(3,7,6);
    cout<<"\nThe volume of cylinder is "<<volume(3, 10);
    cout<<"\nThe volume of cube is "<<volume(3);
    cout<<"\nThe volume of Rectangular Box is "<<volume(3,4,7)<<endl;
    return 0;
}
