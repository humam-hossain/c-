#include <iostream>
#include<string.h>
using namespace std;
void printPermutations(char *str, char* permutations, int last, int index){
   int i, len = strlen(str);
   for ( i = 0; i < len; i++ ) {
        permutations[index] = str[i] ;
        if (index == last)
        cout<< permutations <<"\n";
        else
        printPermutations (str, permutations, last, index+1);
   }
}
int main() {
   char str[] = "+-*/";
   cout<<"All permutations of the string with repetition of "<<str<<" are: "<<endl ;
   int len = strlen(str) ;
   char permutations[len];
   printPermutations (str, permutations, len-1, 0);
   return 0;
}


// #include <iostream>
// #include <vector>

// using namespace std;

// int main(int argc, char *argv[]) {
// 	if( argc <= 1 ) {
// 		cerr << "No arguments.\n";
// 		return 1;
// 	}
	
// 	const int N = argc - 1;
// 	double *numbers = new double[N];
// 	for( int i = 1; i < argc; i++ )
// 		numbers[i - 1] = atof( argv[i] );
// 	//numbers now has all our numbers
// 	//N = length of numbers array
	
// 	vector<vector<double>> combinations;
// 	for( int len = 1; len <= N; len++ ) {
// 		//create index array, i
// 		int *i = new int[len];
// 		for( int _ = 0; _ < len; _++ )
// 			i[_] = len - 1 - _;
		
// 		while( i[0] < N ) {
// 			vector<double> comb;
// 			for( int _ = 0; _ < len; _++ )
// 				comb.push_back( numbers[i[_]] );
// 			combinations.push_back(comb);
// 			//iterate i
// 			for( int _ = 0; _ < len; _++ ) {
// 				i[_]++;
// 				if( i[_] < N )
// 					break;
// 				if( _ < len - 1 )
// 					i[_] = i[_ + 1] + 2;
// 			}
// 		}
// 		delete i;
// 	}
	
// 	//print combinations
// 	for( int a = 0; a < combinations.size(); a++ ) {
// 		cout << "{ ";
// 		for( int b = 0; b < combinations[a].size(); b++ )
// 			cout << combinations[a][b] << ' ';
// 		cout << "}\n";
// 	}
	
// 	delete numbers;
// 	return 0;
// }
