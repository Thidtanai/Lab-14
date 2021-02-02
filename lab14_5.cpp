#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
  int generate;
  int money[] = {50,100,500,1000};
  int newvalue[4] ={0,0,0,0};
  for(int i=0;i<4;i++){
    while(newvalue[i] == 0){
      generate = rand()%4;
      newvalue[i] = money[generate];
    }
    money[generate] = 0;
  }
  *a = newvalue[0];
  *b = newvalue[1];
  *c = newvalue[2];
  *d = newvalue[3];
  return;
}