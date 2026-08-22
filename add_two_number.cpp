#include <iostream>
using namespace std;
int add( int x, int y ){
    return x + y;
}
int main(){
    int x ,y;
    int result = add(x,y);
    cout << "Enter the two number  so you did added ";
    cin >> x >> y;
    cout << " Sum " << result ;
    return 0 ;

}