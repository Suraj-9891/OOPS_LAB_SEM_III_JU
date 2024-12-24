#include<iostream>
using namespace std;
class Cal{
    public:
    int sum(int x, int y, int z=0, int w=0){
        return (x+y+z+w);
    }
    
};
int main(){
    Cal st;
    cout<<"The sum of x+y = ";
    cout<<st.sum(10,15)<<endl;
    cout<<"The sum of x+y+z = ";
    cout<<st.sum(10,15,25)<<endl;
    cout<<"The sum of x+y+z+w = ";
    cout<<st.sum(10,15,25,30)<<endl;
}