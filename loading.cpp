#include <iostream>
#include<stdlib.h>
#include <unistd.h>
using namespace std;

int main(){
	system("cls");
	int i;
	cout<<"Loading : ";
	cout << '-' << std::flush;
    for (i=1;i<=2;i++) {
        sleep(1);
        std::cout << "\b\\" << std::flush;
        sleep(1);
        std::cout << "\b|" << std::flush;
        sleep(1);
        std::cout << "\b/" << std::flush;
        sleep(1);
        std::cout << "\b-" << std::flush;
    }
	//cout<<"\b\b\b\b\b\b\b\b\b\b\b";
	system("cls");
	cout<<"Loaded"<<endl;
}