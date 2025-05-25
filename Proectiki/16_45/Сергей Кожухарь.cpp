#include <iostream>
#include <cmath>
using namespace std;
int main(){
	char a;
	double x,y,n,sig;
	int res=1,ress=1,i,j;
	cout<<"Vvedite peremenuy x"<<endl;
	cin>>x;
	cout<<"Vvedite peremnuy y"<<endl;
	cin>>y;
	cout<<"Vvedite matematicehskoe deystvie:"<<endl<<"+, Summa"<<endl<<"-, Raznost"<<endl<<"*, Proizvedenie"<<endl<<"^, Vozvedenie v stepen"<<endl<<"k, Koren"<<endl<<"!, Factorial"<<endl<<"%, Procent ot chisla"<<endl<<"l, Logariphm po osnovaniy 10"<<endl;
	cin>>a;
	switch(a){
		case '+':
			cout<<x+y<<" x+y"<<endl;
			break;
		case '-':
			cout<<x-y<<" x-y"<<endl;
			cout<<y-x<<" y-x"<<endl;
			break;
		case '*':
			cout<<x*y<<" x*y"<<endl;
			break;
		case '^':
			cout<<"Vvedite stepen n"<<endl;
			cin>>n;
			cout<<pow(x,n)<<" x v stepeni n"<<endl;
			cout<<pow(y,n)<<" y v stepeni n"<<endl;
			break;
		case '!':
			for (i=1; i<=x; i++){
				res=res*i;
			}
			cout<<res<<" x!"<<endl;
			for (j=1; j<=y; j++){
				ress=ress*j;
			}
			cout<<ress<<" y!"<<endl;
			break;
		case '%':
			cout<<"Vvedite procent kotoriy vi xotite uznat"<<endl;
			cin>>n;
			double t,z;
			t=x*n/100;
			z=y*n/100;
			cout<<t<<" n ot x"<<endl;
			cout<<z<<" n ot y"<<endl;
			break;
		case 'k':
			cout<<"Vvedite stepen kornya"<<endl;
			cin>>n;
			cout<<pow(x,1/n)<<" Koren n iz x"<<endl;
			cout<<pow(y,1/n)<<" Koren n iz y"<<endl;
			break;
		case 'l':
			cout<<log10(x)<<" Logariphm x po osnovaniy 10"<<endl;
			cout<<log10(y)<<" Logariphm y po osnovaniy 10"<<endl;
			break;
	}
	return 0;
}