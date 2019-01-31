#include <iostream>

using namespace std;

int main (){
	///Fibonacci number
	///According to https://en.wikipedia.org/wiki/Fibonacci_number
	
	///do-while implementation	
	char isRepeat = 'n';
	do {
		
		/// for-loop implementation example
		int n;
		cout<<"enter n :";
		cin>>n;
		int buffer;
		int f0 = 0, f1 = 1;
	
		for(int i=0;i<n;i++){
			buffer = f1;
			f1=f1+f0;
			f0=buffer;
		}
		cout<<"f("<<n<<")="<<f0<<endl;
	
		///while-loop implementation example
	
		f0 = 0;
		f1 = 1;
		int i = n;
		while(i--){
			buffer = f1;
			f1=f1+f0;
			f0=buffer;
		}
	
		cout<<"f("<<n<<")="<<f0<<endl;
		
		cout<<"repeat one more time? y/n :";
		cin>>isRepeat;
	}
	while(isRepeat=='y');
	
	system("PAUSE");
	return 0;
}
