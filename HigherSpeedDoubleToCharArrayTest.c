	#include "HigherSpeedDoubleToCharArray.h"
	
	int main(){
		// This sample file should be in the same directory as the Header file, HigherSpeedDoubleToCharArray.h , is included in.
		int i = 0;
		for(i=1;i<=100;i++){
			printf("[%s]\n",ValueToCharArray(-998999.99951,i-8,62-i,62-i,1,0,0,5,10,1));
		}//i
		return(0);
	}//main
	