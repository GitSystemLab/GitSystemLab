#include<stdio.h>
#include<stdlib.h>
	
	static char* DoubleToCharArray(double Value0,int DecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumber0,
		int SetDecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumberMarker0,int SetDecimalOrderOrderNumberMarker0,
		int PlusOrMinusSignMarker0,int RoundUpOneDigit0, int IntValueBase0, int LanguageKind0){
		
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
			
		const char CharLowercaseD[] = {CharAsciiLowercaseD,'\0'};
		const char CharLowercaseF[] = {CharAsciiLowercaseF,'\0'};
		const char CharLowercaseLF[] = {CharAsciiLowercaseL,CharAsciiLowercaseF,'\0'};
			
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

		const int UndefinedApplicationTokenSubStringNumber = 0;
		const int FormatStringApplicationTokenSubStringNumber = 1;
		const int MaxFormatStringApplicationTokenSubStringNumber = 1;
		const int ValueValueApplicationTokenSubStringNumber = 1;
		const int BaseValueApplicationTokenSubStringNumber = 2;
		const int PowerValueApplicationTokenSubStringNumber = 3;
		const int DValueApplicationTokenSubStringNumber = 4;
		const int FValueApplicationTokenSubStringNumber = 5;
		const int LfValueApplicationTokenSubStringNumber = 6;
		const int MaxValueApplicationTokenSubStringNumber = 6;
		const int RoundLeftBracketApplicationTokenSubStringNumber = 1;
		const int MaxLeftBracketApplicationTokenSubStringNumber = 1;
		const int RoundRightBracketApplicationTokenSubStringNumber = 1;
		const int MaxRightBracketApplicationTokenSubStringNumber = 1;
		const int PercentageArgumentStatementApplicationTokenSubStringNumber = 1;
		const int MaxArgumentStatementApplicationTokenSubStringNumber = 1;
		const int ZeroNormalDigitApplicationTokenSubStringNumber = 1;
		const int OneNormalDigitApplicationTokenSubStringNumber = 2;
		const int TwoNormalDigitApplicationTokenSubStringNumber = 3;
		const int ThreeNormalDigitApplicationTokenSubStringNumber = 4;
		const int FourNormalDigitApplicationTokenSubStringNumber = 5;
		const int FiveNormalDigitApplicationTokenSubStringNumber = 6;
		const int SixNormalDigitApplicationTokenSubStringNumber = 7;
		const int SevenNormalDigitApplicationTokenSubStringNumber = 8;
		const int EightNormalDigitApplicationTokenSubStringNumber = 9;
		const int NineNormalDigitApplicationTokenSubStringNumber = 10;
		const int ANormalDigitApplicationTokenSubStringNumber = 11;
		const int BNormalDigitApplicationTokenSubStringNumber = 12;
		const int CNormalDigitApplicationTokenSubStringNumber = 13;
		const int DNormalDigitApplicationTokenSubStringNumber = 14;
		const int ENormalDigitApplicationTokenSubStringNumber = 15;
		const int FNormalDigitApplicationTokenSubStringNumber = 16;
		const int MaxNormalDigitApplicationTokenSubStringNumber = 16;
		const int NullDigitApplicationTokenSubStringNumber = 1;
		const int MaxNullDigitApplicationTokenSubStringNumber = 1;
		const int SuffixDigitApplicationTokenSubStringNumber = 1;
		const int MaxSuffixDigitApplicationTokenSubStringNumber = 1;
		const int PrefixDigitApplicationTokenSubStringNumber = 1;
		const int MaxPrefixDigitApplicationTokenSubStringNumber = 1;
		const int CarryUpDigitApplicationTokenSubStringNumber = 1;
		const int MaxCarryUpDigitApplicationTokenSubStringNumber = 1;
		const int MinusSignOperatorApplicationTokenSubStringNumber = 1;
		const int MaxMinusSignOperatorApplicationTokenSubStringNumber = 1;
		const int PlusSignOperatorApplicationTokenSubStringNumber = 1;
		const int MaxPlusSignOperatorApplicationTokenSubStringNumber = 1;
		const int ExponentialOperatorApplicationTokenSubStringNumber = 1;
		const int MaxExponentialOperatorApplicationTokenSubStringNumber = 1;
		const int DotOperatorApplicationTokenSubStringNumber = 1;
		const int MaxDotOperatorApplicationTokenSubStringNumber = 1;
		const int NullCharacterBlankApplicationTokenSubStringNumber = 1;
		const int HorizontalTabBlankApplicationTokenSubStringNumber = 2;
		const int SpaceBlankApplicationTokenSubStringNumber = 3;
		const int MaxBlankApplicationTokenSubStringNumber = 3;
			
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
		int* PartialOrderTypeCutTotalPartialOrderCharNumbers = NULL;
		int* OriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
		int* CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = NULL;
		int* CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = NULL;
		int* CopyPartialOrderTypeCutTotalPartialOrderCharNumbers = NULL;
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
		const int DecimalOrderOrderNumberValueApplicationOrderType = 1;
		const int WholeDigitOrderOrderNumberValueApplicationOrderType = 2;
		const int CarryUpDigitValueApplicationOrderType = 3;
		const int SuffixValueApplicationOrderType = 4;
		const int PrefixValueApplicationOrderType = 5;
		const int PlusOrMinusSignValueApplicationOrderType = 6;
		const int DotValueApplicationOrderType = 7;
		const int NullValueApplicationOrderType = 8;
		const int MaxValueApplicationOrderType = 8;
			
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
		int PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int OriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
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
			
		int PartialOrderCharNumberLoopTime = 0;
		int PartialOrderCharNumberLoopTimeEndMarker = 0;
		int MaxPartialOrderCharNumberLoopTime = 0;
		int OriginalOrderCharNumber = 0;
		int MaxOriginalOrderCharNumber = 0;
		int TotalOriginalOrderCharNumber = 0;
		int OriginalOrderCharNumberEndMarker = 0;
		int WholeOriginalOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitPartialOrderCharNumber = 0;
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
		int PartialOrderTypeLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderTypeCutTotalPartialOrderCharNumber = 0;
		int PartialOrderTypeLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
			
		int OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
			
		int OriginalOrderCharNumberCutTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberCutTotalPartialOrderCharNumber = 0;
			
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
		int PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitTotalPartialOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindTotalOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxExponentialOrderNumber = 0;
		int PartialOrderTypeUnitMaxDecimalOrderOrderNumber = 0;
		int PartialOrderTypeUnitMaxWholeDigitOrderOrderNumber = 0;
		int PartialOrderTypeUnitMaxCarryUpDigitOrderNumber = 0;
		int PartialOrderTypeUnitMaxSuffixOrderNumber = 0;
		int PartialOrderTypeUnitMaxPlusOrMinusSignOrderNumber = 0;
		int PartialOrderTypeUnitMaxPrefixOrderNumber = 0;
		int PartialOrderTypeUnitMaxDotOrderNumber = 0;
		int PartialOrderTypeUnitMaxNullOrderNumber = 0;
		int PartialOrderTypeUnitMaxExponentialOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxDecimalOrderOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxSuffixOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxPrefixOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxDotOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxNullOrderCharNumber = 0;
		int LoopTimeModulo2Plus1 = 0;
		int LoopTimeModulo2Plus1EndMarker = 0;
		const int MaxLoopTimeModulo2Plus1 = 2;
		int PartialOrderTypeValidityDenialMarker = 0;
		int PartialOrderNumberValidityDenialMarker = 0;
		int PartialOrderCharNumberValidityDenialMarker = 0;
		int OriginalOrderNumberUnitSubstitutingOrderCharNumber = 0;
		int SuffixOrderNumber = 0;
		int PrefixOrderNumber = 0;
		int PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = 0;
		int PartialOrderTypeUnitTotalPartialOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber = 0;
		int PartialOrderTypeUnitMaxPartialOrderNumber = 0;
			
		int PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderTypeUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderTypeUnitMaxPartialValidOrderNumber = 0;
			
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
			
		int OriginalOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int OriginalOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = 0;
		int PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = 0;
		int PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = 0;
		
		do{//ValueToCharArrayEndMarker&0
			if(LoopTimeCountStartMarker <= 0){
				if(LoopTime == 0){
					ValueToCharArrayEndMarker = 1;
					MaxLoopTime = 3;
					PartialOrderTypeUnitMaxExponentialOrderNumber = 0;
					PartialOrderTypeUnitMaxDecimalOrderOrderNumber = 0;
					PartialOrderTypeUnitMaxCarryUpDigitOrderNumber = 0;
					PartialOrderTypeUnitMaxSuffixOrderNumber = 0;
					PartialOrderTypeUnitMaxPlusOrMinusSignOrderNumber = 0;
					PartialOrderTypeUnitMaxPrefixOrderNumber = 0;
					PartialOrderTypeUnitMaxDotOrderNumber = 0;
					PartialOrderTypeUnitMaxNullOrderNumber = 0;
					PartialOrderTypeUnitMaxWholeDigitOrderOrderNumber = 0;
					PartialOrderTypeUnitMaxExponentialOrderCharNumber = 0;
					PartialOrderTypeUnitMaxDecimalOrderOrderCharNumber = 0;
					PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber = 0;
					PartialOrderTypeUnitMaxSuffixOrderCharNumber = 0;
					PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber = 0;
					PartialOrderTypeUnitMaxPrefixOrderCharNumber = 0;
					PartialOrderTypeUnitMaxDotOrderCharNumber = 0;
					PartialOrderTypeUnitMaxNullOrderCharNumber = 0;
					PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber = 0;
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
				PartialOrderTypeUnitTotalPartialOrderCharNumber = 0;
				OriginalOrderTypeUnitTotalPartialOrderCharNumber = 0;
				
				PartialOrderTypeUnitTotalPartialOrderNumber = 0;
				PartialOrderTypeUnitTotalPartialValidOrderNumber = 0;
				
			}//LoopTimeCountStartMarker&0
			
			if(OrderTypeCountStartMarker <= 0){
				if(PartialOrderType == 0){
					if(PartialOrderTypeLoopTime == 0){
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
							
							OriginalOrderTypeUnitMaxPartialOrderCharNumber = 0;
							
						}//OriginalOrderType&0
						
						WholeOriginalOrderType = 0;
						
						if(MaxOriginalOrderType >= 1){
							OriginalOrderType = OriginalOrderType + 1;
							WholeOriginalOrderType = TotalOriginalOrderType + OriginalOrderType;
						}//MaxOriginalOrderType&1
						if(OriginalOrderType == MaxOriginalOrderType){
							OriginalOrderTypeEndMarker = 1;
						}//OriginalOrderType&MaxOriginalOrderType
						
						MaxPartialOrderTypeLoopTime = 0;
						
						if(MaxOriginalOrderType >= 1){
							MaxPartialOrderTypeLoopTime = 1;
						}//MaxOriginalOrderType&1
						
						PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber;
						PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
						PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
						PartialOrderTypeLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
						PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeUnitTotalPartialOrderCharNumber;
						
						PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber;
						PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = OriginalOrderTypeUnitMaxPartialOrderCharNumber;
						
						PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderTypeUnitTotalPartialOrderNumber;
						PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderTypeUnitTotalPartialValidOrderNumber;
						
					}//PartialOrderTypeLoopTime&0
					
					MaxPartialOrderType = 0;
					MaxOriginalPartialOrderType = 0;
					
					if(MaxPartialOrderTypeLoopTime >= 1){
						PartialOrderTypeLoopTime = PartialOrderTypeLoopTime + 1;
					}//MaxPartialOrderTypeLoopTime&1
					if(PartialOrderTypeLoopTime == MaxPartialOrderTypeLoopTime){
						PartialOrderTypeLoopTimeEndMarker = 1;
					}//PartialOrderTypeLoopTime&MaxPartialOrderTypeLoopTime
					if(MaxPartialOrderTypeLoopTime >= 1){
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							MaxOriginalPartialOrderType = 1;
						}//OriginalOrderType
					}//MaxPartialOrderTypeLoopTime&1
					
					OriginalOrderNumberUnitTotalPartialOrderNumber = PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber;
					OriginalOrderNumberUnitTotalPartialValidOrderNumber = PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber;
					OriginalOrderNumberUnitTotalPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
					
					OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = 0;
					PartialOrderTypeCutTotalPartialOrderCharNumber = 0;
					
					PartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber;
					PartialOrderTypeUnitMaxPartialOrderCharNumber = 0;
					OriginalOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber;
					OriginalOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderTypeLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber;
					
					PartialOrderTypeUnitMaxPartialOrderNumber = 0;
					PartialOrderTypeUnitMaxPartialValidOrderNumber = 0;
					PartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber;
					PartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderTypeLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber;
					
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
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
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
									MaxOriginalParameterArrayOrderNumber = MaxFormatStringApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxValueApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxLeftBracketApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxRightBracketApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxArgumentStatementApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxNormalDigitApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxNullDigitApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxSuffixDigitApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxPrefixDigitApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxCarryUpDigitApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxMinusSignOperatorApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxPlusSignOperatorApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxExponentialOperatorApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxDotOperatorApplicationTokenSubStringNumber;
								}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
									MaxOriginalParameterArrayOrderNumber = MaxBlankApplicationTokenSubStringNumber;
								}//OriginalParameterArrayOrderType
								
								if(PartialOrderTypeValidityDenialMarker == 0){
									TotalOriginalOrderNumber = TotalOrderNumber;
									if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
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
							OriginalOrderNumberUnitMaxPartialOrderCharNumber = 0;
							
						}//OriginalOrderNumber&0
						
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
						
						PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderTypeCutTotalPartialOrderCharNumber;
						
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
						
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeUnitTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber;
						PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = OriginalOrderTypeUnitMaxPartialOrderCharNumber;
						
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber = PartialOrderTypeUnitMaxPartialValidOrderNumber;
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderTypeUnitTotalPartialOrderNumber;
						PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderTypeUnitTotalPartialValidOrderNumber;
						
						
						
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
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
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
					
					OriginalOrderNumberUnitTotalPartialOrderNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber;
					OriginalOrderNumberUnitTotalPartialValidOrderNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber;
					OriginalOrderNumberUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderNumberUnitMaxPartialValidOrderNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber;
					PartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber;
					
					PartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber;
					PartialOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber;
					
					OriginalOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber;
					OriginalOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber;
					
					PartialOrderTypeUnitMaxPartialOrderNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber;
					PartialOrderTypeUnitMaxPartialValidOrderNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber;
					PartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber;
					PartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber;
					
					
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
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetDecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 2;
							}//PartialOrderNumber&SetDecimalOrderOrderNumber
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 3;
								}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						
						if(DecimalOrderOrderNumber <= 0){
							PartialOrderNumberValidityDenialMarker = 4;
						}else if(DecimalOrderOrderNumber >= 1){
							if(PartialOrderNumber > DecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 5;
							}//PartialOrderNumber&
						}//DecimalOrderOrderNumber&0
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 6;
							}//PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 7;
								}//PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						if(PartialOrderNumberLoopTime >= 2){
							if(PartialOrderNumber > WholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 8;
							}//PartialOrderNumber&
						}//PartialOrderNumberLoopTime&2
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 9;
							}//WholeDigitOrderOrderNumber + PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 10;
								}//WholeDigitOrderOrderNumber + PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						if(CarryUpDigitOrderNumber == 0){
							PartialOrderNumberValidityDenialMarker = 11;
						}//CarryUpDigitOrderNumber&0
					}else if(OriginalOrderType == SuffixValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(DecimalOrderOrderNumber <= -1){
								if(PartialOrderNumber > SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 12;
								}//DecimalOrderOrderNumber + PartialOrderNumber&SetDecimalOrderOrderNumber
							}else if(DecimalOrderOrderNumber >= 0){
								if(DecimalOrderOrderNumber + PartialOrderNumber > SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 13;
								}//DecimalOrderOrderNumber + PartialOrderNumber&SetDecimalOrderOrderNumber
							}//DecimalOrderOrderNumber&0
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(DecimalOrderOrderNumber <= -1){
									if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
										PartialOrderNumberValidityDenialMarker = 14;
									}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
								}else if(DecimalOrderOrderNumber >= 0){
									if(DecimalOrderOrderNumber + PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
										PartialOrderNumberValidityDenialMarker = 15;
									}//DecimalOrderOrderNumber + PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
								}//DecimalOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SuffixOrderNumber == 0){
							PartialOrderNumberValidityDenialMarker = 16;
						}//SuffixOrderNumber&0
					}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 17;
							}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 18;
								}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
					}else if(OriginalOrderType == PrefixValueApplicationOrderType){
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber > SetWholeDigitOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 19;
							}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
						if(SetDecimalOrderOrderNumberMarker != 0){
							if(SetDecimalOrderOrderNumber <= -1){
								if(WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber < 1 - SetDecimalOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 20;
								}//WholeDigitOrderOrderNumber + CarryUpDigitOrderNumber + PartialOrderNumber&ValueStringMinWholeDigitOrderOrderNumber
							}//SetDecimalOrderOrderNumber&-1
						}//SetDecimalOrderOrderNumberMarker&0
						if(PrefixOrderNumber == 0){
							PartialOrderNumberValidityDenialMarker = 21;
						}//PrefixOrderNumber&0
					}else if(OriginalOrderType == DotValueApplicationOrderType){
						if(SetDecimalOrderOrderNumberMarker == 0){
							if(DecimalOrderOrderNumber <= 0){
								PartialOrderNumberValidityDenialMarker = 22;
							}//DecimalOrderOrderNumber
						}else if(SetDecimalOrderOrderNumberMarker != 0){
							if(PartialOrderNumber > SetDecimalOrderOrderNumber){
								PartialOrderNumberValidityDenialMarker = 23;
							}//PartialOrderNumber&SetDecimalOrderOrderNumber
						}//SetDecimalOrderOrderNumberMarker&0
						if(SetWholeDigitOrderOrderNumberMarker != 0){
							if(SetWholeDigitOrderOrderNumber <= -1){
								if(PartialOrderNumber < 1 - SetWholeDigitOrderOrderNumber){
									PartialOrderNumberValidityDenialMarker = 24;
								}//PartialOrderNumber & 1 - SetWholeDigitOrderOrderNumber
							}//SetWholeDigitOrderOrderNumber
						}//SetWholeDigitOrderOrderNumberMarker&0
					}else if(OriginalOrderType == NullValueApplicationOrderType){
						if(OriginalOrderNumberUnitTotalPartialOrderCharNumber >= 1){
							PartialOrderNumberValidityDenialMarker = 25;
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
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = OneDigit + 1;
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = OneDigit + 1;
					}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = CarryUpDigitApplicationTokenSubStringNumber;
					}else if(OriginalOrderType == SuffixValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = SuffixDigitApplicationTokenSubStringNumber;
					}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
						if(PlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = UndefinedApplicationTokenSubStringNumber;
						}else if(PlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = MinusSignOperatorApplicationTokenSubStringNumber;
						}else if(PlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
							OriginalParameterArrayOrderNumber = PlusSignOperatorApplicationTokenSubStringNumber;
						}//PlusOrMinusSignStatus
					}else if(OriginalOrderType == PrefixValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = PrefixDigitApplicationTokenSubStringNumber;
					}else if(OriginalOrderType == DotValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = DotOperatorApplicationTokenSubStringNumber;
					}else if(OriginalOrderType == NullValueApplicationOrderType){
						OriginalParameterArrayOrderNumber = NullDigitApplicationTokenSubStringNumber;
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
					if(PartialOrderCharNumberLoopTime == 0){
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
									if(OriginalParameterArrayOrderNumber == FormatStringApplicationTokenSubStringNumber){
										MaxOriginalParameterArrayOrderCharNumber = 0;
									}//OriginalParameterArrayOrderNumber
								}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
									if(OriginalParameterArrayOrderNumber == ValueValueApplicationTokenSubStringNumber){
										if(StringValue != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringValue)/sizeof(char) - 1;
										}//StringValue&NULL
									}else if(OriginalParameterArrayOrderNumber == BaseValueApplicationTokenSubStringNumber){
										if(StringBase != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringBase)/sizeof(char) - 1;
										}//StringBase&NULL
									}else if(OriginalParameterArrayOrderNumber == PowerValueApplicationTokenSubStringNumber){
										if(StringPower != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringPower)/sizeof(char) - 1;
										}//StringPower&NULL
									}else if(OriginalParameterArrayOrderNumber == FValueApplicationTokenSubStringNumber){
										if(StringLowercaseF != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseF)/sizeof(char) - 1;
										}//StringLowercaseF&NULL
									}else if(OriginalParameterArrayOrderNumber == DValueApplicationTokenSubStringNumber){
										if(StringLowercaseD != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseD)/sizeof(char) - 1;
										}//StringLowercaseD&NULL
									}else if(OriginalParameterArrayOrderNumber == LfValueApplicationTokenSubStringNumber){
										if(StringLowercaseLF != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringLowercaseLF)/sizeof(char) - 1;
										}//StringLowercaseLF&NULL
									}//OriginalParameterArrayOrderNumber
								}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
									if(OriginalParameterArrayOrderNumber == RoundLeftBracketApplicationTokenSubStringNumber){
										if(StringRoundLeftBracket != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringRoundLeftBracket)/sizeof(char) - 1;
										}//StringRoundLeftBracket&NULL
									}//OriginalParameterArrayOrderNumber
								}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
									if(OriginalParameterArrayOrderNumber == RoundRightBracketApplicationTokenSubStringNumber){
										if(StringRoundRightBracket != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringRoundRightBracket)/sizeof(char) - 1;
										}//StringRoundRightBracket&NULL
									}//OriginalParameterArrayOrderNumber
								}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
									if(OriginalParameterArrayOrderNumber == PercentageArgumentStatementApplicationTokenSubStringNumber){
										if(StringPercentage != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringPercentage)/sizeof(char) - 1;
										}//StringPercentage&NULL
									}//OriginalParameterArrayOrderNumber
								}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageZeroNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageZeroNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageZeroNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageOneNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageOneNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageOneNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageTwoNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageTwoNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageTwoNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageThreeNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageThreeNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageThreeNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageFourNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFourNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageFourNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageFiveNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFiveNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageFiveNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageSixNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSixNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageSixNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageSevenNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSevenNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageSevenNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageEightNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageEightNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageEightNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageNineNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNineNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageNineNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageANormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageANormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageANormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageBNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageBNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageBNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageCNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageCNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageCNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageDNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageDNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageDNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageENormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageENormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageENormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageFNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageFNormalDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageFNormalDigit&NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageZeroNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageZeroNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageZeroNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageOneNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageOneNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageOneNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageTwoNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageTwoNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageTwoNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageThreeNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageThreeNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageThreeNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageFourNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFourNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageFourNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageFiveNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFiveNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageFiveNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageSixNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSixNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageSixNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageSevenNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSevenNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageSevenNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageEightNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageEightNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageEightNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageNineNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageNineNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageNineNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageANormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageANormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageANormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageBNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageBNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageBNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageCNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageCNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageCNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageDNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageDNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageDNormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageENormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageENormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageENormalDigit&NULL
										}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageFNormalDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageFNormalDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageFNormalDigit&NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageNullDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNullDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageNullDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageNullDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageNullDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageNullDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}else{//LanguageKind
										if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageNullDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageNullDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageNullDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageSuffixDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageSuffixDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageSuffixDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageSuffixDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageSuffixDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageSuffixDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguagePrefixDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguagePrefixDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguagePrefixDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguagePrefixDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguagePrefixDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguagePrefixDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageCarryUpDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageCarryUpDigit)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageCarryUpDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageCarryUpDigit != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageCarryUpDigit)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageCarryUpDigit & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageMinusSignOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageMinusSignOperator)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageMinusSignOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageMinusSignOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageMinusSignOperator)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageMinusSignOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguagePlusSignOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguagePlusSignOperator)/sizeof(char) - 1;
											}//StringFirstApplicationLanguagePlusSignOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguagePlusSignOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguagePlusSignOperator)/sizeof(char) - 1;
											}//StringSecondApplicationLanguagePlusSignOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageExponentialOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageExponentialOperator)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageExponentialOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageExponentialOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageExponentialOperator)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageExponentialOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
									if(LanguageKind == FirstApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenSubStringNumber){
											if(StringFirstApplicationLanguageDotOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringFirstApplicationLanguageDotOperator)/sizeof(char) - 1;
											}//StringFirstApplicationLanguageDotOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}else if(LanguageKind == SecondApplicationLanguageKind){
										if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenSubStringNumber){
											if(StringSecondApplicationLanguageDotOperator != NULL){
												MaxOriginalParameterArrayOrderCharNumber = sizeof(StringSecondApplicationLanguageDotOperator)/sizeof(char) - 1;
											}//StringSecondApplicationLanguageDotOperator & NULL
										}//OriginalParameterArrayOrderNumber
									}//LanguageKind
								}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
									if(OriginalParameterArrayOrderNumber == NullCharacterBlankApplicationTokenSubStringNumber){
										if(StringNullCharacterBlank != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringNullCharacterBlank)/sizeof(char) - 1;
										}//StringNullCharacterBlank & NULL
									}else if(OriginalParameterArrayOrderNumber == HorizontalTabBlankApplicationTokenSubStringNumber){
										if(StringHorizontalTabBlank != NULL){
											MaxOriginalParameterArrayOrderCharNumber = sizeof(StringHorizontalTabBlank)/sizeof(char) - 1;
										}//StringHorizontalTabBlank & NULL
									}else if(OriginalParameterArrayOrderNumber == SpaceBlankApplicationTokenSubStringNumber){
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
							
							OriginalOrderCharNumberCutTotalPartialOrderCharNumber = 0;
							
						}//OriginalOrderCharNumber&0
							
						WholeOriginalOrderCharNumber = 0;
					
						if(MaxOriginalOrderCharNumber >= 1){
							OriginalOrderCharNumber = OriginalOrderCharNumber + 1;
							WholeOriginalOrderCharNumber = TotalOriginalOrderCharNumber + OriginalOrderCharNumber;
						}//MaxOriginalOrderCharNumber&1
						if(OriginalOrderCharNumber == MaxOriginalOrderCharNumber){
							OriginalOrderCharNumberEndMarker = 1;
						}//OriginalOrderCharNumber&MaxOriginalOrderCharNumber
						
						MaxPartialOrderCharNumberLoopTime = 0;
						
						if(MaxOriginalOrderCharNumber >= 1){
							MaxPartialOrderCharNumberLoopTime = 1;
						}//MaxOriginalOrderCharNumber&1
						
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber = OriginalOrderNumberUnitTotalPartialOrderNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber = OriginalOrderNumberUnitTotalPartialValidOrderNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber = OriginalOrderNumberUnitTotalPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber = OriginalOrderNumberUnitMaxPartialValidOrderNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
						
						PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderTypeCutTotalPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberCutTotalPartialOrderCharNumber = OriginalOrderCharNumberCutTotalPartialOrderCharNumber;
						
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeUnitTotalPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
						
						PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber;
						PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber = OriginalOrderTypeUnitMaxPartialOrderCharNumber;
						
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber = PartialOrderTypeUnitMaxPartialValidOrderNumber;
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderTypeUnitTotalPartialOrderNumber;
						PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderTypeUnitTotalPartialValidOrderNumber;
						
						
					}//PartialOrderCharNumberLoopTime&0
					
					if(MaxPartialOrderCharNumberLoopTime >= 1){
						PartialOrderCharNumberLoopTime = PartialOrderCharNumberLoopTime + 1;
					}//MaxPartialOrderCharNumberLoopTime&1
					if(PartialOrderCharNumberLoopTime == MaxPartialOrderCharNumberLoopTime){
						PartialOrderCharNumberLoopTimeEndMarker = 1;
					}//PartialOrderCharNumberLoopTime&MaxPartialOrderCharNumberLoopTime
					
					MaxPartialOrderCharNumber = 0;
					MaxOriginalPartialOrderCharNumber = 0;
					if(MaxPartialOrderCharNumberLoopTime >= 1){
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							MaxOriginalPartialOrderCharNumber = 1;
						}//OriginalOrderType
					}//MaxPartialOrderCharNumberLoopTime&1
					
					OriginalOrderNumberUnitTotalPartialOrderNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderNumber;
					OriginalOrderNumberUnitTotalPartialValidOrderNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialValidOrderNumber;
					OriginalOrderNumberUnitTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitTotalPartialOrderCharNumber;
					OriginalOrderNumberUnitMaxPartialValidOrderNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialValidOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderNumber;
					OriginalOrderNumberUnitMaxPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderNumberUnitMaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
					
					OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber;
					PartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeCutTotalPartialOrderCharNumber;
					OriginalOrderCharNumberCutTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberCutTotalPartialOrderCharNumber;
					
					PartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderCharNumber;
					PartialOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
					
					OriginalOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitTotalPartialOrderCharNumber;
					OriginalOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderCharNumberLoopTimeRewindOriginalOrderTypeUnitMaxPartialOrderCharNumber;
					
					PartialOrderTypeUnitMaxPartialOrderNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialOrderNumber;
					PartialOrderTypeUnitMaxPartialValidOrderNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitMaxPartialValidOrderNumber;
					PartialOrderTypeUnitTotalPartialOrderNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialOrderNumber;
					PartialOrderTypeUnitTotalPartialValidOrderNumber = PartialOrderCharNumberLoopTimeRewindPartialOrderTypeUnitTotalPartialValidOrderNumber;
					
					
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
					OriginalOrderTypeCutOriginalOrderCharNumberUnitWholePartialOrderCharNumber = PartialOrderTypeCutTotalPartialOrderCharNumber + PartialOrderCharNumber;
					OriginalOrderCharNumberUnitPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + PartialOrderCharNumber;
					
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber - (OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber + MaxOriginalPartialOrderCharNumber * MaxOriginalOrderCharNumber) + OriginalOrderCharNumberUnitPartialOrderCharNumber;
						}else{//OriginalOrderType
							OriginalOrderNumberUnitSubstitutingOrderCharNumber = OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber + OriginalOrderCharNumberUnitPartialOrderCharNumber;
						}//OriginalOrderType
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + PartialOrderTypeUnitMaxPrefixOrderCharNumber + PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber + PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber + PartialOrderTypeUnitMaxDotOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + PartialOrderTypeUnitMaxPrefixOrderCharNumber + PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + PartialOrderTypeUnitMaxPrefixOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + PartialOrderTypeUnitMaxPrefixOrderCharNumber + PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber + PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber + PartialOrderTypeUnitMaxDotOrderCharNumber + PartialOrderTypeUnitMaxDecimalOrderOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							OriginalOrderNumberUnitWholeSubstitutingPartialOrderCharNumber = OriginalOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber + PartialOrderTypeUnitMaxPrefixOrderCharNumber + PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber + PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber + OriginalOrderNumberUnitSubstitutingOrderCharNumber;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
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
					if(OriginalParameterArrayOrderNumber == FormatStringApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = 0;
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == ValueApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == ValueValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringValue[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == BaseValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringBase[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == PowerValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringPower[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == FValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseF[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == DValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseD[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == LfValueApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringLowercaseLF[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == LeftBracketApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == RoundLeftBracketApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringRoundLeftBracket[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == RightBracketApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == RoundRightBracketApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringRoundRightBracket[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == ArgumentStatementApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == PercentageArgumentStatementApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringPercentage[OriginalParameterArrayOrderCharNumber - 1];
					}//OriginalParameterArrayOrderNumber
				}else if(OriginalParameterArrayOrderType == DigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageZeroNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageOneNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageTwoNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageThreeNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFourNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFiveNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSixNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSevenNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageEightNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNineNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageANormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageBNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageCNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageDNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageENormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageFNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ZeroNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageZeroNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == OneNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageOneNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == TwoNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageTwoNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ThreeNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageThreeNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FourNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFourNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FiveNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFiveNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SixNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSixNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == SevenNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSevenNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == EightNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageEightNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == NineNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageNineNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ANormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageANormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == BNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageBNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == CNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageCNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == DNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageDNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == ENormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageENormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}else if(OriginalParameterArrayOrderNumber == FNormalDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageFNormalDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == NullDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else{//LanguageKind
						if(OriginalParameterArrayOrderNumber == NullDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageNullDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == SuffixDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageSuffixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == SuffixDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageSuffixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == PrefixDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguagePrefixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PrefixDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguagePrefixDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == CarryUpDigitApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageCarryUpDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == CarryUpDigitApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageCarryUpDigit[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == MinusSignOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageMinusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == MinusSignOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageMinusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == PlusSignOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguagePlusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == PlusSignOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguagePlusSignOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == ExponentialOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageExponentialOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == ExponentialOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageExponentialOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == DotOperatorApplicationTokenType){
					if(LanguageKind == FirstApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringFirstApplicationLanguageDotOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}else if(LanguageKind == SecondApplicationLanguageKind){
						if(OriginalParameterArrayOrderNumber == DotOperatorApplicationTokenSubStringNumber){
							OriginalParameterArrayOrderOneChar = StringSecondApplicationLanguageDotOperator[OriginalParameterArrayOrderCharNumber - 1];
						}//OriginalParameterArrayOrderNumber
					}//LanguageKind
				}else if(OriginalParameterArrayOrderType == BlankApplicationTokenType){
					if(OriginalParameterArrayOrderNumber == NullCharacterBlankApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringNullCharacterBlank[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == HorizontalTabBlankApplicationTokenSubStringNumber){
						OriginalParameterArrayOrderOneChar = StringHorizontalTabBlank[OriginalParameterArrayOrderCharNumber - 1];
					}else if(OriginalParameterArrayOrderNumber == SpaceBlankApplicationTokenSubStringNumber){
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
					
					PartialOrderTypeCutTotalPartialOrderCharNumber = PartialOrderTypeCutTotalPartialOrderCharNumber + MaxPartialOrderCharNumber;
					OriginalOrderNumberUnitMaxPartialOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
					PartialOrderTypeUnitMaxPartialOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
					
					OriginalOrderCharNumberCutTotalPartialOrderCharNumber = OriginalOrderCharNumberCutTotalPartialOrderCharNumber + MaxPartialOrderCharNumber;
					
					if(PartialOrderCharNumberLoopTimeEndMarker != 0){
						if(OriginalOrderCharNumberEndMarker != 0){
							MaxOrderCharNumber = OriginalOrderNumberUnitMaxPartialOrderCharNumber;
							
							
							
							if(PartialOrderNumberLoopTimeEndMarker != 0){
								if(MaxOriginalPartialOrderNumber >= 1){
									if(LoopTime == 2){
										OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
										OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitTotalPartialOrderCharNumber;
										PartialOrderTypeCutTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = PartialOrderTypeCutTotalPartialOrderCharNumber;
										OriginalOrderCharNumberUnitWholePartialOrderNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderNumberUnitWholePartialOrderNumber;
									}else if(LoopTime == 3){
										CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
										CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
										CopyPartialOrderTypeCutTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1] = PartialOrderTypeCutTotalPartialOrderCharNumbers[OriginalOrderNumberUnitWholePartialOrderNumber - 1];
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
							OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber = OriginalOrderCharNumberUnitPartialOrderTypeCutTotalPartialOrderCharNumber + OriginalOrderCharNumberUnitMaxPartialOrderCharNumber;
							
							OrderNumberCountStartMarker = -1;
							OriginalOrderCharNumber = 0;
							OriginalOrderCharNumberEndMarker = 0;
						}//OriginalOrderCharNumberEndMarker&0
						PartialOrderCharNumberLoopTime = 0;
						PartialOrderCharNumberLoopTimeEndMarker = 0;
					}//PartialOrderCharNumberLoopTimeEndMarker&0
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
						
						if(OriginalOrderNumberEndMarker != 0){
							
							
								
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
					
					PartialOrderTypeUnitTotalPartialOrderCharNumber = PartialOrderTypeUnitTotalPartialOrderCharNumber + PartialOrderTypeUnitMaxPartialOrderCharNumber;
					
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
					
					if(PartialOrderTypeLoopTimeEndMarker != 0){
						
						if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							PartialOrderTypeUnitMaxDecimalOrderOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxDecimalOrderOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							PartialOrderTypeUnitMaxWholeDigitOrderOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxWholeDigitOrderOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							PartialOrderTypeUnitMaxCarryUpDigitOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxCarryUpDigitOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							PartialOrderTypeUnitMaxSuffixOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxSuffixOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							PartialOrderTypeUnitMaxPlusOrMinusSignOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxPlusOrMinusSignOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							PartialOrderTypeUnitMaxPrefixOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxPrefixOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							PartialOrderTypeUnitMaxDotOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxDotOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							PartialOrderTypeUnitMaxNullOrderCharNumber = PartialOrderTypeUnitMaxPartialOrderCharNumber;
							PartialOrderTypeUnitMaxNullOrderNumber = PartialOrderTypeUnitMaxPartialOrderNumber;
						}//OriginalOrderType
						
						if(OriginalOrderTypeEndMarker != 0){
							MaxOrderType = OriginalOrderTypeUnitMaxPartialOrderType;
							
							TotalOrderType = TotalOrderType + MaxOrderType;
							LoopTimeCountStartMarker = -1;
							OriginalOrderType = 0;
							OriginalOrderTypeEndMarker = 0;
						}//OriginalOrderTypeEndMarker&0
						PartialOrderTypeLoopTime = 0;
						PartialOrderTypeLoopTimeEndMarker = 0;
					}//PartialOrderTypeLoopTimeEndMarker&0
					
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
					if(PartialOrderTypeCutTotalPartialOrderCharNumbers != NULL){
						PartialOrderTypeCutTotalPartialOrderCharNumbers = NULL;
					}//PartialOrderTypeCutTotalPartialOrderCharNumbers&NULL
					if(OriginalOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						OriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//OriginalOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialOrderNumber >= 1){
						OriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						OriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						PartialOrderTypeCutTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
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
					CharDoubleValue = (char*)malloc(sizeof(char) * (OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1));
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
					if(CopyPartialOrderTypeCutTotalPartialOrderCharNumbers != NULL){
						CopyPartialOrderTypeCutTotalPartialOrderCharNumbers = NULL;
					}//CopyPartialOrderTypeCutTotalPartialOrderCharNumbers&NULL
					if(CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers != NULL){
						CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers = NULL;
					}//CopyOriginalOrderCharNumberUnitWholePartialOrderNumbers&NULL
					if(OriginalOrderNumberUnitTotalPartialOrderNumber >= 1){
						CopyOriginalOrderCharNumberUnitMaxPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						CopyOriginalOrderCharNumberUnitTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
						CopyPartialOrderTypeCutTotalPartialOrderCharNumbers = (int*)malloc(sizeof(int) * OriginalOrderNumberUnitTotalPartialOrderNumber);
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
					CopyCharDoubleValue = (char*)malloc(sizeof(char) * (OriginalOrderNumberUnitTotalPartialOrderCharNumber + 1));
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