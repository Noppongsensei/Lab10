#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	string textline;
	int i=0;
	cout<<"-------------------- BOOM ---------------------\n";
	while(i<9){
	getline(source,textline);
	cout<<textline<<"\n";
	i++;
	}	
	cout<<"-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}