#include <stdio.h>
#include <stdlib.h>

	static char* ValueToCharArray(double Value0,int DecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumber0,
		int SetDecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumberMarker0,int SetDecimalOrderOrderNumberMarker0,
		int PlusOrMinusSignMarker0,int RoundUpOneDigit0, int IntValueBase0, int LanguageKind0){
			
		// This program can be operated by both Visual Studio C, gcc and c++ compilers.
		// This programming code is for the demo which is not so much reliable (Version 2).
		// However I tried making the strings to verify this code is accurate to some extent.
		
		// Value0                               :: "double" value which is converted to a string.
		// SetWholeDigitOrderOrderNumber0       :: The decimal order which is the end of the output string.
		// DecimalOrderOrderNumber0             :: The decimal order which is rounded.
		// SetWholeDigitOrderOrderNumberMarker0 :: The whole digit order which is the start of the output string.
		// SetDecimalOrderOrderNumberMarker0    :: The argument which enables us to use the argument, SetDecimalOrderOrderNumber0 (0:OFF, Not 0:ON).
		// SetWholeDigitOrderOrderNumberMarker0 :: The argument which enables us to use the argument, SetWholeDigitOrderOrderNumber0 (:OFF, Not 0:ON).
		// RoundUpOneDigit0                     :: The digit which determines round-up or round-down at the decimal order the argument, DecimalOrderOrderNumber indicates.
		// IntValueBase0                        :: If IntValueBase0 is 10, output is the decimal. 
		//                                      :: If IntValueBase0 is 16, output is the hexadecimal.
		//                                      :: Note that RoundUpOneDigit0 isn't valid for decimal, especially when IntValueBase0 is not 10.
		// LanguageKind0                        :: 1: Normal Mode, 2: Special Mode. Otherwise: Output is "Null".
			
		// Copyright and Ownership attributes to GitSystemLab at present.
			
		// To our surprise, this programming code has just One loop...
		
		const char CharAsciiNullCharacter = (char)0;
		const char CharAsciiHorizontalTab = (char)9;
		const char CharAsciiSpace = (char)32;
		const char CharAsciiUppercaseA = (char)65;
		const char CharAsciiUppercaseB = (char)66;
		const char CharAsciiUppercaseC = (char)67;
		const char CharAsciiUppercaseD = (char)68;
		const char CharAsciiUppercaseE = (char)69;
		const char CharAsciiUppercaseF = (char)70;
		const char CharAsciiUppercaseG = (char)71;
		const char CharAsciiUppercaseH = (char)72;
		const char CharAsciiUppercaseI = (char)73;
		const char CharAsciiUppercaseJ = (char)74;
		const char CharAsciiUppercaseK = (char)75;
		const char CharAsciiUppercaseL = (char)76;
		const char CharAsciiUppercaseM = (char)77;
		const char CharAsciiUppercaseN = (char)78;
		const char CharAsciiUppercaseO = (char)79;
		const char CharAsciiUppercaseP = (char)80;
		const char CharAsciiUppercaseQ = (char)81;
		const char CharAsciiUppercaseR = (char)82;
		const char CharAsciiUppercaseS = (char)83;
		const char CharAsciiUppercaseT = (char)84;
		const char CharAsciiUppercaseU = (char)85;
		const char CharAsciiUppercaseV = (char)86;
		const char CharAsciiUppercaseW = (char)87;
		const char CharAsciiUppercaseX = (char)88;
		const char CharAsciiUppercaseY = (char)89;
		const char CharAsciiUppercaseZ = (char)90;
		const char CharAsciiLowercaseA = (char)97;
		const char CharAsciiLowercaseB = (char)98;
		const char CharAsciiLowercaseC = (char)99;
		const char CharAsciiLowercaseD = (char)100;
		const char CharAsciiLowercaseE = (char)101;
		const char CharAsciiLowercaseF = (char)102;
		const char CharAsciiLowercaseG = (char)103;
		const char CharAsciiLowercaseH = (char)104;
		const char CharAsciiLowercaseI = (char)105;
		const char CharAsciiLowercaseJ = (char)106;
		const char CharAsciiLowercaseK = (char)107;
		const char CharAsciiLowercaseL = (char)108;
		const char CharAsciiLowercaseM = (char)109;
		const char CharAsciiLowercaseN = (char)110;
		const char CharAsciiLowercaseO = (char)111;
		const char CharAsciiLowercaseP = (char)112;
		const char CharAsciiLowercaseQ = (char)113;
		const char CharAsciiLowercaseR = (char)114;
		const char CharAsciiLowercaseS = (char)115;
		const char CharAsciiLowercaseT = (char)116;
		const char CharAsciiLowercaseU = (char)117;
		const char CharAsciiLowercaseV = (char)118;
		const char CharAsciiLowercaseW = (char)119;
		const char CharAsciiLowercaseX = (char)120;
		const char CharAsciiLowercaseY = (char)121;
		const char CharAsciiLowercaseZ = (char)122;
		
		const char CharZeroDigit = '0';
		const char CharOneDigit = '1';
		const char CharTwoDigit = '2';
		const char CharThreeDigit = '3';
		const char CharFourDigit = '4';
		const char CharFiveDigit = '5';
		const char CharSixDigit = '6';
		const char CharSevenDigit = '7';
		const char CharEightDigit = '8';
		const char CharNineDigit = '9';
		const char CharADigit = CharAsciiUppercaseA;
		const char CharBDigit = CharAsciiUppercaseB;
		const char CharCDigit = CharAsciiUppercaseC;
		const char CharDDigit = CharAsciiUppercaseD;
		const char CharEDigit = CharAsciiUppercaseE;
		const char CharFDigit = CharAsciiUppercaseF;

		const char CharLowercaseD[] = {CharAsciiLowercaseD,'\0'};
		const char CharLowercaseF[] = {CharAsciiLowercaseF,'\0'};
		const char CharLowercaseLF[] = {CharAsciiLowercaseL,CharAsciiLowercaseF,'\0'};
		
		const char StringFirstApplicationLanguageDotOperator[] = ".";
		const char StringFirstApplicationLanguagePlusSignOperator[] = "+";
		const char StringFirstApplicationLanguageMinusSignOperator[] = "-";
		const char StringFirstApplicationLanguageExponentialOperator[] = "E";
		const char StringFirstApplicationLanguageNullDigit[] = "NULL";
		const char StringFirstApplicationLanguageCarryUpDigit[] = "1";
		const char StringFirstApplicationLanguagePrefixDigit[] = "0";
		const char StringFirstApplicationLanguageSuffixDigit[] = "0";
		const char StringFirstApplicationLanguageZeroNormalDigit[] = "0";
		const char StringFirstApplicationLanguageOneNormalDigit[] = "1";
		const char StringFirstApplicationLanguageTwoNormalDigit[] = "2";
		const char StringFirstApplicationLanguageThreeNormalDigit[] = "3";
		const char StringFirstApplicationLanguageFourNormalDigit[] = "4";
		const char StringFirstApplicationLanguageFiveNormalDigit[] = "5";
		const char StringFirstApplicationLanguageSixNormalDigit[] = "6";
		const char StringFirstApplicationLanguageSevenNormalDigit[] = "7";
		const char StringFirstApplicationLanguageEightNormalDigit[] = "8";
		const char StringFirstApplicationLanguageNineNormalDigit[] = "9";
		const char StringFirstApplicationLanguageANormalDigit[] = {CharAsciiUppercaseA,'\0'};
		const char StringFirstApplicationLanguageBNormalDigit[] = {CharAsciiUppercaseB,'\0'};
		const char StringFirstApplicationLanguageCNormalDigit[] = {CharAsciiUppercaseC,'\0'};
		const char StringFirstApplicationLanguageDNormalDigit[] = {CharAsciiUppercaseD,'\0'};
		const char StringFirstApplicationLanguageENormalDigit[] = {CharAsciiUppercaseE,'\0'};
		const char StringFirstApplicationLanguageFNormalDigit[] = {CharAsciiUppercaseF,'\0'};
			
		const char StringSecondApplicationLanguageDotOperator[] = "<.>";
		const char StringSecondApplicationLanguagePlusSignOperator[] = "[Plus]";
		const char StringSecondApplicationLanguageMinusSignOperator[] = "[Minus]";
		const char StringSecondApplicationLanguageExponentialOperator[] = "<Exponential>";
		const char StringSecondApplicationLanguageNullDigit[] = "{Null}";
		const char StringSecondApplicationLanguageCarryUpDigit[] = "[CarryUpOne]";
		const char StringSecondApplicationLanguagePrefixDigit[] = "(Prefix Zero)";
		const char StringSecondApplicationLanguageSuffixDigit[] = "(Surfix Zero)";
		const char StringSecondApplicationLanguageZeroNormalDigit[] = "Zero";
		const char StringSecondApplicationLanguageOneNormalDigit[] = "One";
		const char StringSecondApplicationLanguageTwoNormalDigit[] = "Two";
		const char StringSecondApplicationLanguageThreeNormalDigit[] = "Three";
		const char StringSecondApplicationLanguageFourNormalDigit[] = "Four";
		const char StringSecondApplicationLanguageFiveNormalDigit[] = "Five";
		const char StringSecondApplicationLanguageSixNormalDigit[] = "Six";
		const char StringSecondApplicationLanguageSevenNormalDigit[] = "Seven";
		const char StringSecondApplicationLanguageEightNormalDigit[] = "Eight";
		const char StringSecondApplicationLanguageNineNormalDigit[] = "Nine";
		const char StringSecondApplicationLanguageANormalDigit[] = "[A]";
		const char StringSecondApplicationLanguageBNormalDigit[] = "{B}";
		const char StringSecondApplicationLanguageCNormalDigit[] = "((C))";
		const char StringSecondApplicationLanguageDNormalDigit[] = "<D>";
		const char StringSecondApplicationLanguageENormalDigit[] = "/E/";
		const char StringSecondApplicationLanguageFNormalDigit[] = "#F#";
			
		const char StringPercentage[] = "%";
		const char StringValue[] = "Value";
		const char StringBase[] = "Base";
		const char StringPower[] = "Power";
		const char StringLowercaseD[] = {CharAsciiLowercaseD,'\0'};
		const char StringLowercaseF[] = {CharAsciiLowercaseF,'\0'};
		const char StringLowercaseLF[] = {CharAsciiLowercaseL,CharAsciiLowercaseF,'\0'};
		const char StringRoundLeftBracket[] = "(";
		const char StringRoundRightBracket[] = ")";
			
		const char StringNullCharacterBlank[] = {CharAsciiNullCharacter,'\0'};
		const char StringHorizontalTabBlank[] = {CharAsciiHorizontalTab,'\0'};
		const char StringSpaceBlank[] = {CharAsciiSpace,'\0'};
		
		const int UndefinedApplicationTokenType = 0;
		const int FormatStringApplicationTokenType = 1;
		const int ValueApplicationTokenType = 2;
		const int LeftBracketApplicationTokenType = 3;
		const int RightBracketApplicationTokenType = 4;
		const int ArgumentStatementApplicationTokenType = 5;
		const int DigitApplicationTokenType = 6;
		const int NullDigitApplicationTokenType = 7;
		const int SuffixDigitApplicationTokenType = 8;
		const int PrefixDigitApplicationTokenType = 9;
		const int CarryUpDigitApplicationTokenType = 10;
		const int MinusSignOperatorApplicationTokenType = 11;
		const int PlusSignOperatorApplicationTokenType = 12;
		const int ExponentialOperatorApplicationTokenType = 13;
		const int DotOperatorApplicationTokenType = 14;
		const int BlankApplicationTokenType = 15;
		const int MaxParameterApplicationTokenType = 15;

		const int UndefinedApplicationTokenStringNumber = 0;
		const int FormatStringApplicationTokenStringNumber = 1;
		const int MaxFormatStringApplicationTokenStringNumber = 1;
		const int ValueValueApplicationTokenStringNumber = 1;
		const int BaseValueApplicationTokenStringNumber = 2;
		const int PowerValueApplicationTokenStringNumber = 3;
		const int DValueApplicationTokenStringNumber = 4;
		const int FValueApplicationTokenStringNumber = 5;
		const int LfValueApplicationTokenStringNumber = 6;
		const int MaxValueApplicationTokenStringNumber = 6;
		const int RoundLeftBracketApplicationTokenStringNumber = 1;
		const int MaxLeftBracketApplicationTokenStringNumber = 1;
		const int RoundRightBracketApplicationTokenStringNumber = 1;
		const int MaxRightBracketApplicationTokenStringNumber = 1;
		const int PercentageArgumentStatementApplicationTokenStringNumber = 1;
		const int MaxArgumentStatementApplicationTokenStringNumber = 1;
		const int ZeroNormalDigitApplicationTokenStringNumber = 1;
		const int OneNormalDigitApplicationTokenStringNumber = 2;
		const int TwoNormalDigitApplicationTokenStringNumber = 3;
		const int ThreeNormalDigitApplicationTokenStringNumber = 4;
		const int FourNormalDigitApplicationTokenStringNumber = 5;
		const int FiveNormalDigitApplicationTokenStringNumber = 6;
		const int SixNormalDigitApplicationTokenStringNumber = 7;
		const int SevenNormalDigitApplicationTokenStringNumber = 8;
		const int EightNormalDigitApplicationTokenStringNumber = 9;
		const int NineNormalDigitApplicationTokenStringNumber = 10;
		const int ANormalDigitApplicationTokenStringNumber = 11;
		const int BNormalDigitApplicationTokenStringNumber = 12;
		const int CNormalDigitApplicationTokenStringNumber = 13;
		const int DNormalDigitApplicationTokenStringNumber = 14;
		const int ENormalDigitApplicationTokenStringNumber = 15;
		const int FNormalDigitApplicationTokenStringNumber = 16;
		const int MaxNormalDigitApplicationTokenStringNumber = 16;
		const int NullDigitApplicationTokenStringNumber = 1;
		const int MaxNullDigitApplicationTokenStringNumber = 1;
		const int SuffixDigitApplicationTokenStringNumber = 1;
		const int MaxSuffixDigitApplicationTokenStringNumber = 1;
		const int PrefixDigitApplicationTokenStringNumber = 1;
		const int MaxPrefixDigitApplicationTokenStringNumber = 1;
		const int CarryUpDigitApplicationTokenStringNumber = 1;
		const int MaxCarryUpDigitApplicationTokenStringNumber = 1;
		const int MinusSignOperatorApplicationTokenStringNumber = 1;
		const int MaxMinusSignOperatorApplicationTokenStringNumber = 1;
		const int PlusSignOperatorApplicationTokenStringNumber = 1;
		const int MaxPlusSignOperatorApplicationTokenStringNumber = 1;
		const int ExponentialOperatorApplicationTokenStringNumber = 1;
		const int MaxExponentialOperatorApplicationTokenStringNumber = 1;
		const int DotOperatorApplicationTokenStringNumber = 1;
		const int MaxDotOperatorApplicationTokenStringNumber = 1;
		const int NullCharacterBlankApplicationTokenStringNumber = 1;
		const int HorizontalTabBlankApplicationTokenStringNumber = 2;
		const int SpaceBlankApplicationTokenStringNumber = 3;
		const int MaxBlankApplicationTokenStringNumber = 3;
			
		int* OriginalOrderNumberUnitTotalPartialOrderNumbers = NULL;
		int* OriginalOrderNumberUnitMaxPartialOrderNumbers = NULL;
		int* OriginalOrderNumberUnitTotalPartialValidOrderNumbers = NULL;
		int* OriginalOrderNumberUnitMaxPartialValidOrderNumbers = NULL;
		int* OriginalOrderNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* OriginalOrderNumberUnitMaxPartialOrderCharNumbers = NULL;
			
		int* CopyOriginalOrderNumberUnitTotalPartialOrderNumbers = NULL;
		int* CopyOriginalOrderNumberUnitMaxPartialOrderNumbers = NULL;
		int* CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers = NULL;
		int* CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers = NULL;
		int* CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers = NULL;
			
		int* OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
		int* OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* OriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
		int* CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
		int* CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
			
		int* OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
		int* OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* OriginalValidOrderCharNumberUnitWholePartialOrderNumbers = NULL;
		int* CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
		int* CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers = NULL;
			
		char* CharDoubleValue = NULL;
		char* CopyCharDoubleValue = NULL;
			
		int ValueToCharArrayEndMarker = 0;
		const int UndefinedApplicationOrderType = 0;
		const int UndefinedApplicationOrderKind = 0;
		const int ExponentialValueApplicationOrderType = 1;
		const int DecimalOrderOrderNumberValueApplicationOrderType = 2;
		const int WholeDigitOrderOrderNumberValueApplicationOrderType = 3;
		const int CarryUpDigitValueApplicationOrderType = 4;
		const int SuffixValueApplicationOrderType = 5;
		const int PrefixValueApplicationOrderType = 6;
		const int PlusOrMinusSignValueApplicationOrderType = 7;
		const int DotValueApplicationOrderType = 8;
		const int NullValueApplicationOrderType = 9;
		const int MaxValueApplicationOrderType = 9;
			
		int OriginalOrderTypeLoopTime = 0;
		int OriginalOrderTypeLoopTimeEndMarker = 0;
		int MaxOriginalOrderTypeLoopTime = 0;
		int PartialOrderTypeLoopTime = 0;
		int PartialOrderTypeLoopTimeEndMarker = 0;
		int MaxPartialOrderTypeLoopTime = 0;
		int OriginalOrderType = 0;
		int MaxOriginalOrderType = 0;
		int TotalOriginalOrderType = 0;
		int OriginalOrderTypeEndMarker = 0;
		int WholeOriginalOrderType = 0;
		int OriginalOrderTypeUnitMaxPartialOrderType = 0;
		int OrderType = 0;
		int MaxOrderType = 0;
		int TotalOrderType = 0;
		int OrderTypeEndMarker = 0;
		int WholeOrderType = 0;
		int PartialOrderType = 0;
		int MaxPartialOrderType = 0;
		int MaxOriginalPartialOrderType = 0;
		int PartialOrderTypeEndMarker = 0;
		int OrderTypeCountStartMarker = 0;
			
		int OriginalOrderNumber = 0;
		int MaxOriginalOrderNumber = 0;
		int TotalOriginalOrderNumber = 0;
		int OriginalOrderNumberEndMarker = 0;
		int WholeOriginalOrderNumber = 0;
		int PartialValidOrderNumber = 0;
		int MaxPartialValidOrderNumber = 0;
		int ValidOrderNumber = 0;
		int MaxValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int OriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
		int OriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
		int OriginalOrderNumberUnitWholePartialValidOrderNumber = 0;
		int OrderNumber = 0;
		int MaxOrderNumber = 0;
		int TotalOrderNumber = 0;
		int OrderNumberEndMarker = 0;
		int WholeOrderNumber = 0;
		int PartialOrderNumber = 0;
		int MaxPartialOrderNumber = 0;
		int MaxOriginalPartialOrderNumber = 0;
		int PartialOrderNumberEndMarker = 0;
		int OrderNumberCountStartMarker = 0;
		int PartialOrderNumberLoopTime = 0;
		int MaxPartialOrderNumberLoopTime = 0;
		int PartialOrderNumberLoopTimeEndMarker = 0;
			
		int OriginalOrderCharNumber = 0;
		int MaxOriginalOrderCharNumber = 0;
		int TotalOriginalOrderCharNumber = 0;
		int OriginalOrderCharNumberEndMarker = 0;
		int WholeOriginalOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitOrderCharNumber = 0;
		int OrderCharNumber = 0;
		int MaxOrderCharNumber = 0;
		int TotalOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxOrderCharNumber = 0;
		int OriginalOrderNumberUnitTotalOrderCharNumber = 0;
		int OriginalOrderTypeUnitTotalOrderCharNumber = 0;
		int OrderCharNumberEndMarker = 0;
		int WholeOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int OriginalOrderTypeCutOriginalOrderCharNumberUnitWholePartialOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitWholePartialOrderCharNumber = 0;
		int PartialOrderCharNumber = 0;
		int MaxPartialOrderCharNumber = 0;
		int MaxOriginalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberEndMarker = 0;
		int OrderCharNumberCountStartMarker = 0;
			
	 	int ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
		int CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 0;
	 	int DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 0;
		int OriginalOrderTypeUnitMaxOrderNumber = 0;
		int CarryUpDigitOrderNumber = 0;
		int IntValueBase = 0;
		int IntValueBaseErrorMarker = 0;
		int RoundUpOneDigit = 5;
	 	int SetWholeDigitOrderOrderNumber = 0;
		int SetDecimalOrderOrderNumber = 0;
	 	int SetWholeDigitOrderOrderNumberMarker = 0;
		int SetDecimalOrderOrderNumberMarker = 0;
		int WholeDigitOrderOrderNumberBeforeExponential = 0;
		int UndefinedApplicationPlusOrMinusSignStatus = 0;
		int MinusApplicationPlusOrMinusSignStatus = 1;
		int PlusApplicationPlusOrMinusSignStatus = 2;
		int PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
		int IntPlusOrMinusSign = 0;
		int PlusOrMinusSignMarker = 0;
		int DummyRoundDownToZeroMarker = 0;
		int RoundDownToZeroMarker = 0;
		int DecimalOrderOrderNumber = 0;
		int WholeDigitOrderOrderNumber = 0;
		int LanguageKind = 0;
		const int FirstApplicationLanguageKind = 1;
		const int SecondApplicationLanguageKind = 2;
		double Value = 0.0;
		double AbsoluteValue = 0.0;
		double AbsoluteValueWholeDigitOrderPart = 0.0;
		double DummyAbsoluteValueWholeDigitOrderPart = 0.0;
		double AbsoluteValueDecimalOrderPart = 0.0;
		double DummyAbsoluteValueDecimalOrderPart = 0.0;
		int OriginalOneDigit = 0;
		int OriginalCarryUpOneDigit = 0;
		int OneDigit = 0;
		int CandidateCarryUpDecimalOrderMarker = 0;
		int OriginalTokenType = UndefinedApplicationTokenType;
		int TotalOriginalParameterArrayOrderType = 0;
		int MaxOriginalParameterArrayOrderType = 0;
		int TotalOriginalParameterArrayOrderNumber = 0;
		int MaxOriginalParameterArrayOrderNumber = 0;
		int TotalOriginalParameterArrayOrderCharNumber = 0;
		int MaxOriginalParameterArrayOrderCharNumber = 0;
		int OriginalParameterArrayOrderType = 0;
		int OriginalParameterArrayOrderNumber = 0;
		int OriginalParameterArrayOrderCharNumber = 0;
		char OriginalParameterArrayOrderOneChar = (char)0;
		int ParameterArrayOrderTypeUnitOutputDenialMarker = 0;
		int ParameterArrayOrderNumberUnitOutputDenialMarker = 0;
		int ParameterArrayOrderCharNumberUnitOutputDenialMarker = 0;
		int ParameterArrayOrderOneCharUnitOutputDenialMarker = 0;
		char OriginalOneChar = (char)0;
		char OneChar = (char)0;
		int LoopTime = 0;
		int MaxLoopTime = 0;
		int LoopTimeEndMarker = 0;
		int LoopTimeCountStartMarker = 0;
		int OriginalOrderNumberUnitWholePartialOrderNumber = 0;
		int OriginalOrderNumberUnitWholePartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeUnitNextTotalOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxExponentialOrderNumber = 0;
		int OriginalOrderNumberUnitMaxDecimalOrderOrderNumber = 0;
		int OriginalOrderNumberUnitMaxWholeDigitOrderOrderNumber = 0;
		int OriginalOrderNumberUnitMaxCarryUpDigitOrderNumber = 0;
		int OriginalOrderNumberUnitMaxSuffixOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPlusOrMinusSignOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPrefixOrderNumber = 0;
		int OriginalOrderNumberUnitMaxDotOrderNumber = 0;
		int OriginalOrderNumberUnitMaxNullOrderNumber = 0;
		int OriginalOrderNumberUnitMaxExponentialOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxDecimalOrderOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxSuffixOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxPrefixOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxDotOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxNullOrderCharNumber = 0;
		int LoopTimeModulo2Plus1 = 0;
		int LoopTimeModulo2Plus1EndMarker = 0;
		const int MaxLoopTimeModulo2Plus1 = 2;
		int PartialOrderTypeValidityDenialMarker = 0;
		int PartialOrderNumberValidityDenialMarker = 0;
		int PartialOrderCharNumberValidityDenialMarker = 0;
		int OriginalOrderNumberUnitSubstitutingOrderCharNumber = 0;
		int SuffixOrderNumber = 0;
		int PrefixOrderNumber = 0;
		
		do{//ValueToCharArrayEndMarker&0
			if(LoopTimeCountStartMarker <= 0){
				if(LoopTime == 0){
					ValueToCharArrayEndMarker = 1;
					MaxLoopTime = 3;
					OriginalOrderNumberUnitMaxExponentialOrderNumber = 0;
					OriginalOrderNumberUnitMaxDecimalOrderOrderNumber = 0;
					OriginalOrderNumberUnitMaxCarryUpDigitOrderNumber = 0;
					OriginalOrderNumberUnitMaxSuffixOrderNumber = 0;
					OriginalOrderNumberUnitMaxPlusOrMinusSignOrderNumber = 0;
					OriginalOrderNumberUnitMaxPrefixOrderNumber = 0;
					OriginalOrderNumberUnitMaxDotOrderNumber = 0;
					OriginalOrderNumberUnitMaxNullOrderNumber = 0;
					OriginalOrderNumberUnitMaxWholeDigitOrderOrderNumber = 0;
					OriginalOrderNumberUnitMaxExponentialOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxDecimalOrderOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxSuffixOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxPrefixOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxDotOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxNullOrderCharNumber = 0;
					OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber = 0;
				}//LoopTime&0
				if(MaxLoopTime >= 1){
					LoopTime = LoopTime + 1;
					LoopTimeModulo2Plus1 = LoopTimeModulo2Plus1 + 1;
				}//MaxLoopTime&1
				if(LoopTime == MaxLoopTime){
					LoopTimeEndMarker = 1;
				}//LoopTime&MaxLoopTime
				if(LoopTimeModulo2Plus1 == MaxLoopTimeModulo2Plus1){
					LoopTimeModulo2Plus1EndMarker = 1;
				}//LoopTimeModulo2Plus1&MaxLoopTimeModulo2Plus1
				
				OriginalOrderTypeUnitTotalOrderCharNumber = 0;
				OriginalOrderNumberUnitTotalOrderCharNumber = 0;
				TotalOrderCharNumber = 0;
				TotalOrderType = 0;
				TotalOrderNumber = 0;
				OriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
				OriginalOrderNumberUnitTotalPartialOrderNumber = 0;
				OriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
				OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
				
			}//LoopTimeCountStartMarker&0
			
			if(OrderTypeCountStartMarker <= 0){
				if(PartialOrderType == 0){
					if(OriginalOrderType == 0){
						LoopTimeCountStartMarker = 1;
						MaxOriginalOrderType = 0;
						TotalOriginalOrderType = 0;
						OriginalOrderTypeUnitMaxPartialOrderType = 0;
						
						TotalOriginalParameterArrayOrderType = 0;
						MaxOriginalParameterArrayOrderType = 0;
						
						if(MaxLoopTime >= 1){
							TotalOriginalParameterArrayOrderType = 0;
							MaxOriginalParameterArrayOrderType = MaxParameterApplicationTokenType;
							TotalOriginalOrderType = TotalOrderType;
							MaxOriginalOrderType = MaxValueApplicationOrderType;
						}//MaxLoopTime&1
						
						OriginalOrderTypeUnitMaxOrderNumber = 0;
						

						Value = Value0;
						RoundUpOneDigit = RoundUpOneDigit0;
						SetWholeDigitOrderOrderNumber = SetWholeDigitOrderOrderNumber0;
						SetDecimalOrderOrderNumber = SetDecimalOrderOrderNumber0;
						SetWholeDigitOrderOrderNumberMarker = SetWholeDigitOrderOrderNumberMarker0;
						SetDecimalOrderOrderNumberMarker = SetDecimalOrderOrderNumberMarker0;
						PlusOrMinusSignMarker = PlusOrMinusSignMarker0;
						DecimalOrderOrderNumber = DecimalOrderOrderNumber0;
						IntValueBase = IntValueBase0;
						LanguageKind = LanguageKind0;
						SuffixOrderNumber = 0;
						PrefixOrderNumber = 0;
						CarryUpDigitOrderNumber = 0;
						
						if(SetDecimalOrderOrderNumberMarker == 0){
							SuffixOrderNumber = 0;
						}else if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= 0){
								SuffixOrderNumber = 0;
							}else if(SetDecimalOrderOrderNumber >= 1){
								if(SetDecimalOrderOrderNumber <= DecimalOrderOrderNumber){
									SuffixOrderNumber = 0;
								}else if(SetDecimalOrderOrderNumber > DecimalOrderOrderNumber){
									if(DecimalOrderOrderNumber <= 0){
										SuffixOrderNumber = SetDecimalOrderOrderNumber;
									}else if(DecimalOrderOrderNumber >= 1){
										SuffixOrderNumber = SetDecimalOrderOrderNumber - DecimalOrderOrderNumber;
									}//DecimalOrderOrderNumber&0
								}//SetDecimalOrderOrderNumber & DecimalOrderOrderNumber
							}//SetDecimalOrderOrderNumber&1
						}//SetDecimalOrderOrderNumberMarker&0
						
						
						IntPlusOrMinusSign = 0;
						AbsoluteValue = 0.0;
						if(Value < 0.0){
							IntPlusOrMinusSign = -1;
							AbsoluteValue = -Value;
						}else if(Value > 0.0){
							IntPlusOrMinusSign = 1;
							AbsoluteValue = Value;
						}else{//Value
							IntPlusOrMinusSign = 0;
							AbsoluteValue = Value;
						}//Value&0.0
						
						
						IntValueBaseErrorMarker = 0;
						if(IntValueBase0 < 2){
							IntValueBaseErrorMarker = 1;
						}else if(IntValueBase0 >= 2){
							IntValueBaseErrorMarker = 0;
						}//IntValueBase0

						
						AbsoluteValueWholeDigitOrderPart = (double)((int)AbsoluteValue);
						AbsoluteValueDecimalOrderPart = AbsoluteValue - AbsoluteValueWholeDigitOrderPart;
						
						PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
						if(IntValueBaseErrorMarker == 0){
							if(PlusOrMinusSignMarker == 0){
								if(RoundDownToZeroMarker == 0){
									if(IntPlusOrMinusSign <= -1){
										PlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
									}else if(IntPlusOrMinusSign >= 0){
										PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
									}//IntPlusOrMinusSign&0
								}else if(RoundDownToZeroMarker != 0){
									PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
								}//RoundDownToZeroMarker
							}else if(PlusOrMinusSignMarker != 0){
								if(RoundDownToZeroMarker == 0){
									if(IntPlusOrMinusSign <= -1){
										PlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
									}else if(IntPlusOrMinusSign >= 0){
										PlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
									}//IntPlusOrMinusSign
								}else if(RoundDownToZeroMarker != 0){
									PlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
								}//RoundDownToZeroMarker&0
							}//PlusOrMinusSignMarker
						}else if(IntValueBaseErrorMarker != 0){
							PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
						}//IntValueBaseErrorMarker&0
						
					}//OriginalOrderType&0
					
					WholeOriginalOrderType = 0;
					
					if(MaxOriginalOrderType >= 1){
						OriginalOrderType = OriginalOrderType + 1;
						WholeOriginalOrderType = TotalOriginalOrderType + OriginalOrderType;
					}//MaxOriginalOrderType&1
					if(OriginalOrderType == MaxOriginalOrderType){
						OriginalOrderTypeEndMarker = 1;
					}//OriginalOrderType&MaxOriginalOrderType
					MaxPartialOrderType = 0;
					MaxOriginalPartialOrderType = 0;
					MaxOrderType = 0;
					
					if(MaxOriginalOrderType >= 1){
						MaxOriginalPartialOrderType = 1;
					}//MaxOriginalOrderType&1
					
				}//PartialOrderType&0
				
				WholeOrderType = 0;
				OrderType = 0;
				PartialOrderTypeValidityDenialMarker = 0;
				
				
				if(MaxOriginalPartialOrderType >= 1){
					if(PartialOrderTypeValidityDenialMarker == 0){
						PartialOrderType = PartialOrderType + 1;
						OrderType = OriginalOrderTypeUnitMaxPartialOrderType + PartialOrderType;
						WholeOrderType = TotalOrderType + OrderType;
					}//PartialOrderTypeValidityDenialMarker&0
				}//MaxOriginalPartialOrderType&1
				if(PartialOrderTypeValidityDenialMarker == 0){
					if(PartialOrderType == MaxOriginalPartialOrderType){
						PartialOrderTypeEndMarker = 1;
					}//PartialOrderType&MaxOriginalPartialOrderType
				}else if(PartialOrderTypeValidityDenialMarker != 0){
					PartialOrderTypeEndMarker = 2;
				}//PartialOrderTypeValidityDenialMarker&0
				
				ParameterArrayOrderTypeUnitOutputDenialMarker = 0;
				OriginalParameterArrayOrderType = 0;
				
				if(MaxOriginalPartialOrderType >= 1){
					if(OriginalOrderType == ExponentialValueApplicationOrderType){
						OriginalParameterArrayOrderType = UndefinedApplicationTokenType;
					}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderType = DigitApplicationTokenType;
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderType = DigitApplicationTokenType;
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						OriginalParameterArrayOrderType = CarryUpDigitApplicationTokenType;
					}else if(OriginalOrderType == SuffixValueApplicationOrderType){
						OriginalParameterArrayOrderType = SuffixDigitApplicationTokenType;
					}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
						if(PlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderType = UndefinedApplicationTokenType;
						}else if(PlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderType = MinusSignOperatorApplicationTokenType;
						}else if(PlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderType = PlusSignOperatorApplicationTokenType;
						}//PlusOrMinusSignStatus
					}else if(OriginalOrderType == PrefixValueApplicationOrderType){
						OriginalParameterArrayOrderType = PrefixDigitApplicationTokenType;
					}else if(OriginalOrderType == DotValueApplicationOrderType){
						OriginalParameterArrayOrderType = DotOperatorApplicationTokenType;
					}else if(OriginalOrderType == NullValueApplicationOrderType){
						OriginalParameterArrayOrderType = NullDigitApplicationTokenType;
					}//OriginalOrderType
				}//MaxOriginalPartialOrderType&1
				
				if(OriginalParameterArrayOrderType < 1){
					ParameterArrayOrderTypeUnitOutputDenialMarker = 1;
				}//OriginalParameterArrayOrderType&0
				if(OriginalParameterArrayOrderType > MaxOriginalParameterArrayOrderType){
					ParameterArrayOrderTypeUnitOutputDenialMarker = 2;
				}//OriginalParameterArrayOrderType&0
				if(MaxOriginalPartialOrderType <= 0){
					ParameterArrayOrderTypeUnitOutputDenialMarker = 3;
				}//MaxOriginalPartialOrderType&0
				
				OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
				
			}//OrderTypeCountStartMarker&0
			
			if(OrderNumberCountStartMarker <= 0){
				if(PartialOrderNumber == 0){
					if(PartialOrderNumberLoopTime == 0){
						if(OriginalOrderNumber == 0){
							OrderTypeCountStartMarker = 1;
							TotalOriginalParameterArrayOrderNumber = 0;
							MaxOriginalParameterArrayOrderNumber = 0;
							TotalOriginalOrderNumber = 0;
							OriginalOrderNumberUnitMaxOrderCharNumber = 0;
							MaxOriginalOrderNumber = 0;
							
							if(MaxOriginalPartialOrderType >= 1){
								TotalOriginalParameterArrayOrderNumber = 0;
								if(OriginalParameterArrayOrderType == FormatStringApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxFormatStringApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxValueApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxLeftBracketApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxRightBracketApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxArgumentStatementApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxNormalDigitApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxNullDigitApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxSuffixDigitApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxPrefixDigitApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxCarryUpDigitApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxMinusSignOperatorApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxPlusSignOperatorApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxExponentialOperatorApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxDotOperatorApplicationTokenStringNumber;
								}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxBlankApplicationTokenStringNumber;
								}//OriginalParameterArrayOrderType
								
								if(PartialOrderTypeValidityDenialMarker == 0){
									TotalOriginalOrderNumber = TotalOrderNumber;
									if(OriginalOrderType == ExponentialValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == SuffixValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == PrefixValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == DotValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}else if(OriginalOrderType == NullValueApplicationOrderType){
										MaxOriginalOrderNumber = 1;
									}//OriginalOrderType
								}//PartialOrderTypeValidityDenialMarker&0
							}//MaxOriginalPartialOrderType&1
							
							
							OriginalOrderNumberUnitMaxPartialOrderNumber = 0;
							OriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
							
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderNumber = 0;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
							PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
							
						}//OriginalOrderNumber&0
						
						WholeOriginalOrderNumber = 0;
						
						if(MaxOriginalOrderNumber >= 1){
							OriginalOrderNumber = OriginalOrderNumber + 1;
							WholeOriginalOrderNumber = TotalOriginalOrderNumber + OriginalOrderNumber;
						}//MaxOriginalOrderNumber&1
						if(OriginalOrderNumber == MaxOriginalOrderNumber){
							OriginalOrderNumberEndMarker = 1;
						}//OriginalOrderNumber&MaxOriginalOrderNumber
						
						MaxPartialOrderNumber = 0;
						MaxPartialOrderNumberLoopTime = 0;
						MaxOrderNumber = 0;
						
						MaxValidOrderNumber = 0;
						
						if(MaxOriginalOrderNumber >= 1){
							if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								MaxPartialOrderNumberLoopTime = 2;
							}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								MaxPartialOrderNumberLoopTime = 2;
							}else{//OriginalOrderType
								MaxPartialOrderNumberLoopTime = 1;
							}//OriginalOrderType
							
							if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
								if(PlusOrMinusSignMarker == 0){
									if(RoundDownToZeroMarker == 0){
										if(IntPlusOrMinusSign <= -1){
											PlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
										}else if(IntPlusOrMinusSign >= 0){
											PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
										}//IntPlusOrMinusSign&0
									}else if(RoundDownToZeroMarker != 0){
										PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
									}//RoundDownToZeroMarker
								}else if(PlusOrMinusSignMarker != 0){
									if(RoundDownToZeroMarker == 0){
										if(IntPlusOrMinusSign <= -1){
											PlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
										}else if(IntPlusOrMinusSign >= 0){
											PlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
										}//IntPlusOrMinusSign
									}else if(RoundDownToZeroMarker != 0){
										PlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
									}//RoundDownToZeroMarker&0
								}//PlusOrMinusSignMarker
							}//OriginalOrderType
						}//MaxOriginalOrderNumber&1
						
					}//PartialOrderNumberLoopTime&0
					if(MaxPartialOrderNumberLoopTime >= 1){
						PartialOrderNumberLoopTime = PartialOrderNumberLoopTime + 1;
					}//MaxPartialOrderNumberLoopTime&1
					if(PartialOrderNumberLoopTime == MaxPartialOrderNumberLoopTime){
						PartialOrderNumberLoopTimeEndMarker = 1;
					}//PartialOrderNumberLoopTime&MaxPartialOrderNumberLoopTime
					
					MaxOriginalPartialOrderNumber = 0;
					
					if(MaxPartialOrderNumberLoopTime >= 1){
						if(OriginalOrderType == ExponentialValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							MaxOriginalPartialOrderNumber = 1;
						}//OriginalOrderType
					}//MaxPartialOrderNumberLoopTime&1
					
					if(MaxPartialOrderNumberLoopTime >= 1){
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							if(PartialOrderNumberLoopTime == 1){
								ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
				 				ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
							}//PartialOrderNumberLoopTimeEndMarker&0
							CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 0;
							DummyAbsoluteValueDecimalOrderPart = AbsoluteValueDecimalOrderPart;
							DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
					 		DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							if(PartialOrderNumberLoopTime == 1){
								RoundDownToZeroMarker = 0;
								WholeDigitOrderOrderNumber = 0;
							}//PartialOrderNumberLoopTimeEndMarker&0
							DummyRoundDownToZeroMarker = 0;

							DummyAbsoluteValueWholeDigitOrderPart = AbsoluteValueWholeDigitOrderPart;
							
							if(CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker == 0){
								DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 0;
							}else if(CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker != 0){
								DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = -1;
							}//CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker&0

						}//OriginalOrderType
					}//MaxPartialOrderNumberLoopTime&1
					MaxPartialValidOrderNumber = 0;
					OriginalOrderNumberUnitTotalPartialOrderNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderNumber;
					OriginalOrderNumberUnitTotalPartialValidOrderNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialValidOrderNumber;
					OriginalOrderNumberUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderNumberUnitMaxPartialValidOrderNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialValidOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderCharNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
				}//PartialOrderNumber&0
				
				OrderNumber = 0;
				WholeOrderNumber = 0;
				MaxOrderCharNumber = 0;
				OriginalOrderNumberUnitWholePartialOrderNumber = 0;
				OriginalOrderNumberUnitWholePartialValidOrderNumber = 0;
				
				if(MaxOriginalPartialOrderNumber >= 1){
					
					PartialOrderNumber = PartialOrderNumber + 1;
					OrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber + PartialOrderNumber;
					WholeOrderNumber = TotalOrderNumber + OrderNumber;
					OriginalOrderNumberUnitWholePartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber + OrderNumber;
				}//MaxOriginalPartialOrderNumber&1
				
				PartialOrderNumberValidityDenialMarker = 0;
				if(PartialOrderTypeValidityDenialMarker != 0){
					PartialOrderNumberValidityDenialMarker = -1;
				}//PartialOrderTypeValidityDenialMarker&0
				if(MaxOriginalPartialOrderNumber >= 1){
					if(OriginalOrderType == ExponentialValueApplicationOrderType){
						PartialOrderNumberValidityDenialMarker = 1;
					}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetDecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 1;
							}//PartialOrderNumber&SetDecimalOrderOrderNumber
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 2;
								}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						
						if(DecimalOrderOrderNumber <= 0){
							PartialOrderNumberValidityDenialMarker = 5;
						}else if(DecimalOrderOrderNumber >= 1){
							if(PartialOrderNumber > DecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 6;
							}//PartialOrderNumber&
						}//DecimalOrderOrderNumber&0
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 7;
							}//PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 8;
								}//PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						if(PartialOrderNumberLoopTime >= 2){
							if(PartialOrderNumber > WholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 9;
							}//PartialOrderNumber&
						}//PartialOrderNumberLoopTime&2
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 7;
							}//WholeDigitOrderOrderNumber + PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 8;
								}//WholeDigitOrderOrderNumber + PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						if(CarryUpDigitOrderNumber == 0){
							PartialOrderNumberValidityDenialMarker = 10;
						}//CarryUpDigitOrderNumber&0
					}else if(OriginalOrderType == SuffixValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(DecimalOrderOrderNumber <= -1){
								if(PartialOrderNumber > SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 1;
								}//DecimalOrderOrderNumber + PartialOrderNumber&SetDecimalOrderOrderNumber
							}else if(DecimalOrderOrderNumber >= 0){
								if(DecimalOrderOrderNumber + PartialOrderNumber > SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 2;
								}//DecimalOrderOrderNumber + PartialOrderNumber&SetDecimalOrderOrderNumber
							}//DecimalOrderOrderNumber&0
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(DecimalOrderOrderNumber <= -1){
									if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
										PartialOrderNumberValidityDenialMarker = 3;
									}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
								}else if(DecimalOrderOrderNumber >= 0){
									if(DecimalOrderOrderNumber + PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
										PartialOrderNumberValidityDenialMarker = 3;
									}//DecimalOrderOrderNumber + PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
								}//DecimalOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
					}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 7;
							}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 8;
								}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
					}else if(OriginalOrderType == PrefixValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 7;
							}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 8;
								}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						
					}else if(OriginalOrderType == DotValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetDecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 1;
							}//PartialOrderNumber&SetDecimalOrderOrderNumber
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 2;
								}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
					}else if(OriginalOrderType == NullValueApplicationOrderType){
						if(OriginalOrderNumberUnitTotalPartialOrderCharNumber >= 1){
							PartialOrderNumberValidityDenialMarker = 13;
						}//OriginalOrderNumberUnitTotalPartialOrderCharNumber&1
					}//OriginalOrderType
				}//MaxOriginalPartialOrderNumber&1
				
				if(MaxOriginalPartialOrderNumber >= 1){
					if(PartialOrderNumberValidityDenialMarker == 0){
						PartialValidOrderNumber = PartialValidOrderNumber + 1;
						ValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber + PartialValidOrderNumber;
						OriginalOrderNumberUnitWholePartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber + ValidOrderNumber;
					}//PartialOrderNumberValidityDenialMarker&0
				}//MaxOriginalPartialOrderNumber&1
				
				OriginalOneDigit = 0;
				OriginalCarryUpOneDigit = 0;
				OneDigit = 0;
				if(MaxOriginalPartialOrderNumber >= 1){
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						if(IntValueBaseErrorMarker == 0){
							OriginalOneDigit = (int)(DummyAbsoluteValueDecimalOrderPart * (double)IntValueBase);
							DummyAbsoluteValueDecimalOrderPart = DummyAbsoluteValueDecimalOrderPart * (double)IntValueBase - (double)((int)(DummyAbsoluteValueDecimalOrderPart * (double)IntValueBase));
						}else if(IntValueBaseErrorMarker != 0){
							OriginalOneDigit = 0;
						}//IntValueBaseErrorMarker&0
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(IntValueBaseErrorMarker == 0){
							OriginalOneDigit = (int)(DummyAbsoluteValueWholeDigitOrderPart - (double)IntValueBase * (double)((int)(DummyAbsoluteValueWholeDigitOrderPart/(double)IntValueBase)));
							DummyAbsoluteValueWholeDigitOrderPart = (double)((int)(DummyAbsoluteValueWholeDigitOrderPart/(double)IntValueBase));
						}else if(IntValueBaseErrorMarker != 0){
							OriginalOneDigit = 0;
						}//IntValueBaseErrorMarker&0
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						OriginalOneDigit = 1;
					}//OriginalOrderType
				}//MaxOriginalPartialOrderNumber&1
				
				if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
					if(DecimalOrderOrderNumber <= -1){
						PartialOrderNumberEndMarker = 1;
					}else if(DecimalOrderOrderNumber >= 0){
						if(PartialOrderNumber == DecimalOrderOrderNumber + 1){
							PartialOrderNumberEndMarker = 2;
						}//PartialOrderNumber
					}//DecimalOrderOrderNumber
				}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
					if(IntValueBaseErrorMarker == 0){
						if(DummyAbsoluteValueWholeDigitOrderPart < 1.0){
							PartialOrderNumberEndMarker = 3;
						}//DummyAbsoluteValueWholeDigitOrderPart&1.0
					}else if(IntValueBaseErrorMarker != 0){
						PartialOrderNumberEndMarker = 4;
					}//IntValueBaseErrorMarker&0
				}else if(OriginalOrderType == SuffixValueApplicationOrderType){
					if(SuffixOrderNumber == 0){
						PartialOrderNumberEndMarker = -6;
					}else if(SuffixOrderNumber >= 1){
						if(PartialOrderNumber == SuffixOrderNumber){
							PartialOrderNumberEndMarker = 6;
						}//OrderNumber&SuffixOrderNumber
					}//SuffixOrderNumber
				}else if(OriginalOrderType == PrefixValueApplicationOrderType){
					if(PrefixOrderNumber == 0){
						PartialOrderNumberEndMarker = -6;
					}else if(PrefixOrderNumber >= 1){
						if(PartialOrderNumber == PrefixOrderNumber){
							PartialOrderNumberEndMarker = 8;
						}//OrderNumber&PrefixOrderNumber
					}//PartialOrderNumber
				}else{//OriginalOrderType
					PartialOrderNumberEndMarker = 9;
				}//OriginalOrderType
				
				if(MaxOriginalPartialOrderNumber >= 1){
					
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						CandidateCarryUpDecimalOrderMarker = 0;
						if(RoundDownToZeroMarker == 0){
							if(IntValueBaseErrorMarker == 0){
								if(PartialOrderNumber < DecimalOrderOrderNumber + 1){
									if(OriginalOneDigit >= IntValueBase - 1){
										CandidateCarryUpDecimalOrderMarker = 1;
									}//OriginalOneDigit
								}else if(PartialOrderNumber == DecimalOrderOrderNumber + 1){
									if(OriginalOneDigit >= RoundUpOneDigit){
										CandidateCarryUpDecimalOrderMarker = 2;
									}//OriginalOneDigit
								}//PartialOrderNumber&DecimalOrderOrderNumber
							}//IntValueBaseErrorMarker&0
						}//RoundDownToZeroMarker&0
						
						if(CandidateCarryUpDecimalOrderMarker == 0){
							if(DecimalOrderOrderNumber >= 0){
								CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 1;
							}//DecimalOrderOrderNumber&0
							DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
							DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
						}else if(CandidateCarryUpDecimalOrderMarker != 0){
							DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = PartialOrderNumber;
							if(DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber == 0){
								DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = PartialOrderNumber;
							}//DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber&0
						}//CandidateCarryUpDecimalOrderMarker&0
						
						
						if(PartialOrderNumberLoopTime == 1){
							OneDigit = OriginalOneDigit;
						}else if(PartialOrderNumberLoopTime >= 2){
							if(RoundDownToZeroMarker == 0){
								if(IntValueBaseErrorMarker == 0){
									if(PartialOrderNumber <= DecimalOrderOrderNumber){
										if(ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber == 0){
											OneDigit = OriginalOneDigit;
										}else if(ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber >= 1){
											if(PartialOrderNumber >= ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber){
												OneDigit = 0;
											}else if(PartialOrderNumber == ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber - 1){
												if(OriginalOneDigit < OriginalCarryUpOneDigit){
													OneDigit = OriginalOneDigit;
												}else if(OriginalOneDigit >= OriginalCarryUpOneDigit){
													OneDigit = OriginalOneDigit + 1;
												}//OriginalOneDigit & OriginalCarryUpOneDigit&0
											}else if(PartialOrderNumber < ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber - 1){
												OneDigit = OriginalOneDigit;
											}//PartialOrderNumber
										}//ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber&1
									}else if(PartialOrderNumber > DecimalOrderOrderNumber){
										OneDigit = 0;
									}//PartialOrderNumber & DecimalOrderOrderNumber
								}else if(IntValueBaseErrorMarker != 0){
									OneDigit = 0;
								}//IntValueBaseErrorMarker&0
							}else if(RoundDownToZeroMarker != 0){
								OneDigit = 0;
							}//RoundDownToZeroMarker&0
						}//PartialOrderNumberLoopTime&2
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(RoundDownToZeroMarker == 0){
							if(IntValueBaseErrorMarker == 0){
								if(DecimalOrderOrderNumber <= -1){
									if(PartialOrderNumber < - DecimalOrderOrderNumber){
										OneDigit = 0;
										if(PartialOrderNumberEndMarker != 0){
											DummyRoundDownToZeroMarker = 1;
										}//PartialOrderNumberEndMarker&0
									}else if(PartialOrderNumber == - DecimalOrderOrderNumber){
										OneDigit = 0;
										if(OriginalOneDigit < RoundUpOneDigit){
											DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 2;
											if(PartialOrderNumberEndMarker != 0){
												DummyRoundDownToZeroMarker = 2;
											}//PartialOrderNumberEndMarker&0
										}//OriginalOneDigit
									}else if(PartialOrderNumber > - DecimalOrderOrderNumber){
										if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker == 0){
											if(OriginalOneDigit < IntValueBase - 1){
												OneDigit = OriginalOneDigit + 1;
											}else if(OriginalOneDigit == IntValueBase - 1){
												OneDigit = 0;
											}//OriginalOneDigit
										}else if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker != 0){
											OneDigit = OriginalOneDigit;
										}//DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker&0
										if(OriginalOneDigit < IntValueBase - 1){
											DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 1;
										}//OriginalOneDigit
									}//PartialOrderNumber
								}else if(DecimalOrderOrderNumber >= 0){
									if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker == 0){
										if(OriginalOneDigit < IntValueBase - 1){
											OneDigit = OriginalOneDigit + 1;
										}else if(OriginalOneDigit == IntValueBase - 1){
											OneDigit = 0;
										}//OriginalOneDigit
									}else if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker != 0){
										OneDigit = OriginalOneDigit;
									}//DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker&0
									if(OriginalOneDigit < IntValueBase - 1){
										DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 3;
									}//OriginalOneDigit
								}//DecimalOrderOrderNumber&0
							}else if(IntValueBaseErrorMarker != 0){
								DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 4;
								OneDigit = 0;
							}//IntValueBaseErrorMarker
						}else if(RoundDownToZeroMarker != 0){
							DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 5;
							OneDigit = 0;
						}//RoundDownToZeroMarker&0
						
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						OneDigit = OriginalOneDigit;
					}//OriginalOrderType
				}//MaxOriginalPartialOrderNumber&1
				
				OriginalParameterArrayOrderNumber = 0;
				
				if(MaxOriginalPartialOrderNumber >= 1){
					if(OriginalOrderType == ExponentialValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = UndefinedApplicationTokenStringNumber;
					}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = OneDigit + 1;
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = OneDigit + 1;
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = CarryUpDigitApplicationTokenStringNumber;
					}else if(OriginalOrderType == SuffixValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = SuffixDigitApplicationTokenStringNumber;
					}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
						if(PlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = UndefinedApplicationTokenStringNumber;
						}else if(PlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = MinusSignOperatorApplicationTokenStringNumber;
						}else if(PlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = PlusSignOperatorApplicationTokenStringNumber;
						}//PlusOrMinusSignStatus
					}else if(OriginalOrderType == PrefixValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = PrefixDigitApplicationTokenStringNumber;
					}else if(OriginalOrderType == DotValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = DotOperatorApplicationTokenStringNumber;
					}else if(OriginalOrderType == NullValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = NullDigitApplicationTokenStringNumber;
					}//OriginalOrderType
				}//MaxOriginalPartialOrderNumber&1
				
				ParameterArrayOrderNumberUnitOutputDenialMarker = 0;
				if(ParameterArrayOrderTypeUnitOutputDenialMarker != 0){
					ParameterArrayOrderNumberUnitOutputDenialMarker = -1;
				}//ParameterArrayOrderTypeUnitOutputDenialMarker&0
				if(OriginalParameterArrayOrderNumber < 1){
					ParameterArrayOrderNumberUnitOutputDenialMarker = 1;
				}//OriginalParameterArrayOrderNumber&0
				if(OriginalParameterArrayOrderNumber > MaxOriginalParameterArrayOrderNumber){
					ParameterArrayOrderNumberUnitOutputDenialMarker = 2;
				}//OriginalParameterArrayOrderNumber&0
				if(MaxOriginalPartialOrderNumber <= 0){
					ParameterArrayOrderNumberUnitOutputDenialMarker = 3;
				}//MaxOriginalPartialOrderNumber&0
			}//OrderNumberCountStartMarker&0
			
			if(OrderCharNumberCountStartMarker <= 0){
				if(PartialOrderCharNumber == 0){
					if(OriginalOrderCharNumber == 0){
						OrderNumberCountStartMarker = 1;
						MaxOriginalOrderCharNumber = 0;
						TotalOriginalOrderCharNumber = 0;
						OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
						TotalOriginalParameterArrayOrderCharNumber = 0;
						MaxOriginalParameterArrayOrderCharNumber = 0;
						
						if(MaxOriginalPartialOrderNumber >= 1){
							
							TotalOriginalParameterArrayOrderCharNumber = TotalOrderCharNumber;
							if(OriginalParameterArrayOrderType == FormatStringApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == FormatStringApplicationTokenStringNumber){
									MaxOriginalParameterArrayOrderCharNumber = 0;
								}//OriginalParameterArrayOrderNumber
							}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == ValueValueApplicationTokenStringNumber){
									if(StringValue != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringValue)/sizeof(char) - 1;
									}//StringValue&NULL
								}else if(OriginalParameterArrayOrderNumber == BaseValueApplicationTokenStringNumber){
									if(StringBase != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringBase)/sizeof(char) - 1;
									}//StringBase&NULL
								}else if(OriginalParameterArrayOrderNumber == PowerValueApplicationTokenStringNumber){
									if(StringPower != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringPower)/sizeof(char) - 1;
									}//StringPower&NULL
								}else if(OriginalParameterArrayOrderNumber == FValueApplicationTokenStringNumber){
									if(StringLowercaseF != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseF)/sizeof(char) - 1;
									}//StringLowercaseF&NULL
								}else if(OriginalParameterArrayOrderNumber == DValueApplicationTokenStringNumber){
									if(StringLowercaseD != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseD)/sizeof(char) - 1;
									}//StringLowercaseD&NULL
								}else if(OriginalParameterArrayOrderNumber == LfValueApplicationTokenStringNumber){
									if(StringLowercaseLF != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseLF)/sizeof(char) - 1;
									}//StringLowercaseLF&NULL
								}//OriginalParameterArrayOrderNumber
							}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == RoundLeftBracketApplicationTokenStringNumber){
									if(StringRoundLeftBracket != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringRoundLeftBracket)/sizeof(char) - 1;
									}//StringRoundLeftBracket&NULL
								}//OriginalParameterArrayOrderNumber
							}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == RoundRightBracketApplicationTokenStringNumber){
									if(StringRoundRightBracket != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringRoundRightBracket)/sizeof(char) - 1;
									}//StringRoundRightBracket&NULL
								}//OriginalParameterArrayOrderNumber
							}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == PercentageArgumentStatementApplicationTokenStringNumber){
									if(StringPercentage != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringPercentage)/sizeof(char) - 1;
									}//StringPercentage&NULL
								}//OriginalParameterArrayOrderNumber
							}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageZeroNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageZeroNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageZeroNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageOneNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageOneNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageOneNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageTwoNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageTwoNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageTwoNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageThreeNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageThreeNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageThreeNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageFourNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFourNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageFourNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageFiveNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFiveNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageFiveNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageSixNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSixNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageSixNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageSevenNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSevenNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageSevenNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageEightNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageEightNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageEightNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageNineNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNineNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageNineNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageANormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageANormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageANormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageBNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageBNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageBNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageCNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageCNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageCNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageDNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageDNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageDNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageENormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageENormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageENormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageFNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFNormalDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageFNormalDigit&NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageZeroNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageZeroNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageZeroNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageOneNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageOneNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageOneNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageTwoNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageTwoNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageTwoNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageThreeNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageThreeNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageThreeNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageFourNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFourNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageFourNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageFiveNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFiveNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageFiveNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageSixNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSixNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageSixNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageSevenNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSevenNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageSevenNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageEightNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageEightNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageEightNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageNineNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageNineNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageNineNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageANormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageANormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageANormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageBNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageBNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageBNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageCNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageCNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageCNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageDNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageDNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageDNormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageENormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageENormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageENormalDigit&NULL
									}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageFNormalDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFNormalDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageFNormalDigit&NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageNullDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNullDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageNullDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageNullDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageNullDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageNullDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}else{//LanguageKind
									if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageNullDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNullDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageNullDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageSuffixDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSuffixDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageSuffixDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageSuffixDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSuffixDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageSuffixDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguagePrefixDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguagePrefixDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguagePrefixDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguagePrefixDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguagePrefixDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguagePrefixDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageCarryUpDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageCarryUpDigit)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageCarryUpDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageCarryUpDigit != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageCarryUpDigit)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageCarryUpDigit & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageMinusSignOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageMinusSignOperator)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageMinusSignOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageMinusSignOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageMinusSignOperator)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageMinusSignOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
										if(StringFirstApplicationLanguagePlusSignOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguagePlusSignOperator)/sizeof(char) - 1;
										}//StringFirstApplicationLanguagePlusSignOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
										if(StringSecondApplicationLanguagePlusSignOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguagePlusSignOperator)/sizeof(char) - 1;
										}//StringSecondApplicationLanguagePlusSignOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageExponentialOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageExponentialOperator)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageExponentialOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageExponentialOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageExponentialOperator)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageExponentialOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
								if(LanguageKind == FirstApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenStringNumber){
										if(StringFirstApplicationLanguageDotOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageDotOperator)/sizeof(char) - 1;
										}//StringFirstApplicationLanguageDotOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}else if(LanguageKind == SecondApplicationLanguageKind){
									if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenStringNumber){
										if(StringSecondApplicationLanguageDotOperator != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageDotOperator)/sizeof(char) - 1;
										}//StringSecondApplicationLanguageDotOperator & NULL
									}//OriginalParameterArrayOrderNumber
								}//LanguageKind
							}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
								if(OriginalParameterArrayOrderNumber == NullCharacterBlankApplicationTokenStringNumber){
									if(StringNullCharacterBlank != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringNullCharacterBlank)/sizeof(char) - 1;
									}//StringNullCharacterBlank & NULL
								}else if(OriginalParameterArrayOrderNumber == HorizontalTabBlankApplicationTokenStringNumber){
									if(StringHorizontalTabBlank != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringHorizontalTabBlank)/sizeof(char) - 1;
									}//StringHorizontalTabBlank & NULL
								}else if(OriginalParameterArrayOrderNumber == SpaceBlankApplicationTokenStringNumber){
									if(StringSpaceBlank != NULL){
										MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSpaceBlank)/sizeof(char) - 1;
									}//StringSpaceBlank & NULL
								}//OriginalParameterArrayOrderNumber
							}//OriginalParameterArrayOrderType
							
							if(PartialOrderNumberValidityDenialMarker == 0){
								MaxOriginalOrderCharNumber = MaxOriginalParameterArrayOrderCharNumber;
								TotalOriginalOrderCharNumber = TotalOrderCharNumber;
							}//PartialOrderNumberValidityDenialMarker&0
						}//MaxOriginalPartialOrderNumber&1
						
						
					}//OriginalOrderCharNumber&0
					
					WholeOriginalOrderCharNumber = 0;
					
					if(MaxOriginalOrderCharNumber >= 1){
						OriginalOrderCharNumber = OriginalOrderCharNumber + 1;
						WholeOriginalOrderCharNumber = TotalOriginalOrderCharNumber + OriginalOrderCharNumber;
					}//MaxOriginalOrderCharNumber&1
					if(OriginalOrderCharNumber == MaxOriginalOrderCharNumber){
						OriginalOrderCharNumberEndMarker = 1;
					}//OriginalOrderCharNumber&MaxOriginalOrderCharNumber
					
					MaxPartialOrderCharNumber = 0;
					MaxOriginalPartialOrderCharNumber = 0;
					
					if(MaxOriginalOrderCharNumber >= 1){
						MaxOriginalPartialOrderCharNumber = 1;
					}//MaxOriginalOrderCharNumber&1
				}//PartialOrderCharNumber&0
				
				OriginalOrderNumberUnitOrderCharNumber = 0;
				OriginalOrderNumberUnitSubstitutingOrderCharNumber = 0;
				OrderCharNumber = 0;
				WholeOrderCharNumber = 0;
				OriginalOrderNumberUnitWholePartialOrderCharNumber = 0;
				OriginalOrderCharNumberUnitWholePartialOrderCharNumber = 0;
				OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = 0;
				OriginalOrderTypeCutOriginalOrderCharNumberUnitWholePartialOrderCharNumber = 0;
				if(MaxOriginalPartialOrderCharNumber >= 1){
					PartialOrderCharNumber = PartialOrderCharNumber + 1;
					OrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + PartialOrderCharNumber;
					WholeOrderCharNumber = TotalOrderCharNumber + OrderCharNumber;
					OriginalOrderNumberUnitOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber + PartialOrderCharNumber;
					OriginalOrderNumberUnitWholePartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber + OriginalOrderNumberUnitOrderCharNumber;
					OriginalOrderCharNumberUnitWholePartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber + PartialOrderCharNumber;
					OriginalOrderTypeCutOriginalOrderCharNumberUnitWholePartialOrderCharNumber = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber + PartialOrderCharNumber;
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						if(OriginalOrderType == ExponentialValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = 0;
						}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber + OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber + OriginalOrderNumberUnitMaxDotOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber - (OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber + MaxOriginalParameterArrayOrderCharNumber) + OrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber + OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber + OriginalOrderNumberUnitMaxDotOrderCharNumber + OriginalOrderNumberUnitMaxDecimalOrderOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber + OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderNumberUnitOrderCharNumber;
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}//OriginalOrderType
					}//PartialOrderNumberLoopTimeEndMarker&0
				}//MaxOriginalPartialOrderCharNumber&1
				
				if(PartialOrderCharNumber == MaxOriginalPartialOrderCharNumber){
					PartialOrderCharNumberEndMarker = 1;
				}//PartialOrderCharNumber&MaxOriginalPartialOrderCharNumber
				
				OriginalParameterArrayOrderCharNumber = 0;
				ParameterArrayOrderCharNumberUnitOutputDenialMarker = 0;
				
				if(MaxOriginalPartialOrderCharNumber >= 1){
					OriginalParameterArrayOrderCharNumber = OriginalOrderCharNumber;
				}//MaxOriginalPartialOrderCharNumber&1
				
				if(ParameterArrayOrderNumberUnitOutputDenialMarker != 0){
					ParameterArrayOrderCharNumberUnitOutputDenialMarker = -1;
				}//ParameterArrayOrderNumberUnitOutputDenialMarker&0
				if(OriginalParameterArrayOrderCharNumber < 1){
					ParameterArrayOrderCharNumberUnitOutputDenialMarker = 1;
				}//OriginalParameterArrayOrderCharNumber&0
				if(OriginalParameterArrayOrderCharNumber > MaxOriginalParameterArrayOrderCharNumber){
					ParameterArrayOrderCharNumberUnitOutputDenialMarker = 2;
				}//OriginalParameterArrayOrderCharNumber&0
				if(MaxOriginalPartialOrderCharNumber <= 0){
					ParameterArrayOrderCharNumberUnitOutputDenialMarker = 3;
				}//MaxOriginalPartialOrderCharNumber&0
				PartialOrderCharNumberValidityDenialMarker = 0;
				if(PartialOrderNumberValidityDenialMarker != 0){
					PartialOrderCharNumberValidityDenialMarker = -1;
				}//PartialOrderNumberValidityDenialMarker&0
				
			}//OrderCharNumberCountStartMarker&0
			
			OriginalParameterArrayOrderOneChar = (char)0;
			OriginalOneChar = (char)0;
			OneChar = (char)0;
			ParameterArrayOrderOneCharUnitOutputDenialMarker = 0;
			if(ParameterArrayOrderCharNumberUnitOutputDenialMarker != 0){
				ParameterArrayOrderOneCharUnitOutputDenialMarker = -1;
			}//ParameterArrayOrderCharNumberUnitOutputDenialMarker&0
			if(MaxOriginalOrderCharNumber <= 0){
				ParameterArrayOrderOneCharUnitOutputDenialMarker = 1;
			}//MaxOriginalOrderCharNumber&0
			
			if(ParameterArrayOrderOneCharUnitOutputDenialMarker == 0){
				if(OriginalParameterArrayOrderType == FormatStringApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == FormatStringApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = 0;
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == ValueValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringValue[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == BaseValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringBase[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == PowerValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringPower[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == FValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseF[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == DValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseD[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == LfValueApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseLF[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == RoundLeftBracketApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringRoundLeftBracket[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == RoundRightBracketApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringRoundRightBracket[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == PercentageArgumentStatementApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringPercentage[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageZeroNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageOneNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageTwoNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageThreeNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFourNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFiveNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSixNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSevenNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageEightNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNineNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageANormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageBNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageCNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageDNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageENormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageZeroNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageOneNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageTwoNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageThreeNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFourNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFiveNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSixNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSevenNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageEightNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageNineNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageANormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageBNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageCNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageDNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageENormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else{//LanguageKind
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSuffixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSuffixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguagePrefixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguagePrefixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageCarryUpDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageCarryUpDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageMinusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageMinusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguagePlusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguagePlusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageExponentialOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageExponentialOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageDotOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageDotOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == NullCharacterBlankApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringNullCharacterBlank[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == HorizontalTabBlankApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringHorizontalTabBlank[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == SpaceBlankApplicationTokenStringNumber){
						OriginalParameterArrayOrderOneChar = StringSpaceBlank[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}//OriginalParameterArrayOrderType
			}//ParameterArrayOrderOneCharUnitOutputDenialMarker&0
			if(MaxOriginalOrderCharNumber >= 1){
				if(PartialOrderCharNumberValidityDenialMarker == 0){
					OriginalOneChar = OriginalParameterArrayOrderOneChar;
				}//PartialOrderCharNumberValidityDenialMarker&0
			}//MaxOriginalOrderCharNumber&1
			
			if(MaxOriginalPartialOrderCharNumber >= 1){
				if(PartialOrderNumberLoopTimeEndMarker != 0){
					if(LoopTime == 2){
						CharDoubleValue[OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber - 1] = OriginalParameterArrayOrderOneChar;
					}else if(LoopTime == 3){
						CopyCharDoubleValue[OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber - 1] = OriginalParameterArrayOrderOneChar;
					}//LoopTime
				}//PartialOrderNumberLoopTimeEndMarker&0
			}//MaxOriginalPartialOrderCharNumber&1
			
			
			if(OrderCharNumberCountStartMarker <= 0){
				if(PartialOrderCharNumberEndMarker != 0){
					MaxPartialOrderCharNumber = PartialOrderCharNumber;
					
					OriginalOrderNumberUnitMaxPartialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
					
					if(OriginalOrderCharNumberEndMarker != 0){
						MaxOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
						if(PartialOrderNumberLoopTimeEndMarker != 0){
							if(MaxOriginalPartialOrderNumber >= 1){
								if(LoopTime == 2){
									OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
									OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
									OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
									OriginalOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderNumberUnitWholePartialOrderNumber;
								}else if(LoopTime == 3){
									CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
									CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
									CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
									CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
								}//LoopTime
								if(PartialOrderNumberValidityDenialMarker == 0){
									if(LoopTime == 2){
										OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
										OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
										OriginalValidOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalOrderNumberUnitWholePartialOrderNumber;
									}else if(LoopTime == 3){
										CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1];
										CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1];
										CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1] = OriginalValidOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialValidOrderNumber - 1];
									}//LoopTime
								}//PartialOrderNumberValidityDenialMarker&0
							}//MaxOriginalPartialOrderNumber&1
						}//PartialOrderNumberLoopTimeEndMarker&0
						
						OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber + OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
						OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber + OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
						
						OrderNumberCountStartMarker = -1;
						OriginalOrderCharNumber = 0;
						OriginalOrderCharNumberEndMarker = 0;
					}//OriginalOrderCharNumberEndMarker&0
					
					PartialOrderCharNumber = 0;
					PartialOrderCharNumberEndMarker = 0;
					
				}//PartialOrderCharNumberEndMarker&0
			}//OrderCharNumberCountStartMarker&0
			
			if(OrderNumberCountStartMarker <= 0){
				
				if(PartialOrderNumberEndMarker != 0){
					MaxPartialOrderNumber = PartialOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber + MaxPartialOrderNumber;
					MaxOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
					MaxPartialValidOrderNumber = PartialValidOrderNumber;
					OriginalOrderNumberUnitMaxPartialValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber + MaxPartialValidOrderNumber;
					MaxValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber;
					
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						if(MaxOriginalOrderNumber >= 1){
							ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber;
							ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber;
						}//MaxOriginalOrderNumber&1
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						
						if(MaxOriginalOrderNumber >= 1){
							if(PartialOrderNumberLoopTime == 1){
								
								RoundDownToZeroMarker = DummyRoundDownToZeroMarker;
								
								if(RoundDownToZeroMarker == 0){
									if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker == 0){
										CarryUpDigitOrderNumber = 1;
									}//DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker&0
								}//RoundDownToZeroMarker&0
								
								if(RoundDownToZeroMarker == 0){
									WholeDigitOrderOrderNumber = MaxPartialOrderNumber;
								}else if(RoundDownToZeroMarker != 0){
									WholeDigitOrderOrderNumber = 1;
								}//RoundDownToZeroMarker&0
								
							}//PartialOrderNumberLoopTime&1
						}//MaxOriginalOrderNumber&1
					}//OriginalOrderType
					
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitMaxPartialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeUnitNextOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
						
						if(OriginalOrderNumberEndMarker != 0){
							
							if(OriginalOrderType == ExponentialValueApplicationOrderType){
								OriginalOrderNumberUnitMaxExponentialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxExponentialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								OriginalOrderNumberUnitMaxDecimalOrderOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxDecimalOrderOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								OriginalOrderNumberUnitMaxWholeDigitOrderOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxWholeDigitOrderOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
								OriginalOrderNumberUnitMaxCarryUpDigitOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxCarryUpDigitOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == SuffixValueApplicationOrderType){
								OriginalOrderNumberUnitMaxSuffixOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxSuffixOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
								OriginalOrderNumberUnitMaxPlusOrMinusSignOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxPlusOrMinusSignOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == PrefixValueApplicationOrderType){
								OriginalOrderNumberUnitMaxPrefixOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxPrefixOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == DotValueApplicationOrderType){
								OriginalOrderNumberUnitMaxDotOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxDotOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}else if(OriginalOrderType == NullValueApplicationOrderType){
								OriginalOrderNumberUnitMaxNullOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
								OriginalOrderNumberUnitMaxNullOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
							}//OriginalOrderType
								
							if(MaxOriginalPartialOrderNumber >= 1){
								if(LoopTime == 2){
									OriginalOrderNumberUnitTotalPartialOrderCharNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
									OriginalOrderNumberUnitMaxPartialOrderCharNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
									OriginalOrderNumberUnitTotalPartialOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialOrderNumber;
									OriginalOrderNumberUnitMaxPartialOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialOrderNumber;
									OriginalOrderNumberUnitTotalPartialValidOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
									OriginalOrderNumberUnitMaxPartialValidOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialValidOrderNumber;
								}else if(LoopTime == 3){
									CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialOrderCharNumbers[WholeOrderType - 1];
									CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialOrderCharNumbers[WholeOrderType - 1];
									CopyOriginalOrderNumberUnitTotalPartialOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialOrderNumbers[WholeOrderType - 1];
									CopyOriginalOrderNumberUnitMaxPartialOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialOrderNumbers[WholeOrderType - 1];
									CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitTotalPartialValidOrderNumbers[WholeOrderType - 1];
									CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers[WholeOrderType - 1] = OriginalOrderNumberUnitMaxPartialValidOrderNumbers[WholeOrderType - 1];
								}//LoopTime
							}//MaxOriginalPartialOrderNumber&1
							
							OriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber + OriginalOrderNumberUnitMaxPartialOrderNumber;
							OriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber + OriginalOrderNumberUnitMaxPartialValidOrderNumber;
							OriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber + OriginalOrderNumberUnitMaxPartialOrderCharNumber;
							
							OrderTypeCountStartMarker = -1;
							
							OriginalOrderNumber = 0;
							OriginalOrderNumberEndMarker = 0;
						}//OriginalOrderNumberEndMarker&0
						PartialOrderNumberLoopTime = 0;
						PartialOrderNumberLoopTimeEndMarker = 0;
					}//PartialOrderNumberLoopTimeEndMarker&0
					PartialValidOrderNumber = 0;
					PartialOrderNumber = 0;
					PartialOrderNumberEndMarker = 0;
				}//PartialOrderNumberEndMarker&0
			}//OrderNumberCountStartMarker&0
			
			if(OrderTypeCountStartMarker <= 0){
				if(PartialOrderTypeEndMarker != 0){
					MaxPartialOrderType = PartialOrderType;
					OriginalOrderTypeUnitMaxPartialOrderType = OriginalOrderTypeUnitMaxPartialOrderType + MaxPartialOrderType;
					
					if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker == 0){
							PrefixOrderNumber = 0;
						}else if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= 0){
								PrefixOrderNumber = 0;
							}else if(SetWholeDigitOrderOrderNumber >= 1){
								if(SetWholeDigitOrderOrderNumber <= WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber){
									PrefixOrderNumber = 0;
								}else if(SetWholeDigitOrderOrderNumber > WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber){
									if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber <= 0){
										PrefixOrderNumber = SetWholeDigitOrderOrderNumber;
									}else if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber >= 1){
										PrefixOrderNumber = SetWholeDigitOrderOrderNumber - (WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber);
									}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber&0
								}//SetWholeDigitOrderOrderNumber & WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber
							}//SetWholeDigitOrderOrderNumber&1
						}//SetWholeDigitOrderOrderNumberMarker&0
					}//OriginalOrderType
					if(OriginalOrderTypeEndMarker != 0){
						MaxOrderType = OriginalOrderTypeUnitMaxPartialOrderType;
						
						TotalOrderType = TotalOrderType + MaxOrderType;
						LoopTimeCountStartMarker = -1;
						OriginalOrderType = 0;
						OriginalOrderTypeEndMarker = 0;
					}//OriginalOrderTypeEndMarker&0
					
					PartialOrderType = 0;
					PartialOrderTypeEndMarker = 0;
					
				}//PartialOrderTypeEndMarker&0
			}//OrderTypeCountStartMarker&0
			
			if(LoopTimeCountStartMarker <= 0){
				
				
				if(LoopTime == 1){
					if(OriginalOrderNumberUnitTotalPartialOrderCharNumbers != NULL){
						OriginalOrderNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//OriginalOrderNumberUnitTotalPartialOrderCharNumbers&NULL
					if(OriginalOrderNumberUnitMaxPartialOrderCharNumbers != NULL){
						OriginalOrderNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//OriginalOrderNumberUnitMaxPartialOrderCharNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialOrderNumbers != NULL){
						OriginalOrderNumberUnitTotalPartialOrderNumbers = NULL;
					}//OriginalOrderNumberUnitTotalPartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitMaxPartialOrderNumbers != NULL){
						OriginalOrderNumberUnitMaxPartialOrderNumbers = NULL;
					}//OriginalOrderNumberUnitMaxPartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialValidOrderNumbers != NULL){
						OriginalOrderNumberUnitTotalPartialValidOrderNumbers = NULL;
					}//OriginalOrderNumberUnitTotalPartialValidOrderNumbers&NULL
					if(OriginalOrderNumberUnitMaxPartialValidOrderNumbers != NULL){
						OriginalOrderNumberUnitMaxPartialValidOrderNumbers = NULL;
					}//OriginalOrderNumberUnitMaxPartialValidOrderNumbers&NULL
					if(TotalOrderType >= 1){
						OriginalOrderNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						OriginalOrderNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						OriginalOrderNumberUnitTotalPartialOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						OriginalOrderNumberUnitMaxPartialOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						OriginalOrderNumberUnitTotalPartialValidOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						OriginalOrderNumberUnitMaxPartialValidOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
					}//TotalOrderType&1
					
					if(OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers != NULL){
						OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers&NULL
					if(OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(OriginalOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						OriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//OriginalOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialOrderNumber >= 1){
						OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						OriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						OriginalOrderCharNumberUnitWholePartialOrderNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
					}//OriginalOrderNumberUnitTotalPartialOrderNumber&1
					
					if(OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers != NULL){
						OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers&NULL
					if(OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(OriginalValidOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						OriginalValidOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//OriginalValidOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialValidOrderNumber >= 1){
						OriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
						OriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
						OriginalValidOrderCharNumberUnitWholePartialOrderNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
					}//OriginalOrderNumberUnitTotalPartialValidOrderNumber&1
					
					if(CharDoubleValue != NULL){
						CharDoubleValue = NULL;
					}//CharDoubleValue&NULL
					CharDoubleValue = (char*)malloc(sizeof(char) * OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1);
					CharDoubleValue[(OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1) - 1] = '\0';
					
				}else if(LoopTime == 2){
					if(CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers != NULL){
						CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers != NULL){
						CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderNumberUnitTotalPartialOrderNumbers != NULL){
						CopyOriginalOrderNumberUnitTotalPartialOrderNumbers = NULL;
					}//CopyOriginalOrderNumberUnitTotalPartialOrderNumbers&NULL
					if(CopyOriginalOrderNumberUnitMaxPartialOrderNumbers != NULL){
						CopyOriginalOrderNumberUnitMaxPartialOrderNumbers = NULL;
					}//CopyOriginalOrderNumberUnitMaxPartialOrderNumbers&NULL
					if(CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers != NULL){
						CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers = NULL;
					}//CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers&NULL
					if(CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers != NULL){
						CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers = NULL;
					}//CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers&NULL
					if(TotalOrderType >= 1){
						CopyOriginalOrderNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						CopyOriginalOrderNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						CopyOriginalOrderNumberUnitTotalPartialOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						CopyOriginalOrderNumberUnitMaxPartialOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						CopyOriginalOrderNumberUnitTotalPartialValidOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						CopyOriginalOrderNumberUnitMaxPartialValidOrderNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
					}//TotalOrderType&1
					
					if(CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers != NULL){
						CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialOrderNumber >= 1){
						CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						CopyOriginalOrderTypeCutOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
					}//OriginalOrderNumberUnitTotalPartialOrderNumber&1
					
					if(CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers != NULL){
						CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
					}//CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers&NULL
					if(CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers != NULL){
						CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
					}//CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers&NULL
					if(CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialValidOrderNumber >= 1){
						CopyOriginalValidOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
						CopyOriginalValidOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
						CopyOriginalValidOrderCharNumberUnitWholePartialOrderNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialValidOrderNumber);
					}//OriginalOrderNumberUnitTotalPartialValidOrderNumber&1
					
					if(CopyCharDoubleValue != NULL){
						CopyCharDoubleValue = NULL;
					}//CopyCharDoubleValue&NULL
					CopyCharDoubleValue = (char*)malloc(sizeof(char) * OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1);
					CopyCharDoubleValue[(OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1) - 1] = '\0';
					
				}//LoopTime
				if(LoopTimeModulo2Plus1EndMarker != 0){
					LoopTimeModulo2Plus1 = 0;
					LoopTimeModulo2Plus1EndMarker = 0;
				}//LoopTimeModulo2Plus1EndMarker&0
				if(LoopTimeEndMarker != 0){
					ValueToCharArrayEndMarker = -1;
					LoopTime = 0;
					LoopTimeEndMarker = 0;
					
					LoopTimeModulo2Plus1 = 0;
					LoopTimeModulo2Plus1EndMarker = 0;
				}//LoopTimeEndMarker
			}//LoopTimeCountStartMarker&0
			
		}while(ValueToCharArrayEndMarker >= 1);
			
		return(CopyCharDoubleValue);
	}//ValueToCharArray