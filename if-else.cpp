#include <iostream>

using namespace std;

int main (){
	
	///example with if-else
	///Life-sycle category detect
	///according to https://www.statcan.gc.ca/eng/concepts/definitions/age2
	
	int age;
	int children_age = 14;
	string category;
	cout<<"- How old are you? \n- I'm ";
	cin>>age;
	
	///simple
	if(age<=children_age){
		category = "children";
	}
	else{
		category = "not children";
	}
	cout<<"- You are "<<category<<endl;
	
	///simpler way
	
	cout<<"- You are "<<((age>14)?"not ":"")<<"children"<<endl;
	
	///advanced
	children_age = 14;
	int youth_age = 24;
	int adults_age = 64;
	
	if(age>adults_age){
		category = "senior";
	}
	else if(age>youth_age){
		category = "adults";
	}
	else if(age>children_age){
		category = "youth";
	}
	else {
		category = "children";
	}
	
	cout<< "- You belong to the category "<<category<<endl;
	 
	
	///example with switch-case
	double number1=0, number2=0, result=0;
	char operator_;
	cout<<"You have equation of type : a _ b = c"<<endl;
	cout<<"enter the value instead of 'a': ";
	cin>>number1;
	cout<<"enter the operator instead of '_' ('+','-','*','/'): ";
	cin>>operator_;
	cout<<"enter the value instead of 'b':";
	cin>>number2;
	
	switch(operator_){
		case '+':{
			result = number1+number2;
			break;
		}
		case '-':{
			result = number1-number2;
			break;
		}
		case '*':{
			result = number1*number2;
			break;
		}
		case '/':{
			result = number1/number2;
			break;
		}
		default:{
			cout<<"Enter correct operrator";
			break;
		}
	}
	cout<<number1<<operator_<<number2<<"="<<result<<endl;
	
	
	system("PAUSE");
	return 0;
}
