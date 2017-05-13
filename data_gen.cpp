#include <bits/stdc++.h>
using namespace std;

int main() {
	// Random training sets for XOR -- two inputs and one output
	srand(time(NULL));
	cout << "topology: 2 4 1" << endl;
	for(int i = 2000; i >= 0; --i) {
		int n1 = (int)(rand()%10);
		int n2 = (int)(rand()%10);
		long long t = n1 ^ n2; 
		cout << "in: " << n1 << ".0 " << n2 << ".0 " << endl;
		cout << "out: " << t << ".0" << endl; 
	}

}
