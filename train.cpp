using namespace std;
#include <iostream>
#include <string>
struct ck {
	string name;
	int id;
	string str;
	string end;
	int cost;
};
int chaxun (string a,string b,string c[11],int e[10]) {
	int a3,a4,a31,a32,min1;
	for (int i=0;i<10;i++) {
		if (a==c[i]) a3=i;
		if (b==c[i]) a4=i;
	}
	min1=e[a3];
	for (int i=a3;i<=a4;i++) {
		if (e[i]<=min1) min1=e[i]; 
	}
	return min1;
}
int main (void) {
	int k,a5,a6,cost1=0;
	ck q[1000];
	string cz[11]={"A1","A2","A3","A4","A5","A6","A7","A8","A9","A10"};
	int d[9]={20,30,40,10,50,30,20,40,30};
	int zw[10]={10,10,10,10,10,10,10,10,10,10};
	string a1,a2;
	int l=0;
	while (cin>>a1>>a2){
    k=chaxun (a1,a2,cz,zw);
    cout<<k;
    int idnum;
    string x1;
    if (k>0) {
	cin>>x1>>idnum;
    for (int i=0;i<10;i++) {
    	if (a1==cz[i]) a5=i;
		if (a2==cz[i]) a6=i;
	}
	for (int i=a5;i<=a6;i++) {
		zw[i]=zw[i]-1;
		cost1=cost1+d[i];
	}
	q[l].cost=cost1;
	q[l].str=a1;
	q[l].end=a2;
	q[l].id=idnum;
	q[l].name=x1;
	l++; }
}
}
