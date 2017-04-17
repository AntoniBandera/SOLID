#include<iostream>

using namespace std;
main() {	
   union abc {
		static int x = 9;
		char ch;
	} var;
	
   var.ch = 'A';
   cout<<var.x;
}
