#include <iostream>

using namespace std;

int main(){
	
	int b;
	
	cout<<"viberite, o chem hotite uznat"<<endl<<"10) tipi dannix"<<endl<<"11) vetvlenie"<<endl<<"12) biblioteki"<<endl;
	
	cin>>b;
	
	if (b==10){
		
		int b;
		
		cout<<"viberite, o kakom tipe dannix nado yznat"<<endl<<"1) int"<<endl<<"2)double"<<endl<<"3) float"<<endl<<"4) bool"<<endl;
		
		cin>>b;
		}
		
		if (b==1){
			
			int b;
			
			cout<<"int"<<endl<<"<1) tip kotori pozvolaet xranit celie chisla"<<endl;
			
			cin>>b;
		 }
			if (b==2){
				
				int b;
				
				cout<<"double"<<endl<<"2) tip dannix dla xranenia chisel c 'plavayhei tochkoi' dvoinoi tochnosti, obecpechivaet bolchy tochnost pri raschetax i ispolzovanii decatichnix drobei"<<endl;
				
				cin>>b;
			}
			if (b==3){
				
				int b;
				
				cout<<"float"<<endl<<"3) tip dannix dla xranenia chisel c 'plavayhei tochkoi', to ect desitichnix chisel"<<endl;
				
				cin>>b;
			}
		if (b==4){
			
			int b;
			
			cout<<"bool"<<endl<<"4)logicheski tip dannix, kotori xranit znacheni byleva tipa";
			
			cin>>b;
		}
		
		if (b==11){
			
			int b; 
			
			cout<<"vibirite, o chem hotite uznat"<<endl<<"1) operatori"<<endl<<"2)cikli"<<endl;
			
			cin>>b;
			}
			
			if (b==1){
				
				int b;
				
			cout<<"o chem nado yznat"<<endl<<"1) if"<<endl<<"2)switch"<<endl;
			
			cin>>b;
			}
		if (b==1){
		
		int b;
		
		cout<<"if"<<endl<<"1) snachala pishem 'if' (yslovie), potom operator_1; posle 'else' operator_2";
		
		cin>>b;
		}
		
		if (b==2){
			
			int b;
			
			cout<<"switch"<<endl<<"2) nychen dla vibora vetvlenia coda v zavisimosti ot znachenia peremennoi"<<endl;
			
			cin>>b;
		}
		if(b==21){
			
			int b;
			
			cout<<"viberite chto nado yznat"<<endl<<"1) for"<<endl<<"2) while"<<endl;
			
			cin>>b;
		}
		
		if(b==1){
			
			int b;
			
			cout<<"for"<<endl<<"1) nyzhen kogda izvestno, skolko raz nado bipolnit cikl"<<endl;
			
			cin>>b;
		}
		
		if(b==2){
			
			int b;
			
			cout<<"while"<<endl<<"2) vipolnaetsa, poka yslovie istinno (toect ravno 'true')"<<endl;
			
			cin>>b;
		}
		
		if(b==12){
			
			int b;
			
			cout<<"viberite chto nado yznat"<<endl<<"1) Zbar"<<endl<<"2)Matplot++"<<endl<<"3)SFML"<<endl;
			
			cin>>b;
		}
		
		if(b==1){
			
			int b;
			
			cout<<"Zbar"<<endl<<"1)nychna dla raspoznovania chtrixcodov"<<endl;
			
			cin>>b;
		}
		
		if(b==2){
			
			int b;
			
			cout<<"Matplot++"<<endl<<"2)biblioteca grafici na osnove 'gnuplot' dla vizualizacii dannix"<<endl;
			
			cin>>b;
		}
	
	if(b==3){
		
		int b;
		
		cout<<"SFML"<<endl<<"3)dla razrabotki igr i myltemidiinix prilochenii, iz pati modylei"<<endl;
		
		cin>>b;
	}
	
	if(b==8){
		
		int b;
		
		cout<<"itog"<<endl<<"8)-spacibo za vnimanie"<<endl;
		
		cin>>b;
	}
	
	return 0;
}