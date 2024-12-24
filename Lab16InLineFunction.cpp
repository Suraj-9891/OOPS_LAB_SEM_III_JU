#include<iostream>
using namespace std;
inline int area(float length, float breath){
    return length*breath;
}
int main(){
    float length, breath, Area;
    cout<<"Enter the Length of reactangle : ";
    cin>>length;
    cout<<"Enter the breath of reactangle : ";
    cin>>breath;
    Area = area(length, breath);
    cout<<"The Area of Reactangle is : "<<Area<<endl;
    
}