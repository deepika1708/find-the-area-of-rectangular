#include<iostream.h>
#include<conio.h>
int main()
{int n;
int& rn=n;
cout<<"enter the value of "<<endl;
cin>>n;
cout<<"n  ="<<n<<"  rn="<<rn<<endl;
cout<<"&n  ="<<&n<<";  &rn  ="<<&rn<<endl;
++n;
cout<<"n  ="<<n<<"  rn="<<rn<<endl;
cout<<"&n  ="<<&n<<";  &rn  ="<<&rn<<endl;
rn*=n;
cout<<"n  ="<<n<<" rn="<<rn<<endl;
cout<<"&n  ="<<&n<<";  &rn  ="<<&rn<<endl;
rn/=2;
cout<<"n  ="<<n<<" rn="<<rn<<endl;
cout<<"&n  ="<<&n<<";  &rn  ="<<&rn<<endl;
getch();
return 0;
}