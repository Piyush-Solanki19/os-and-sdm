#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. ";
    cin>>n;
   int row,col,space;
//    for(row=1;row<=9;row++)
//    {
//     for(col=1;col<=9;col++)
//     {  
//          if(row==5||col==1||col==9||row==2 && (col==2||col==8)||
//             row==3 && (col==2||col==3||col==7||col==8)||row==4 && (col==2||col==8||col==3||col==4||col==6||col==7)
//            ||row==7 && (col==2||col==3||col==7||col==8)||row==6 && (col==2||col==8||col==3||col==4||col==6||col==7)
//             ||row==8 && (col==2||col==8))
//          {
//            cout<<"*";
//          }
//          else{
//             cout<<" ";
//          }
//     }
//     cout<<endl;
//    }

    for(row=1;row<=n;row++){
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    space=2*n-2*row;
    for(col=1;col<=space;col++)
    {
        cout<<" ";
    }
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    
    for(row=n;row>=1;row--){
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    space=2*n-2*row;
    for(col=1;col<=space;col++)
    {
        cout<<" ";
    }
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    
    return 0;
}