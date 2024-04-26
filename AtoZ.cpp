#include<iostream>
using namespace std;
int main(){
 
 int i,j,s=1;
 for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){ 
        if(i==1||i==3||j==1||j==5)   //A
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){                
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(j==1||j<=4&&(i==1||i==3||i==5)||j==5&&(i==2||i==4))   //B
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(j==1||i==1||i==5)     //C
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==1||i==5||j==2||j==5)    //D
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==1||i==3||j==1||i==5)    //E
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
    if(i==1||i==3||j==1)    //F
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
     if(i==1||j==1||j==3&&i>=3||j==5&&i>=3||i==5&&j==2||i==3&&j==4)   //G
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
  if(i==3||j==1||j==5)      //H  
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }
   cout<<"\n";
 for(i=1;i<=5;i++){
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1||j==3||i==5)   //I
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
   if(i==1||j==1&&i>=3||j==3||i==5&&j==2)   //J
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(j==1||i==3&&j==2||j==3&&(i==2||i==4)||j==4&&(i==1||i==5))   //K
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==5||j==1)   //L
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
   if(j==1||j==5||i==2&&(j==2||j==4)||i==3&&j==3)   //M
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(j==1||i==2&&j==2||j==3&&i==3||j==4&&i==4||j==5)   //N
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1||i==5||j==1||j==5)   //O
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==1||i==3||j==1||j==5&&i==2)   //P
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }
 cout<<"\n";
 for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(i==1&&j<=4||i==4&&j<=4||j==1&&i<=4||j==4&&i<=4||i==3&&j==3||i==5&&j==5)   //Q
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1||i==3||j==1||j==5&&i==5||j==4&&i==4||i==2&&j==5) //R   
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1||i==3||j==1&&i==2||i==5||i==4&&j==5)   //S
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==1||j==3)   //T
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
     if(i==5||j==1||j==5)  //U 
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
      if(i==2&&(j==1||j==5)||i==3&&(j==2||j==4)||i==4&&j==3||i==1&&(j==1||j==5)) //V   
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
     if(j==1||j==5||i==4&&(j==2||j==4)||i==3&&j==3)  //W 
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1&&(j==1||j==5)||i==5&&(j==1||j==5)||i==2&&(j==2||j==4)
          ||i==4&&(j==2||j==4)||i==3&&j==3)   //X
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }
  cout<<"\n";
 for(i=1;i<=5;i++){
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
        if(i==1&&(j==1||j==5)||i==2&&(j==2||j==4)||j==3&&i>=3)  //Y 
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    for(j=s;j<=3;j++){
        cout<<" ";
    }
    for(j=1;j<=5;j++){
       if(i==1||i==5||i==2&&j==4||i==3&&j==3||i==4&&j==2)  //Z 
        {           
        cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
 }

}