#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	string file1 = argv[1];
	string file2 = argv[2];
	int count = 0;
	
	for(int i; i<argc; i++){
		count++;
	}
		
	if (count<2){
		cout<<"Not enough arguments."<<endl;
		exit(0);
	}
	
	fin.open(file1);
		
		
	
	
	
	// check if there are enough arguments
	
	
	// open the first file
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	fout.open(file2);
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
