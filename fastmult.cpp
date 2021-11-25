/***
 *	Notes:
 *	This implementation uses karatsuba's method for multiplication of sizes under 15000 
 *	digits. For digits whose sizes are larger, the Schonhage-Strassen algorithm is used
 *	instead. This algorithm uses NTT's (number theoretic FFT) to efficiently 
 *	compute convolutions reducing the time complexity to Theta(nlog(n)log(log(n)))
 ***/

#include <iostream>
#include <string>

string ntt_mult();

string k_sub(string &a, string &b);
string k_mult(string &a, string &b);
string k_add(string &a, string &b);

string n_mult(string &a, string &b);


int main(int argc, char **argv){
	

	return 0;
}
