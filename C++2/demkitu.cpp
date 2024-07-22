/*#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

    long long a;

}
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int demkytu=0;
int demtu=1;
cout << "Ban nhap mot cau gom cac chu thuong: " << endl;
char ch='a';
while(ch!='\r')
{
ch=getch();
if(ch==' ')
demtu++;
else
demkytu++;
}
cout << "\n So tu trong cau la = " << demtu << endl;
cout << "\nSo ky tu trong cau la = " << demkytu-1 << endl;
return 0;
}
