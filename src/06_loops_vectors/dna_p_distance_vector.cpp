//Write include statements


/*
For two strings s1 and s2 of equal length, the p-distance between them is the
proportion of corresponding symbols that differ between s1 and s2.
==THIS has been done in 02_decisions_if question=== 
To use the get_dna_p_distance function, make sure to include the header file for question 2 above.

For a general distance function d on n taxa s1,s2,…,sn ,
we may encode the distances between pairs of taxa via a distance matrix D in which Di,j=d(si,sj).

Given: A collection of n (n≤10) DNA strings s1,…,sn of equal length. 

Return: The vector of doubles corresponding to the p-distance dp on the given strings. 

Sample vector of string 

 vector<string> data {"TTTCCATTTA",
                      "GATTCATTTC",
                      "TTTCCATTTT",
                      "GTTCCATTTA"};

vector<double> result;

Algorithm:
for each string data
	get p distance for current string compared to itself and all the other 3 strings
	save its rounded p-distance(from question 02_decisions_if) to the result vector


Sample vector of doubles output

{
0.00000, 0.40000, 0.10000, 0.10000,   //p-distance of "TTTCCATTTA" to itself 0.0000, "GATTCATTTC" 0.4000, etc
0.40000, 0.00000, 0.40000, 0.30000,
0.10000, 0.40000, 0.00000, 0.20000,
0.10000, 0.30000, 0.20000, 0.00000
}

Write code for get_dna_p_distance_vector
*/