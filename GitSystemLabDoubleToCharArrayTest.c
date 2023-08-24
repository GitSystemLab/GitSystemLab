	#include "GitSystemLabDoubleToCharArray.h"
	
	int main(){
		// This sample file should be in the same directory as the Header file, GitSystemLabDoubleToCharArray.h , is included in.
		double Value0 = (double)0.0;                     // "double" value which is converted to a string.
		int DecimalOrderOrderNumber0 = 0;                // The decimal order which is rounded.
		int SetWholeDigitOrderOrderNumber0 = 0;          // The whole digit order which is the start of the output string.
		int SetDecimalOrderOrderNumber0 = 0;             // The decimal order which is the end of the output string.
		int SetWholeDigitOrderOrderNumberMarker0 = 0;    // The argument which enables us to use the argument, SetWholeDigitOrderOrderNumber0 (0:OFF, Not 0:ON).
		int SetDecimalOrderOrderNumberMarker0 = 0;       // The argument which enables us to use the argument, SetDecimalOrderOrderNumber0 (0:OFF, Not 0:ON)
		int PlusOrMinusSignMarker0 = 0;                  // 0: No Plus Sign exists when the output value is non-negative. 
		                                                 // Not 0: Plus Sign exists when the output value is non-negative unless IntValueBase0 is abnormal(where IntValueBase0 <= 1). 
		int RoundUpOneDigit0 = 0;                        // The digit which determines round-up or round-down at the decimal order the argument, DecimalOrderOrderNumber indicates.
		int IntValueBase0 = 0;                           // If IntValueBase0 is 10, output is the decimal. 
		                                                 // If IntValueBase0 is 16, output is the hexadecimal.
		                                                 // Note that RoundUpOneDigit0 isn't valid for decimal, especially when IntValueBase0 is not 10.
		int LanguageKind0 = 1;                           // 1: Normal Mode, 2: Special Mode. Otherwise: Output is "Null".
		int i = 0;
		
		for(i=1;i<=100;i++){
			//Sample//
			Value0 = -99899.99951;
			DecimalOrderOrderNumber0 = i - 8;
			SetWholeDigitOrderOrderNumber0 = 62 - i;
			SetDecimalOrderOrderNumber0 = 51 - i;
			SetWholeDigitOrderOrderNumberMarker0 = 1;
			SetDecimalOrderOrderNumberMarker0 = 1;
			PlusOrMinusSignMarker0 = 1;
			RoundUpOneDigit0 = 5;
			IntValueBase0 = 10;
			LanguageKind0 = 1;
			//End Sample//
			printf("[%s]\n",DoubleToCharArray(Value0,DecimalOrderOrderNumber0,SetWholeDigitOrderOrderNumber0,
			SetDecimalOrderOrderNumber0,SetWholeDigitOrderOrderNumberMarker0,SetDecimalOrderOrderNumberMarker0,
			PlusOrMinusSignMarker0,RoundUpOneDigit0, IntValueBase0, LanguageKind0));
		}//i
		return(0);
	}//main
	