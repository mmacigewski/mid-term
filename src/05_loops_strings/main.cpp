//Write include statements
#include "transcribe_dna_to_rna.h"
#include <iostream>
//Write using statements
using std::cout;
/*
No loop.
Use the string "GATGGAACTTGACTACGTAAATT" call the transcribe_dna_into_rna function and display the result
*/
int main() 
{
	std::string dna = "GATGGAACTTGACTACGTAAATT";
	cout << "DNA strand: " << dna;
	cout << "\nRNA strand: " << transcribe_dna_into_rna(dna);
	return 0;
}