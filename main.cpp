#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//moj prva funkcija 
void stampa(){
	cout<<"Ja volim programiranje"<<endl;
}
//funkcija koja racuna f(x)=2x+3
int funkcija(int x){
	int y;
	y=2*x+3;
	return y;
}

int rekfakt(int n){
	if(n!=0)
	return n*rekfakt(n-1);
	else
	return 1;
}
int main(int argc, char** argv) {
	
	
	stampa();
	
	int x;
	cout<<"Unesi vrednost promenljive x:";
	cin>>x;
	cout<<"Vrednost funkcije je:"<<funkcija(x)<<endl;
	
	int n,a;
	cout<<"Unesi broj za koji zelis da izracunas faktorijel:";
	cin>>n;
	cout<<"Faktorijel je:";
	 cout<<rekfakt(n);
	return 0;
}


