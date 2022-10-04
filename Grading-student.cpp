#include<iostream>
using namespace std;
void roundedgrade() {
int n, g; //n for number of student and g for grade af student
cin>>n;// enter the number of student
for (int i=0; i<n; i++){
cin>>g;// enter grade of the student
    if(g>=38 && g%5>=3)  {
    while(g%5!=0){ // to round to the next grade which is multiple of 5
        g++;
    }

 }
 cout<<g<<endl;
}
}
int main (){
    roundedgrade( );
    return 0;
}
