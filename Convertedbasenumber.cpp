#include<iostream>
using namespace std;
int main(void)
{
    const char basedigit[16]={'o','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int convertednumber[64];
    long int numberToconvert;
    int nextdigit,base,index=0;
    cout<<"Number to be converted?"<<endl;
    cin>>numberToconvert;
    cout<< " Base ??"<<endl;
    cin>>base;
   do 
   {
    convertednumber[index]=numberToconvert % base;
   ++index;
   numberToconvert= numberToconvert/base;

   } 
while (numberToconvert !=0);
    cout<<"Converted number = " ;
    for (--index ;index>=0;--index){
        nextdigit=convertednumber[index];
        cout<<basedigit[nextdigit];

    }
    cout<<endl;
return 0;}
