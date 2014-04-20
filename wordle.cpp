#include<iostream>
#include<string>

using namespace std;

int main() {
	const unsigned N	=	40;
	string buzzword[N] 	= {
		"mechanism", 
		"reaction",
		"kinetics",
		"combustion",
		"reduction",
		"engine",
		"simulation",
		"fuel",
		"surrogate",
		"Fischer-Tropsch",
		"jet fuel",
		"computational",
		"turbulence",
		"soot",
		"fluid mechanics",
		"reduced order",
		"low temperature",
		"high temperature",
		"rate constant",
		"ignition",
		"triple flame",
		"aromatics",
		"normal alkane",
		"n-dodecane",
		"cyclic alkane",
		"methyl cyclohexane",
		"ether",
		"naphthalene",
		"toluene",
		"benzene",
		"ethyl benzene",
		"heptane",
		"styrene",
		"xylene",
		"methyl naphthalene",
		"allene",
		"Jacobian",
		"species profile",
		"flow reactor",
		"uncertainty quantification"};
	for(unsigned k=0; k<N; ++k) {
		for(unsigned j=0;j<N-k; ++j) {
			cout << buzzword[k] << " ";
		}
		cout << endl;
	}
}