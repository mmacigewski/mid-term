//Write include statements

/*
An RNA string is a string formed from the alphabet containing 'A', 'C', 'G', and 'U'.

Given a DNA string t corresponding to a coding strand, its transcribed RNA string u is formed by replacing
all occurrences of 'T' in t with 'U' in u.

Given: A DNA string 
Return: The transcribed RNA string of the DNA string

Examle:

dna_string: GATGGAACTTGACTACGTAAATT
                        
transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");

returns:
GAUGGAACUUGACUACGUAAAUU
*/

#include "transcribe_dna_to_rna.h"

using std::string;

std::string transcribe_dna_into_rna(const std::string& str)
{
	string rna{ str };

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == 'T')
		{
			rna[i] = 'U';
		}
	}

	return rna;
}
