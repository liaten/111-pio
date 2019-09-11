#include <iostream>
using namespace std;
float a;
bool ex;
//функция ввода переменной с проверкой
float enter(float x){
	ex=true;
	while(ex){
		cin>>x;
		if (x>0){
			ex=false;
		}
		else{
			cout<<"Wrong number or not a number.\nEnter numbers only greater than zero: ";
			x=0;
      		cin.clear();                //сбрасываем коматозное состояние cin
    		fflush(stdin);              //очищаем поток ввода
		}
	}
	return x;
}
//основная функция
int main(){
	cout<<"Enter distance between houses, m: ";
	a =  enter(a);
	cout<<a;

  system("pause");
  return 0;
}
