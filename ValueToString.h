#include <stdlib.h>
	
	static char* ValueCharArray(double Value0,int DecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumber0,
		int SetDecimalOrderOrderNumber0,int SetWholeDigitOrderOrderNumberMarker0,int SetDecimalOrderOrderNumberMarker0,
		int PlusOrMinusSignMarker0,int RoundUpOneDigit0, int IntValueBase0){
		
		// This programming code is the so much reliable demo.
		// If possible, I want to make more useful function in which we can issue an order using an input string just like C-style "%value * %base ^ %power" and enable us to
		// get the label like "5.0 * 10 ^ 6 ".
		//value0                               :: Double value which is converted to a string.
		//DecimalOrderOrderNumber0             :: The decimal order which is rounded.
		//SetWholeDigitOrderOrderNumber0       :: The decimal order which is the end of the output string.
		//SetWholeDigitOrderOrderNumberMarker0 :: The whole digit order which is the start of the output string.
		//SetDecimalOrderOrderNumberMarker0    :: The argument which enables us to use the argument, SetDecimalOrderOrderNumber0 (0:OFF, Not 0:ON).
		//SetWholeDigitOrderOrderNumberMarker0 :: The argument which enables us to use the argument, SetWholeDigitOrderOrderNumber0 (:OFF, Not 0:ON).
		//RoundUpOneDigit0                     :: The digit which determines round-up or round-down at the decimal order the argument, DecimalOrderOrderNumber indicates.
		//IntValueBase0                        :: If IntValueBase0 is 10, output is the decimal. 
		//                                     :: If IntValueBase0 is 16, output is the hexadecimal.
		//                                     :: Note that RoundUpOneDigit0 isn't valid for decimal, especially when IntValueBase0 is not 10.
		// I wrote this code in so-called "Theme Park method", because we go around the do-while loop over and over again. (System Lab).
			
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

		
		
		const char StringDotOperator[] = ".";
		const char StringPlusSignOperator[] = "+";
		const char StringMinusSignOperator[] = "-";
		const char StringExponentialOperator[] = "<Exponential>";
		const char StringUndefinedPrefixSignOperator[] = "";
		const char StringMinusPrefixSignOperator[] = "-";
		const char StringPlusPrefixSignOperator[] = "+";
		const char StringNullDigit[] = "NULL";
		const char StringCarryUpDigit[] = "1";
		const char StringPrefixDigit[] = "0";
		const char StringSuffixDigit[] = "0";
		const char StringZeroNormalDigit[] = {CharZeroDigit,'\0'};
		const char StringOneNormalDigit[] = {CharOneDigit,'\0'};
		const char StringTwoNormalDigit[] = {CharTwoDigit,'\0'};
		const char StringThreeNormalDigit[] = {CharThreeDigit,'\0'};
		const char StringFourNormalDigit[] = {CharFourDigit,'\0'};
		const char StringFiveNormalDigit[] = {CharFiveDigit,'\0'};
		const char StringSixNormalDigit[] = {CharSixDigit,'\0'};
		const char StringSevenNormalDigit[] = {CharSevenDigit,'\0'};
		const char StringEightNormalDigit[] = {CharEightDigit,'\0'};
		const char StringNineNormalDigit[] = {CharNineDigit,'\0'};
		const char StringANormalDigit[] = {CharADigit,'\0'};
		const char StringBNormalDigit[] = {CharBDigit,'\0'};
		const char StringCNormalDigit[] = {CharCDigit,'\0'};
		const char StringDNormalDigit[] = {CharDDigit,'\0'};
		const char StringENormalDigit[] = {CharEDigit,'\0'};
		const char StringFNormalDigit[] = {CharFDigit,'\0'};
			
		const char StringLowercaseD[] = {CharAsciiLowercaseD,'\0'};
		const char StringLowercaseF[] = {CharAsciiLowercaseF,'\0'};
		const char StringLowercaseLF[] = {CharAsciiLowercaseL,CharAsciiLowercaseF,'\0'};
			
		const char StringFullZeroNormalDigit[] = "Zero";
		const char StringFullOneNormalDigit[] = "One";
		const char StringFullTwoNormalDigit[] = "Two";
		const char StringFullThreeNormalDigit[] = "Three";
		const char StringFullFourNormalDigit[] = "Four";
		const char StringFullFiveNormalDigit[] = "Five";
		const char StringFullSixNormalDigit[] = "Six";
		const char StringFullSevenNormalDigit[] = "Seven";
		const char StringFullEightNormalDigit[] = "Eight";
		const char StringFullNineNormalDigit[] = "Nine";
		const char StringFullANormalDigit[] = "[A]";
		const char StringFullBNormalDigit[] = "{B}";
		const char StringFullCNormalDigit[] = "(C)";
		const char StringFullDNormalDigit[] = "<D>";
		const char StringFullENormalDigit[] = "/E/";
		const char StringFullFNormalDigit[] = "#F#";
			
		const char StringPercentage[] = "%";
		const char StringValue[] = "Value";
		const char StringBase[] = "Base";
		const char StringPower[] = "Power";
		const char StringRoundLeftBracket[] = "(";
		const char StringRoundRightBracket[] = ")";
			
		const char StringNullCharacterBlank[] = {CharAsciiNullCharacter,'\0'};
		const char StringHorizontalTabBlank[] = {CharAsciiHorizontalTab,'\0'};
		const char StringSpaceBlank[] = {CharAsciiSpace,'\0'};
		
		const int UndefinedApplicationProgrammingLanguageSort = 0;
		const int CApplicationProgrammingLanguageSort = 1;
		const int FortranApplicationProgrammingLanguageSort = 2;
		const int JavaApplicationProgrammingLanguageSort = 3;
		const int ProgrammingLanguageSort = JavaApplicationProgrammingLanguageSort;
			
		const int UndefinedApplicationTokenType = 0;
		const int FormatStringApplicationTokenType = 1;
		const int ValueApplicationTokenType = 2;
		const int LeftBracketApplicationTokenType = 3;
		const int RightBracketApplicationTokenType = 4;
		const int ArgumentStatementApplicationTokenType = 5;
		const int DigitApplicationTokenType = 6;
		const int OperatorApplicationTokenType = 7;
		const int BlankApplicationTokenType = 8;
		const int MaxParameterApplicationTokenType = 8;
			
		const int UndefinedApplicationTokenKind = 0;
		const int UndefinedApplicationTokenStringNumber = 0;
		const int FormatStringApplicationTokenKind = 1;
		const int MaxFormatStringApplicationTokenKind = 1;
		const int FormatStringApplicationTokenStringNumber = 1;
		const int MaxFormatStringApplicationTokenStringNumber = 1;
		const int ValueApplicationTokenKind = 1;
		const int MaxValueApplicationTokenKind = 1;
		const int LeftBracketApplicationTokenKind = 1;
		const int MaxLeftBracketApplicationTokenKind = 1;
		const int RightBracketApplicationTokenKind = 1;
		const int MaxRightBracketApplicationTokenKind = 1;
		const int ArgumentStatementApplicationTokenKind = 1;
		const int MaxArgumentStatementApplicationTokenKind = 1;
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
		const int ValueDigitApplicationTokenKind = 1;
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
		const int NullDigitApplicationTokenKind = 2;
		const int NullDigitApplicationTokenStringNumber = 1;
		const int MaxNullDigitApplicationTokenStringNumber = 1;
		const int SuffixDigitApplicationTokenKind = 3;
		const int SuffixDigitApplicationTokenStringNumber = 1;
		const int MaxSuffixDigitApplicationTokenStringNumber = 1;
		const int PrefixDigitApplicationTokenKind = 4;
		const int PrefixDigitApplicationTokenStringNumber = 1;
		const int MaxPrefixDigitApplicationTokenStringNumber = 1;
		const int CarryUpDigitApplicationTokenKind = 5;
		const int CarryUpDigitApplicationTokenStringNumber = 1;
		const int MaxCarryUpDigitApplicationTokenStringNumber = 1;
		const int MaxDigitApplicationTokenKind = 5;
		const int PrefixSignOperatorApplicationTokenKind = 1;
		const int UndefinedPrefixSignOperatorApplicationTokenStringNumber = 1;
		const int MinusPrefixSignOperatorApplicationTokenStringNumber = 2;
		const int PlusPrefixSignOperatorApplicationTokenStringNumber = 3;
		const int MaxPrefixSignOperatorApplicationTokenStringNumber = 3;
		const int MinusSignOperatorApplicationTokenKind = 2;
		const int MinusSignOperatorApplicationTokenStringNumber = 1;
		const int MaxMinusSignOperatorApplicationTokenStringNumber = 1;
		const int PlusSignOperatorApplicationTokenKind = 3;
		const int PlusSignOperatorApplicationTokenStringNumber = 1;
		const int MaxPlusSignOperatorApplicationTokenStringNumber = 1;
		const int ExponentialOperatorApplicationTokenKind = 4;
		const int ExponentialOperatorApplicationTokenStringNumber = 1;
		const int MaxExponentialOperatorApplicationTokenStringNumber = 1;
		const int DotOperatorApplicationTokenKind = 5;
		const int DotOperatorApplicationTokenStringNumber = 1;
		const int MaxDotOperatorApplicationTokenStringNumber = 1;
		const int MaxOperatorApplicationTokenKind = 5;
		const int BlankApplicationTokenKind = 1;
		const int MaxBlankApplicationTokenKind = 1;
		const int NullCharacterBlankApplicationTokenStringNumber = 1;
		const int HorizontalTabBlankApplicationTokenStringNumber = 2;
		const int SpaceBlankApplicationTokenStringNumber = 3;
		const int MaxBlankApplicationTokenStringNumber = 3;
			
		int PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int PreParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int PreParameterApplicationRoutineStatusGlobalTotalOrderType = 0;
		int PreParameterApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int PreParameterApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderType = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int ParameterApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderType = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int PreAnalysisApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderType = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int AnalysisApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderType = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int PreValueApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderValueNumber = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderLanguageSort = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderType = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderKind = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderNumber = 0;
		int ValueApplicationRoutineStatusGlobalTotalOrderCharNumber = 0;
		
		int OldDummyParameterStringOneCharExtendedAsciiMarker = 0;
			
		int ValueConversionEndMarker = 0;
		int ValueConversionValidityMarker = 0;
			
		int RoutineNumber = 0;
		int MaxRoutineNumber = 0;
		int RoutineNumberEndMarker = 0;
		const int ParameterApplicationRoutineNumber = 1;
		const int AnalysisApplicationRoutineNumber = 2;
		const int ValueApplicationRoutineNumber = 3;
		const int ArrayAllocationValueApplicationRoutineNumber = 4;
		const int NullValueApplicationRoutineNumber = 5;
		const int MaxApplicationRoutineNumber = 5;
			
		const int UndefinedApplicationRoutineStatus = 0;
		const int ParameterApplicationRoutineStatus = 1;
		const int AnalysisApplicationRoutineStatus = 2;
		const int ValueApplicationRoutineStatus = 3;
			
		int RoutineStatus = UndefinedApplicationRoutineStatus;
			
		const int UndefinedApplicationSubRoutineStatus = 0;
		const int ParameterApplicationSubRoutineStatus = 1;
		const int AnalysisApplicationSubRoutineStatus = 1;
		const int ValueApplicationSubRoutineStatus = 1;
		const int NullValueApplicationSubRoutineStatus = 2;
			
		int SubRoutineStatus = UndefinedApplicationSubRoutineStatus;
			
		int LoopTime = 0;
		int MaxLoopTime = 0;
		int LoopTimeEndMarker = 0;
		int LoopTimeModulo2Plus1 = 0;
		int LoopTimeModulo2Plus1EndMarker = 0;
		const int MaxLoopTimeModulo2Plus1 = 2;
			
		int OrderCharNumberUnitComparisonDenialMarker = 0;
			
		int DummyParameterStringValueNumberUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringValueNumber = 0;
		int TotalDummyParameterStringValueNumber = 0;
		int MaxDummyParameterStringValueNumber = 0;
		int DummyParameterStringValueNumber = 0;
		int DummyParameterStringValueNumberEndMarker = 0;
			
		int DummyParameterStringTypeUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringType = 0;
		int TotalDummyParameterStringType = 0;
		int MaxDummyParameterStringType = 0;
		int DummyParameterStringType = 0;
		int DummyParameterStringTypeEndMarker = 0;
			
		int DummyParameterStringKindUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringKind = 0;
		int TotalDummyParameterStringKind = 0;
		int MaxDummyParameterStringKind = 0;
		int DummyParameterStringKind = 0;
		int DummyParameterStringKindEndMarker = 0;
			
		int DummyParameterStringLanguageSortUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringLanguageSort = 0;
		int TotalDummyParameterStringLanguageSort = 0;
		int MaxDummyParameterStringLanguageSort = 0;
		int DummyParameterStringLanguageSort = 0;
		int DummyParameterStringLanguageSortEndMarker = 0;
			
		int DummyParameterStringNumberUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringNumber = 0;
		int TotalDummyParameterStringNumber = 0;
		int MaxDummyParameterStringNumber = 0;
		int DummyParameterStringNumber = 0;
		int DummyParameterStringNumberEndMarker = 0;
			
		int DummyParameterStringCharNumberUnitComparisonDenialMarker = 0;
		int WholeDummyParameterStringCharNumber = 0;
		int TotalDummyParameterStringCharNumber = 0;
		int MaxDummyParameterStringCharNumber = 0;
		int DummyParameterStringCharNumber = 0;
		int DummyParameterStringCharNumberEndMarker = 0;
		
		double Value = 0.0d;
		double AbsoluteValue = 0.0d;
		double AbsoluteValueWholeDigitOrderPart = 0.0d;
		double DummyAbsoluteValueWholeDigitOrderPart = 0.0d;
		double AbsoluteValueDecimalOrderPart = 0.0d;
		double DummyAbsoluteValueDecimalOrderPart = 0.0d;
		
		int MaxOriginalOrderValueNumber = 0;
		int TotalOriginalOrderValueNumber = 0;
		int WholeOriginalOrderValueNumber = 0;
		int OriginalOrderValueNumber = 0;
			
		int ParameterArrayOrderValueNumberUnitOutputDenialMarker = 0;
		const int MaxOneApplicationParameterArrayOrderValueNumber = 1;
		const int OneApplicationParameterArrayOrderValueNumber = 1;
		int MaxOriginalParameterArrayOrderValueNumber = 0;
		int TotalAnalysisArrayOrderValueNumber = 0;
		int TotalOriginalParameterArrayOrderValueNumber = 0;
		int OriginalParameterArrayOrderValueNumber = 0;
		int WholeOriginalParameterArrayOrderValueNumber = 0;
			
		int OriginalOrderValueNumberEndMarker = 0;
		int OriginalOrderValueNumberUnitMaxPartialOrderValueNumber = 0;
		int MaxPartialOrderValueNumber = 0;
		int MaxOriginalPartialOrderValueNumber = 0;
			
			
		int PartialOrderValueNumber = 0;
		int PartialOrderValueNumberEndMarker = 0;
		int OrderValueNumberCounterStartMarker = 0;
		int OrderValueNumber = 0;
		int OrderValueNumberEndMarker = 0;
		int MaxOrderValueNumber = 0;
		int TotalOrderValueNumber = 0;
		int WholeOrderValueNumber = 0;
			
		const int UndefinedApplicationLanguageSort = 0;
		const int FirstApplicationLanguageSort = 1;
		const int SecondApplicationLanguageSort = 2;
		const int MaxApplicationLanguageSort = 2;
		int ParameterArrayOrderLanguageSortUnitOutputDenialMarker = 0;
		int MaxOriginalParameterArrayOrderLanguageSort = 0;
		int TotalOriginalParameterArrayOrderLanguageSort = 0;
		int OriginalParameterArrayOrderLanguageSort = 0;
		int WholeOriginalParameterArrayOrderLanguageSort = 0;
		int MaxPartialOrderLanguageSort = 0;
			
		int OrderLanguageSort = 0;
		int OrderLanguageSortEndMarker = 0;
		int MaxOrderLanguageSort = 0;
		int TotalOrderLanguageSort = 0;
		int WholeOrderLanguageSort = 0;
		int CandidateMaxOriginalOrderLanguageSort = 0;
		int CandidateTotalOriginalOrderLanguageSort = 0;
		int OriginalOrderLanguageSort = 0;
		int MaxOriginalOrderLanguageSort = 0;
		int TotalOriginalOrderLanguageSort = 0;
		int WholeOriginalOrderLanguageSort = 0;
		int OriginalOrderLanguageSortEndMarker = 0;
		int OriginalOrderLanguageSortUnitMaxPartialOrderLanguageSort = 0;
		int MaxOriginalPartialOrderLanguageSort = 0;
		int PartialOrderLanguageSort = 0;
		int PartialOrderLanguageSortEndMarker = 0;
		int OrderLanguageSortCounterStartMarker = 0;
			
		int ParameterArrayOrderTypeUnitOutputDenialMarker = 0;
		int MaxOriginalParameterArrayOrderType = 0;
		int TotalOriginalParameterArrayOrderType = 0;
		int OriginalParameterArrayOrderType = 0;
		int WholeOriginalParameterArrayOrderType = 0;

		int CandidateMaxOriginalOrderType = 0;
		int CandidateTotalOriginalOrderType = 0;
		int OriginalOrderType = 0;
		int MaxOriginalOrderType = 0;
		int TotalOriginalOrderType = 0;
		int WholeOriginalOrderType = 0;
			
		int OrderType = 0;
		int OrderTypeEndMarker = 0;
		int MaxOrderType = 0;
		int MaxPartialOrderType = 0;
		int TotalOrderType = 0;
		int WholeOrderType = 0;
		int OriginalOrderTypeEndMarker = 0;
		int OriginalOrderTypeUnitMaxPartialOrderType = 0;
		int MaxOriginalPartialOrderType = 0;
		int PartialOrderType = 0;
		int PartialOrderTypeEndMarker = 0;
		int OrderTypeCounterStartMarker = 0;
			
		int ParameterArrayOrderKindUnitOutputDenialMarker = 0;
		int MaxOriginalParameterArrayOrderKind = 0;
		int TotalOriginalParameterArrayOrderKind = 0;
		int OriginalParameterArrayOrderKind = 0;
		int WholeOriginalParameterArrayOrderKind = 0;
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
		const int ValueApplicationOrderKind = 1;
		const int MaxValueApplicationOrderKind = 1;
		int OrderKind = 0;
		int OrderKindEndMarker = 0;
		int MaxOrderKind = 0;
		int MaxPartialOrderKind = 0;
		int TotalOrderKind = 0;
		int WholeOrderKind = 0;
		int CandidateMaxOriginalOrderKind = 0;
		int CandidateTotalOriginalOrderKind = 0;
		int OriginalOrderKind = 0;
		int MaxOriginalOrderKind = 0;
		int TotalOriginalOrderKind = 0;
		int WholeOriginalOrderKind = 0;
		int OriginalOrderKindEndMarker = 0;
		int OriginalOrderKindUnitMaxPartialOrderKind = 0;
		int MaxOriginalPartialOrderKind = 0;
		int PartialOrderKind = 0;
		int PartialOrderKindEndMarker = 0;
			
		int MaxOriginalParameterArrayOrderNumber = 0;
		int TotalOriginalParameterArrayOrderNumber = 0;
		int OriginalParameterArrayOrderNumber = 0;
		int WholeOriginalParameterArrayOrderNumber = 0;
		int OriginalOrderNumber = 0;
		int CandidateMaxOriginalOrderNumber = 0;
		int CandidateTotalOriginalOrderNumber = 0;
		int MaxOriginalOrderNumber = 0;
		int TotalOriginalOrderNumber = 0;
		int MaxApplicationPartialOrderNumberLoopTime = 0;
		int PartialOrderNumberLoopTime = 0;
		int MaxPartialOrderNumberLoopTime = 0;
		int PartialOrderNumberLoopTimeEndMarker = 0;
		
		int MaxApplicationOriginalOrderNumberLoopTime = 0;
		int OriginalOrderNumberLoopTime = 0;
		int MaxOriginalOrderNumberLoopTime = 0;
		int OriginalOrderNumberLoopTimeEndMarker = 0;
			
		int MaxApplicationPartialOrderKindLoopTime = 0;
		int PartialOrderKindLoopTime = 0;
		int MaxPartialOrderKindLoopTime = 0;
		int PartialOrderKindLoopTimeEndMarker = 0;
		
		int OrderNumber = 0;
		int OrderNumberCounterStartMarker = 0;
		int PartialOrderNumber = 0;
		int PartialOrderNumberEndMarker = 0;
		int MaxPartialOrderNumber = 0;
		int MaxOriginalPartialOrderNumber = 0;
		int OriginalOrderNumberEndMarker = 0;
		int OriginalOrderNumberUnitMaxPartialOrderNumber = 0;
		int OrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = 0;
		int OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = 0;
		int OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = 0;
		int SavedOriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = 0;
		int MaxOrderNumber = 0;
		int TotalOrderNumber = 0;
		int WholeOrderNumber = 0;
		int WholeOriginalOrderNumber = 0;
		int OriginalOrderLanguageSortUnitMaxOrderNumber = 0;
		int OriginalOrderKindUnitMaxOrderNumber = 0;
		int OriginalOrderTypeUnitMaxOrderNumber = 0;
		int OriginalOrderValueNumberUnitMaxOrderNumber = 0;
		int OriginalOrderLanguageSortUnitTotalOrderNumber = 0;
		int OriginalOrderKindUnitTotalOrderNumber = 0;
		int OriginalOrderTypeUnitTotalOrderNumber = 0;
		int OriginalOrderValueNumberUnitTotalOrderNumber = 0;
			
			
		int ParameterArrayOrderNumberUnitOutputDenialMarker = 0;
		int ParameterArrayOrderCharNumberUnitOutputDenialMarker = 0;
		int MaxOriginalParameterArrayOrderCharNumber = 0;
		int TotalOriginalParameterArrayOrderCharNumber = 0;
		int OriginalParameterArrayOrderCharNumber = 0;
		int WholeOriginalParameterArrayOrderCharNumber = 0;
		int OrderCharNumberStartMarker = 0;
		int OrderCharNumber = 0;
		int OrderCharNumberEndMarker = 0;
		int OrderNumberAdditionDenialMarker = 0;
		int OrderCharNumberCounterStartMarker = 0;
		int MaxOrderCharNumber = 0;
		int TotalOrderCharNumber = 0;
		int WholeOrderCharNumber = 0;
		int OriginalOrderCharNumber = 0;
		int CandidateMaxOriginalOrderCharNumber = 0;
		int CandidateTotalOriginalOrderCharNumber = 0;
		int MaxOriginalOrderCharNumber = 0;
		int TotalOriginalOrderCharNumber = 0;
		int WholeOriginalOrderCharNumber = 0;
		int PartialOrderCharNumber = 0;
		int OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
		int OriginalOrderCharNumberEndMarker = 0;
		int PartialOrderCharNumberEndMarker = 0;
		int MaxOriginalPartialOrderCharNumber = 0;
		int MaxPartialOrderCharNumber = 0;
			
		char OriginalParameterArrayOneChar = (char)0;
			
		int WholeDigitOrderOrderNumber = 0;
		int CarryUpCandidateMarker = 0;
		int CandidateMaxOriginalPlusOrMinusSignOrderNumber = 0;
		int CandidateMaxOriginalDotOrderNumber = 0;
		int CandidateMaxOriginalNullOrderNumber = 0;
		int MaxOriginalPlusOrMinusSignOrderNumber = 0;
		int MaxOriginalDotOrderNumber = 0;
		int MaxOriginalNullOrderNumber = 0;
		int ValueZeroMarker = 0;
		char CandidateOriginalOneChar = (char)0;
	 	char OriginalOneChar = (char)0;
		char OneChar = (char)0;
		char OriginalDummyOneChar = (char)0;
	 	int OriginalOneDigit = 0;
	 	int OriginalCarryUpOneDigit = 0;
		int OneDigit = 0;
	 	int ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
	 	int DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
		int CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 0;
	 	int DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 0;
	 	int DecimalOrderOrderNumber = 0;
	 	int OrderKindCounterStartMarker = 0;
	 	int WholeSubstitutedOrderCharNumber = 0;
		int OriginalOrderKindCutWholeOrderCharNumber = 0;
		int OriginalOrderKindCutWholeSubstitutedOrderCharNumber = 0;
	 	int RoundUpOneDigit = 5;
	 	int SetWholeDigitOrderOrderNumber = 0;
		int SetDecimalOrderOrderNumber = 0;
	 	int SetWholeDigitOrderOrderNumberMarker = 0;
		int SetDecimalOrderOrderNumberMarker = 0;
		int WholeDigitOrderOrderNumberBeforeExponential = 0;
		int IntPlusOrMinusSign = 0;
		int PlusOrMinusSignMarker = 0;
		int DummyRoundDownToZeroMarker = 0;
		int RoundDownToZeroMarker = 0;
		int MaxOriginalExponentialOrderNumber = 0;
		int MaxOriginalDecimalOrderOrderNumber = 0;
		int MaxOriginalWholeDigitOrderOrderNumber = 0;
		int CandidateMaxOriginalDecimalOrderOrderNumber = 0;
		int CandidateMaxOriginalWholeDigitOrderOrderNumber = 0;
		int CandidateMaxOriginalCarryUpDigitOrderNumber = 0;
		int CalculatedMaxOriginalCarryUpDigitOrderNumber = 0;
		int MaxOriginalCarryUpDigitOrderNumber = 0;
		int MaxOriginalPlusOrMinusSignOrderNumberModulo2 = 0;
		int OriginalOrderKindUnitMaxCarryUpDigitOrderNumber = 0;
		int OriginalOrderKindUnitMaxSuffixOrderNumber = 0;
		int OriginalOrderKindUnitMaxPlusOrMinusSignOrderNumber = 0;
		int OriginalOrderKindUnitMaxPrefixOrderNumber = 0;
		int OriginalOrderKindUnitMaxDotOrderNumber = 0;
		int OriginalOrderKindUnitMaxNullOrderNumber = 0;
		int OriginalOrderKindUnitMaxExponentialOrderNumber = 0;
		int OriginalOrderKindUnitMaxDecimalOrderOrderNumber = 0;
		int OriginalOrderKindUnitOrderCharNumber = 0;
		int OriginalOrderValueNumberUnitMaxOrderCharNumber = 0;
		int OriginalOrderTypeUnitMaxOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOrderCharNumber = 0;
		int OriginalOrderLanguageSortUnitMaxOrderCharNumber = 0;
		int OriginalOrderLanguageSortUnitTotalOrderCharNumber = 0;
		int OriginalOrderNumberUnitMaxOrderCharNumber = 0;
		int OriginalOrderKindCutTotalOrderCharNumber = 0;
		int OriginalOrderTypeUnitTotalOrderCharNumber = 0;
		int OriginalOrderKindUnitTotalOrderCharNumber = 0;
		int OriginalOrderNumberUnitTotalOrderCharNumber = 0;
		int OriginalOrderValueNumberUnitTotalOrderCharNumber = 0;
			
		int OriginalOrderKindUnitMaxOriginalExponentialOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber = 0;
	 	int OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalNullOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalDotOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxOriginalSuffixOrderCharNumber = 0;
			
		int OriginalOrderKindUnitMaxExponentialOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxDecimalOrderOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxWholeDigitOrderOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxCarryUpDigitOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxSuffixOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxPlusOrMinusSignOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxPrefixOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxDotOrderCharNumber = 0;
		int OriginalOrderKindUnitMaxNullOrderCharNumber = 0;
			
		int UndefinedApplicationPlusOrMinusSignStatus = 0;
		int MinusApplicationPlusOrMinusSignStatus = 1;
		int PlusApplicationPlusOrMinusSignStatus = 2;
		int PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
		int AdjustingFinalPlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
		int AdjustingPlusOrMinusSignMarker = 0;
		int AdjustingPlusOrMinusSignChoiceMarker = 0;
		int MaxOriginalPrefixOrderNumber = 0;
		int MaxOriginalSuffixOrderNumber = 0;
		int ExponentialAdjustingWholeOrderNumber = 0;
		int ValueStringMinWholeDigitOrderOrderNumber = 0;
		int ValueStringMaxWholeDigitOrderOrderNumber = 0;
		int ValueStringMinDecimalOrderOrderNumber = 0;
		int ValueStringMaxDecimalOrderOrderNumber = 0;
		int ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker = 0;
		int ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker = 0;
		int ValueStringMinDecimalOrderOrderNumberRestrictionMarker = 0;
		int ValueStringMaxDecimalOrderOrderNumberRestrictionMarker = 0;
		int	DotOrderNumberAdditionDenialMarker = 0;
		int ExponentialAdjustingWholeDigitOrderOrderNumber = 0;
		int IntValueBase = 0;
		int IntValueBaseErrorMarker = 0;
		int OrderKindUnitTotalOriginalOrderNumber = 0;
		int OrderKindUnitMaxOriginalOrderNumber = 0;
		int OrderKindUnitTotalOriginalOrderCharNumber = 0;
		int OrderKindUnitMaxOriginalOrderCharNumber = 0;
		int OrderKindCutTotalOriginalOrderCharNumber = 0;
		int OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
			
			
		int FormatOrderCharNumber = 0;
		int FormatAnalysisStartMarker = 0;
		int ValueStringComparisonStartMarker = 0;
		const int UndefinedApplicationOrderOneCharAlphabetStatus = 0;
		const int LowercaseApplicationOrderOneCharAlphabetStatus = 1;
		const int UppercaseApplicationOrderOneCharAlphabetStatus = 2;
		int DummyParameterStringOneCharAlphabetStatus = UndefinedApplicationOrderOneCharAlphabetStatus;
		
		char DummyParameterStringOneChar = (char)0;
		char DummyParameterStringOneChar2 = (char)0;
			
		int CurrentApplicationLanguageSort = UndefinedApplicationLanguageSort;
		int CandidateCarryUpDecimalOrderMarker = 0;
			
		const int UndefinedApplicationReadStatus = 0;
		const int ParameterApplicationReadStatus = 1;
		int SavedOrderValueNumberReadStatus = UndefinedApplicationReadStatus;
		int SavedOrderTypeReadStatus = UndefinedApplicationReadStatus;
		int SavedOrderKindReadStatus = UndefinedApplicationReadStatus;
		int SavedOrderLanguageSortReadStatus = UndefinedApplicationReadStatus;
		int SavedOrderNumberReadStatus = UndefinedApplicationReadStatus;
		int SavedOrderCharNumberReadStatus = UndefinedApplicationReadStatus;
		int SavedOneCharReadStatus = UndefinedApplicationReadStatus;
		int OrderNumberUnitTotalOriginalOrderCharNumber = 0;
		int OrderNumberUnitMaxOriginalOrderCharNumber = 0;
		int OrderNumberUnitOrderKindCutTotalOriginalOrderCharNumber = 0;
		int RoutineNumberAdditionDenialMarker = 0;
		int OriginalOrderKindUnitPlusOrMinusSignOrderDenialMarker = 0;
		int OriginalOrderKindCutTotalOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalExponentialOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalDecimalOrderOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalSuffixOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalPlusOrMinusSignOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalPrefixOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalDotOrderNumber = 0;
		int OriginalOrderKindCutOriginalOrderNumberUnitTotalNullOrderNumber = 0;
		int OriginalOrderKindCutWholeOrderNumber = 0;
			
		int* TotalParameterStringTypes = NULL;
		int* MaxParameterStringTypes = NULL;
		int* TotalParameterStringKinds = NULL;
		int* MaxParameterStringKinds = NULL;
		int* TotalParameterStringLanguageSorts = NULL;
		int* MaxParameterStringLanguageSorts = NULL;
		int* TotalParameterStringNumbers = NULL;
		int* MaxParameterStringNumbers = NULL;
		int* TotalParameterStringCharNumbers = NULL;
		int* MaxParameterStringCharNumbers = NULL;
		char* CharParameterStrings = NULL;
		int* CopyTotalParameterStringTypes = NULL;
		int* CopyMaxParameterStringTypes = NULL;
		int* CopyTotalParameterStringKinds = NULL;
		int* CopyMaxParameterStringKinds = NULL;
		int* CopyTotalParameterStringLanguageSorts = NULL;
		int* CopyMaxParameterStringLanguageSorts = NULL;
		int* CopyTotalParameterStringNumbers = NULL;
		int* CopyMaxParameterStringNumbers = NULL;
		int* CopyTotalParameterStringCharNumbers = NULL;
		int* CopyMaxParameterStringCharNumbers = NULL;
		char* CopyCharParameterStrings = NULL;
		
		int* TotalAnalysisStringTypes = NULL;
		int* MaxAnalysisStringTypes = NULL;
		int* TotalAnalysisStringKinds = NULL;
		int* MaxAnalysisStringKinds = NULL;
		int* TotalAnalysisStringLanguageSorts = NULL;
		int* MaxAnalysisStringLanguageSorts = NULL;
		int* TotalAnalysisStringNumbers = NULL;
		int* MaxAnalysisStringNumbers = NULL;
		int* TotalAnalysisStringCharNumbers = NULL;
		int* MaxAnalysisStringCharNumbers = NULL;
		char* CharAnalysisStrings = NULL;
		int* CopyTotalAnalysisStringTypes = NULL;
		int* CopyMaxAnalysisStringTypes = NULL;
		int* CopyTotalAnalysisStringKinds = NULL;
		int* CopyMaxAnalysisStringKinds = NULL;
		int* CopyTotalAnalysisStringLanguageSorts = NULL;
		int* CopyMaxAnalysisStringLanguageSorts = NULL;
		int* CopyTotalAnalysisStringNumbers = NULL;
		int* CopyMaxAnalysisStringNumbers = NULL;
		int* CopyTotalAnalysisStringCharNumbers = NULL;
		int* CopyMaxAnalysisStringCharNumbers = NULL;
		char* CopyCharAnalysisStrings = NULL;
			
		int* TotalValueStringTypes = NULL;
		int* MaxValueStringTypes = NULL;
		int* TotalValueStringKinds = NULL;
		int* MaxValueStringKinds = NULL;
		int* StringKindUnitTotalValueStringNumbers = NULL;
		int* StringKindUnitMaxValueStringNumbers = NULL;
		int* StringKindUnitTotalValueStringCharNumbers = NULL;
		int* StringKindUnitMaxValueStringCharNumbers = NULL;
		int* StringKindCutTotalValueStringCharNumbers = NULL;
		int* TotalValueStringLanguageSorts = NULL;
		int* MaxValueStringLanguageSorts = NULL;
		int* TotalValueStringNumbers = NULL;
		int* MaxValueStringNumbers = NULL;
		int* OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = NULL;
		int* TotalValueStringCharNumbers = NULL;
		int* MaxValueStringCharNumbers = NULL;
		char* CharValueStrings = NULL;
		int* CopyTotalValueStringTypes = NULL;
		int* CopyMaxValueStringTypes = NULL;
		int* CopyTotalValueStringKinds = NULL;
		int* CopyMaxValueStringKinds = NULL;
		int* CopyStringKindUnitTotalValueStringNumbers = NULL;
		int* CopyStringKindUnitMaxValueStringNumbers = NULL;
		int* CopyStringKindUnitTotalValueStringCharNumbers = NULL;
		int* CopyStringKindUnitMaxValueStringCharNumbers = NULL;
		int* CopyStringKindCutTotalValueStringCharNumbers = NULL;
		int* CopyTotalValueStringLanguageSorts = NULL;
		int* CopyMaxValueStringLanguageSorts = NULL;
		int* CopyTotalValueStringNumbers = NULL;
		int* CopyMaxValueStringNumbers = NULL;
		int* CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = NULL;
		int* CopyTotalValueStringCharNumbers = NULL;
		int* CopyMaxValueStringCharNumbers = NULL;
		char* CopyCharValueStrings = NULL;
		
		
		do{//ValueConversionEndMarker&0
			if(OrderValueNumberCounterStartMarker <= 0){
				if(LoopTime == 0){
					if(RoutineNumber == 0){
						ValueConversionEndMarker = 0;
						MaxRoutineNumber = MaxApplicationRoutineNumber;
						
					}//RoutineNumber&0
					
					if(MaxRoutineNumber >= 1){
						RoutineNumber = RoutineNumber + 1;
					}//MaxRoutineNumber&1
					if(RoutineNumber == MaxRoutineNumber){
						RoutineNumberEndMarker = 1;
					}//RoutineNumber&MaxRoutineNumber
					
					RoutineStatus = UndefinedApplicationRoutineStatus;
					SubRoutineStatus = UndefinedApplicationSubRoutineStatus;
					if(MaxRoutineNumber >= 1){
						if(RoutineNumber == ParameterApplicationRoutineNumber){
							RoutineStatus = ParameterApplicationRoutineStatus;
							SubRoutineStatus = ParameterApplicationSubRoutineStatus;
						}else if(RoutineNumber == AnalysisApplicationRoutineNumber){
							RoutineStatus = AnalysisApplicationRoutineStatus;
							SubRoutineStatus = AnalysisApplicationSubRoutineStatus;
						}else if(RoutineNumber == ValueApplicationRoutineNumber){
							RoutineStatus = ValueApplicationRoutineStatus;
							SubRoutineStatus = ValueApplicationSubRoutineStatus;
						}else if(RoutineNumber == ArrayAllocationValueApplicationRoutineNumber){
							RoutineStatus = ValueApplicationRoutineStatus;
							SubRoutineStatus = ValueApplicationSubRoutineStatus;
						}else if(RoutineNumber == NullValueApplicationRoutineNumber){
							RoutineStatus = ValueApplicationRoutineStatus;
							SubRoutineStatus = NullValueApplicationSubRoutineStatus;
						}//RoutineNumber
					}//MaxRoutineNumber&1
					
					RoutineNumberAdditionDenialMarker = 0;
					if(MaxRoutineNumber == 0){
						RoutineNumberAdditionDenialMarker = 1;
					}//MaxRoutineNumber&0
					if(RoutineNumber == NullValueApplicationRoutineNumber){
						if(ValueApplicationRoutineStatusGlobalTotalOrderCharNumber >= 1){
							RoutineNumberAdditionDenialMarker = 2;
						}//ValueApplicationRoutineStatusGlobalTotalOrderCharNumber&1
					}//RoutineNumber
					
					MaxLoopTime = 0;
					if(RoutineNumberAdditionDenialMarker == 0){
						MaxLoopTime = 3;
					}//RoutineNumberAdditionDenialMarker&0
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
				
				TotalOrderValueNumber = 0;
				TotalOrderLanguageSort = 0;
				TotalOrderType = 0;
				TotalOrderKind = 0;
				
				OriginalOrderLanguageSortUnitTotalOrderNumber = 0;
				OriginalOrderKindUnitTotalOrderNumber = 0;
				OriginalOrderTypeUnitTotalOrderNumber = 0;
				OriginalOrderValueNumberUnitTotalOrderNumber = 0;
				TotalOrderNumber = 0;
				
				OriginalOrderValueNumberUnitTotalOrderCharNumber = 0;
				OriginalOrderLanguageSortUnitTotalOrderCharNumber = 0;
				OriginalOrderTypeUnitTotalOrderCharNumber = 0;
				OriginalOrderKindUnitTotalOrderCharNumber = 0;
				OriginalOrderNumberUnitTotalOrderCharNumber = 0;
				TotalOrderCharNumber = 0;
				
			}//OrderValueNumberCounterStartMarker&0
			
			if(OrderTypeCounterStartMarker <= 0){
				if(PartialOrderValueNumber == 0){
					if(OriginalOrderValueNumber == 0){
						OrderValueNumberCounterStartMarker = 1;
						MaxOrderValueNumber = 0;
						OriginalOrderValueNumberUnitMaxOrderCharNumber = 0;
						OriginalOrderValueNumberUnitMaxOrderNumber = 0;
						TotalOriginalParameterArrayOrderValueNumber = 0;
						MaxOriginalParameterArrayOrderValueNumber = 0;
						OriginalOrderValueNumberUnitMaxPartialOrderValueNumber = 0;
						if(MaxLoopTime >= 1){
							TotalOriginalParameterArrayOrderValueNumber = 0;
							MaxOriginalParameterArrayOrderValueNumber = MaxOneApplicationParameterArrayOrderValueNumber;
							
							TotalOriginalOrderValueNumber = 0;
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(SubRoutineStatus == ParameterApplicationSubRoutineStatus){
									MaxOriginalOrderValueNumber = MaxOriginalParameterArrayOrderValueNumber;
								}//SubRoutineStatus
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								if(SubRoutineStatus == AnalysisApplicationSubRoutineStatus){
									MaxOriginalOrderValueNumber = 1;
								}//SubRoutineStatus
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(SubRoutineStatus == ValueApplicationSubRoutineStatus){
									MaxOriginalOrderValueNumber = 1;
								}else if(SubRoutineStatus == NullValueApplicationSubRoutineStatus){
									MaxOriginalOrderValueNumber = 1;
								}//SubRoutineStatus
							}//RoutineStatus
							
						}//MaxLoopTime&1
					}//OriginalOrderValueNumber&0
					
					if(MaxOriginalOrderValueNumber >= 1){
						OriginalOrderValueNumber = OriginalOrderValueNumber + 1;
					}//MaxOriginalOrderValueNumber
					
					if(OriginalOrderValueNumber == MaxOriginalOrderValueNumber){
						OriginalOrderValueNumberEndMarker = 1;
					}//OriginalOrderValueNumber&MaxOriginalOrderValueNumber
					
					MaxOriginalPartialOrderValueNumber = 0;
					if(MaxOriginalOrderValueNumber >= 1){
						MaxOriginalPartialOrderValueNumber = 1;
					}//MaxOriginalOrderValueNumber&1
				}//PartialOrderValueNumber&0
				
				
				OrderValueNumber = 0;
				WholeOrderValueNumber = 0;
				if(MaxOriginalPartialOrderValueNumber >= 1){
					PartialOrderValueNumber = PartialOrderValueNumber + 1;
					OrderValueNumber = OriginalOrderValueNumberUnitMaxPartialOrderValueNumber + PartialOrderValueNumber;
					WholeOrderValueNumber = TotalOrderValueNumber + OrderValueNumber;
				}//MaxOriginalPartialOrderValueNumber&1
				if(PartialOrderValueNumber == MaxOriginalPartialOrderValueNumber){
					PartialOrderValueNumberEndMarker = 1;
				}//PartialOrderValueNumber&MaxAPplicationChosenPartialOrderValueNumber
				
				MaxOriginalCarryUpDigitOrderNumber = 0;
				MaxOriginalSuffixOrderNumber = 0;
				MaxOriginalPlusOrMinusSignOrderNumber = 0;
				MaxOriginalPrefixOrderNumber = 0;
				MaxOriginalDotOrderNumber = 0;
				MaxOriginalNullOrderNumber = 0;
				MaxOriginalExponentialOrderNumber = 0;
				MaxOriginalDecimalOrderOrderNumber = 0;
				MaxOriginalWholeDigitOrderOrderNumber = 0;
				
				
				OriginalOrderKindUnitMaxCarryUpDigitOrderNumber = 0;
				OriginalOrderKindUnitMaxSuffixOrderNumber = 0;
				OriginalOrderKindUnitMaxPlusOrMinusSignOrderNumber = 0;
				OriginalOrderKindUnitMaxPrefixOrderNumber = 0;
				OriginalOrderKindUnitMaxDotOrderNumber = 0;
				OriginalOrderKindUnitMaxNullOrderNumber = 0;
				OriginalOrderKindUnitMaxExponentialOrderNumber = 0;
				OriginalOrderKindUnitMaxDecimalOrderOrderNumber = 0;
				
				OriginalOrderKindUnitMaxExponentialOrderCharNumber = 0;
				OriginalOrderKindUnitMaxDecimalOrderOrderCharNumber = 0;
				OriginalOrderKindUnitMaxWholeDigitOrderOrderCharNumber = 0;
				OriginalOrderKindUnitMaxCarryUpDigitOrderCharNumber = 0;
				OriginalOrderKindUnitMaxSuffixOrderCharNumber = 0;
				OriginalOrderKindUnitMaxPlusOrMinusSignOrderCharNumber = 0;
				OriginalOrderKindUnitMaxPrefixOrderCharNumber = 0;
				OriginalOrderKindUnitMaxDotOrderCharNumber = 0;
				OriginalOrderKindUnitMaxNullOrderCharNumber = 0;
				
				CandidateMaxOriginalDecimalOrderOrderNumber = 1;
				CandidateMaxOriginalWholeDigitOrderOrderNumber = 1;
				CandidateMaxOriginalCarryUpDigitOrderNumber = 1;
				CandidateMaxOriginalPlusOrMinusSignOrderNumber = 1;
				CandidateMaxOriginalDotOrderNumber = 1;
				CandidateMaxOriginalNullOrderNumber = 1;
				
				OriginalOrderKindUnitMaxOriginalExponentialOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalSuffixOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalDotOrderCharNumber = 0;
				OriginalOrderKindUnitMaxOriginalNullOrderCharNumber = 0;
				
				if(MaxOriginalPartialOrderValueNumber >= 1){
					if(RoutineStatus == ValueApplicationRoutineStatus){
						if(PreValueApplicationRoutineStatusGlobalTotalOrderType >= 1){
							if(LoopTimeModulo2Plus1 == 1){
								OriginalOrderKindUnitMaxOriginalExponentialOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + ExponentialValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + DecimalOrderOrderNumberValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + WholeDigitOrderOrderNumberValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + CarryUpDigitValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalSuffixOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + SuffixValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + PlusOrMinusSignValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + PrefixValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalDotOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + DotValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalNullOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[(TotalOrderType + NullValueApplicationOrderType) - 1];
							}else if(LoopTimeModulo2Plus1 == 2){
								OriginalOrderKindUnitMaxOriginalExponentialOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + ExponentialValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + DecimalOrderOrderNumberValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + WholeDigitOrderOrderNumberValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + CarryUpDigitValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalSuffixOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + SuffixValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + PlusOrMinusSignValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + PrefixValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalDotOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + DotValueApplicationOrderType) - 1];
								OriginalOrderKindUnitMaxOriginalNullOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[(TotalOrderType + NullValueApplicationOrderType) - 1];
							}//LoopTimeModulo2Plus1
						}//PreValueApplicationRoutineStatusGlobalTotalOrderType&1
					}//RoutineStatus
				}//MaxOriginalPartialOrderValueNumber&1
				
				Value = Value0;
				RoundUpOneDigit = RoundUpOneDigit0;
				SetWholeDigitOrderOrderNumber = SetWholeDigitOrderOrderNumber0;
				SetDecimalOrderOrderNumber = SetDecimalOrderOrderNumber0;
				SetWholeDigitOrderOrderNumberMarker = SetWholeDigitOrderOrderNumberMarker0;
				SetDecimalOrderOrderNumberMarker = SetDecimalOrderOrderNumberMarker0;
				PlusOrMinusSignMarker = PlusOrMinusSignMarker0;
				DecimalOrderOrderNumber = DecimalOrderOrderNumber0;
				
			}//OrderTypeCounterStartMarker
			
			if(OrderKindCounterStartMarker <= 0){
				if(PartialOrderType == 0){
					if(OriginalOrderType == 0){
						OrderTypeCounterStartMarker = 1;
						OriginalOrderTypeUnitMaxOrderCharNumber = 0;
						OriginalOrderTypeUnitMaxOrderNumber = 0;
						OriginalOrderTypeUnitMaxPartialOrderType = 0;
						
						CalculatedMaxOriginalCarryUpDigitOrderNumber = 0;
						
						Value = Value0;
						RoundUpOneDigit = RoundUpOneDigit0;
						SetWholeDigitOrderOrderNumber = SetWholeDigitOrderOrderNumber0;
						SetDecimalOrderOrderNumber = SetDecimalOrderOrderNumber0;
						SetWholeDigitOrderOrderNumberMarker = SetWholeDigitOrderOrderNumberMarker0;
						SetDecimalOrderOrderNumberMarker = SetDecimalOrderOrderNumberMarker0;
						PlusOrMinusSignMarker = PlusOrMinusSignMarker0;
						DecimalOrderOrderNumber = DecimalOrderOrderNumber0;
						
						ValueStringMinWholeDigitOrderOrderNumber = 0;
						ValueStringMaxWholeDigitOrderOrderNumber = 0;
						ValueStringMinDecimalOrderOrderNumber = 0;
						ValueStringMaxDecimalOrderOrderNumber = 0;
						ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker = 0;
						ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker = 0;
						ValueStringMinDecimalOrderOrderNumberRestrictionMarker = 0;
						ValueStringMaxDecimalOrderOrderNumberRestrictionMarker = 0;
						
						OriginalOrderKindCutOriginalOrderNumberUnitTotalExponentialOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalDecimalOrderOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalSuffixOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalPlusOrMinusSignOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalPrefixOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalDotOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalNullOrderNumber = 0;
						OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber = 0;
						OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = 0;
						SavedOriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = 0;
						OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = 0;
						OriginalOrderKindUnitPlusOrMinusSignOrderDenialMarker = 0;
						
						IntPlusOrMinusSign = 0;
						AbsoluteValue = 0.0d;
						if(Value < 0.0d){
							IntPlusOrMinusSign = -1;
							AbsoluteValue = -Value;
						}else if(Value > 0.0d){
							IntPlusOrMinusSign = 1;
							AbsoluteValue = Value;
						}else{//Value
							IntPlusOrMinusSign = 0;
							AbsoluteValue = Value;
						}//Value&0.0d
						AbsoluteValueWholeDigitOrderPart = (double)((int)AbsoluteValue);
						AbsoluteValueDecimalOrderPart = AbsoluteValue - AbsoluteValueWholeDigitOrderPart;
						
						IntValueBase = IntValueBase0;
						
						IntValueBaseErrorMarker = 0;
						if(IntValueBase0 < 2){
							IntValueBaseErrorMarker = 1;
						}else if(IntValueBase0 >= 2){
							IntValueBaseErrorMarker = 0;
						}//IntValueBase0
						
						MaxOrderType = 0;
						CandidateTotalOriginalOrderType = 0;
						CandidateMaxOriginalOrderType = 0;
						
						if(MaxOriginalOrderValueNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber == 0){
									CandidateTotalOriginalOrderType = TotalOrderType;
									CandidateMaxOriginalOrderType = MaxParameterApplicationTokenType;
								}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber >= 1){
									SavedOrderTypeReadStatus = ParameterApplicationReadStatus;
									CandidateTotalOriginalOrderType = 0;
									CandidateMaxOriginalOrderType = 0;
								}//PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber&1
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								SavedOrderTypeReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderType = TotalOrderType;
								CandidateMaxOriginalOrderType = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								SavedOrderTypeReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderType = TotalOrderType;
								CandidateMaxOriginalOrderType = MaxValueApplicationOrderType;
							}//RoutineStatus
						}//MaxOriginalOrderValueNumber&1
						
						TotalOriginalParameterArrayOrderType = 0;
						MaxOriginalParameterArrayOrderType = 0;
						ParameterArrayOrderValueNumberUnitOutputDenialMarker = 0;
						WholeOriginalParameterArrayOrderValueNumber = 0;
						
						if(MaxOriginalOrderValueNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								OriginalParameterArrayOrderValueNumber = OriginalOrderValueNumber;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								OriginalParameterArrayOrderValueNumber = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								OriginalParameterArrayOrderValueNumber = 1;
							}//RoutineStatus
						}//MaxOriginalOrderValueNumber&1	
						if(OriginalParameterArrayOrderValueNumber < 1){
							ParameterArrayOrderValueNumberUnitOutputDenialMarker = 1;
						}//OriginalParameterArrayOrderValueNumber&0
						if(OriginalParameterArrayOrderValueNumber > MaxOriginalParameterArrayOrderValueNumber){
							ParameterArrayOrderValueNumberUnitOutputDenialMarker = 2;
						}//OriginalParameterArrayOrderValueNumber&0
						
						if(ParameterArrayOrderValueNumberUnitOutputDenialMarker == 0){
							WholeOriginalParameterArrayOrderValueNumber = TotalOriginalParameterArrayOrderValueNumber + OriginalParameterArrayOrderValueNumber;
							if(PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber >= 1){
								if(LoopTimeModulo2Plus1 == 1){
									TotalOriginalParameterArrayOrderType = TotalParameterStringTypes[WholeOriginalParameterArrayOrderValueNumber - 1];
									MaxOriginalParameterArrayOrderType = MaxParameterStringTypes[WholeOriginalParameterArrayOrderValueNumber - 1];
								}else if(LoopTimeModulo2Plus1 == 2){
									TotalOriginalParameterArrayOrderType = CopyTotalParameterStringTypes[WholeOriginalParameterArrayOrderValueNumber - 1];
									MaxOriginalParameterArrayOrderType = CopyMaxParameterStringTypes[WholeOriginalParameterArrayOrderValueNumber - 1];
								}//OrderCharNumberLoopTimeModulo2Plus1
							}//PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber&1
						}//ParameterArrayOrderValueNumberUnitOutputDenialMarker&0
						
						TotalOriginalOrderType = 0;
						MaxOriginalOrderType = 0;
						
						if(MaxOriginalPartialOrderValueNumber >= 1){
							if(SavedOrderTypeReadStatus == UndefinedApplicationReadStatus){
								TotalOriginalOrderType = CandidateTotalOriginalOrderType;
								MaxOriginalOrderType = CandidateMaxOriginalOrderType;
							}else if(SavedOrderTypeReadStatus == ParameterApplicationReadStatus){
								TotalOriginalOrderType = TotalOriginalParameterArrayOrderType;
								MaxOriginalOrderType = MaxOriginalParameterArrayOrderType;
							}//SavedOrderTypeReadStatus
						}//MaxOriginalPartialOrderValueNumber&1
						
					}//OriginalOrderType&0
					
					WholeOriginalOrderType = 0;
					
					if(MaxOriginalOrderType >= 1){
						OriginalOrderType = OriginalOrderType + 1;
						WholeOriginalOrderType = TotalOriginalOrderType + OriginalOrderType;
					}//MaxOriginalOrderType&1
					
					if(OriginalOrderType == MaxOriginalOrderType){
						OriginalOrderTypeEndMarker = 1;
					}//OriginalOrderType&MaxOriginalOrderType
					
					MaxOriginalPartialOrderType = 0;
					if(MaxOriginalOrderType >= 1){
						if(MaxOriginalPartialOrderValueNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								MaxOriginalPartialOrderType = 1;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								MaxOriginalPartialOrderType = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								MaxOriginalPartialOrderType = 1;
							}//RoutineStatus
						}//MaxOriginalPartialOrderValueNumber&0
					}//MaxOriginalOrderType&1
					
				}//PartialOrderType&0
				
				if(MaxOriginalOrderType >= 1){
					if(RoutineStatus == ParameterApplicationRoutineStatus){
						OriginalParameterArrayOrderType = OriginalOrderType;
					}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
						OriginalParameterArrayOrderType = FormatStringApplicationTokenType;
					}else if(RoutineStatus == ValueApplicationRoutineStatus){
						if(OriginalOrderType == ExponentialValueApplicationOrderType){
							OriginalParameterArrayOrderType = UndefinedApplicationTokenType;
						}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							OriginalParameterArrayOrderType = OperatorApplicationTokenType;
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							OriginalParameterArrayOrderType = OperatorApplicationTokenType;
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							OriginalParameterArrayOrderType = DigitApplicationTokenType;
						}//OriginalOrderType
					}//RoutineStatus
				}//MaxOriginalOrderType&1
				
				OrderType = 0;
				WholeOrderType = 0;
				
				if(MaxOriginalPartialOrderType >= 1){
					PartialOrderType = PartialOrderType + 1;
					OrderType = OriginalOrderTypeUnitMaxPartialOrderType + PartialOrderType;
					WholeOrderType = TotalOrderType + OrderType;
				}//MaxOriginalPartialOrderType&1
				
				if(PartialOrderType == MaxOriginalPartialOrderType){
					PartialOrderTypeEndMarker = 1;
				}//PartialOrderType&MaxAPplicationChosenPartialOrderType
				
			}//OrderKindCounterStartMarker&0
			
			if(OrderLanguageSortCounterStartMarker <= 0){
				if(PartialOrderKind == 0){
					if(OriginalOrderKind == 0){
						OrderKindCounterStartMarker = 1;
						OriginalOrderKindUnitMaxOrderCharNumber = 0;
						OriginalOrderKindUnitMaxOrderNumber = 0;
						OriginalOrderKindUnitMaxPartialOrderKind = 0;
						OriginalOrderKindCutTotalOrderCharNumber = 0;
						OriginalOrderKindCutTotalOrderNumber = 0;
						
						MaxOrderKind = 0;
						CandidateMaxOriginalOrderKind = 0;
						CandidateTotalOriginalOrderKind = 0;
						SavedOrderKindReadStatus = UndefinedApplicationReadStatus;
						
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber = 0;
								OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = 0;
							}//
						}//
						
						
						if(MaxOriginalOrderType >= 1){
							
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(PreParameterApplicationRoutineStatusGlobalTotalOrderType == 0){
									CandidateTotalOriginalOrderKind = TotalOrderKind;
									if(OriginalOrderType == FormatStringApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxFormatStringApplicationTokenKind;
									}else if(OriginalOrderType == ValueApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxValueApplicationTokenKind;
									}else if(OriginalOrderType == LeftBracketApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxLeftBracketApplicationTokenKind;
									}else if(OriginalOrderType == RightBracketApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxRightBracketApplicationTokenKind;
									}else if(OriginalOrderType == ArgumentStatementApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxArgumentStatementApplicationTokenKind;
									}else if(OriginalOrderType == DigitApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxDigitApplicationTokenKind;
									}else if(OriginalOrderType == OperatorApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxOperatorApplicationTokenKind;
									}else if(OriginalOrderType == BlankApplicationTokenType){
										CandidateMaxOriginalOrderKind = MaxBlankApplicationTokenKind;
									}//OriginalOrderType
								}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderType >= 1){
									SavedOrderKindReadStatus = ParameterApplicationReadStatus;
									CandidateTotalOriginalOrderKind = 0;
									CandidateMaxOriginalOrderKind = 0;
								}//PreParameterApplicationRoutineStatusGlobalTotalOrderType&1
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								SavedOrderKindReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderKind = TotalOrderKind;
								CandidateMaxOriginalOrderKind = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								SavedOrderKindReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderKind = TotalOrderKind;
								CandidateMaxOriginalOrderKind = MaxValueApplicationOrderKind;
							}//RoutineStatus
						}//MaxOriginalOrderType&1
						
						ParameterArrayOrderTypeUnitOutputDenialMarker = 0;
						WholeOriginalParameterArrayOrderType = 0;
						TotalOriginalParameterArrayOrderKind = 0;
						MaxOriginalParameterArrayOrderKind = 0;
						
						if(ParameterArrayOrderValueNumberUnitOutputDenialMarker != 0){
							ParameterArrayOrderTypeUnitOutputDenialMarker = -1;
						}//ParameterArrayOrderValueNumberUnitOutputDenialMarker&0
						if(OriginalParameterArrayOrderType < 1){
							ParameterArrayOrderTypeUnitOutputDenialMarker = 1;
						}//OriginalParameterArrayOrderType&0
						if(OriginalParameterArrayOrderType > MaxOriginalParameterArrayOrderType){
							ParameterArrayOrderTypeUnitOutputDenialMarker = 2;
						}//OriginalParameterArrayOrderType&0
						
						if(ParameterArrayOrderTypeUnitOutputDenialMarker == 0){
							WholeOriginalParameterArrayOrderType = TotalOriginalParameterArrayOrderType + OriginalParameterArrayOrderType;
							if(PreParameterApplicationRoutineStatusGlobalTotalOrderType >= 1){
								if(LoopTimeModulo2Plus1 == 1){
									TotalOriginalParameterArrayOrderKind = TotalParameterStringKinds[WholeOriginalParameterArrayOrderType - 1];
									MaxOriginalParameterArrayOrderKind = MaxParameterStringKinds[WholeOriginalParameterArrayOrderType - 1];
								}else if(LoopTimeModulo2Plus1 == 2){
									TotalOriginalParameterArrayOrderKind = CopyTotalParameterStringKinds[WholeOriginalParameterArrayOrderType - 1];
									MaxOriginalParameterArrayOrderKind = CopyMaxParameterStringKinds[WholeOriginalParameterArrayOrderType - 1];
								}//OrderCharNumberLoopTimeModulo2Plus1
							}//PreParameterApplicationRoutineStatusGlobalTotalOrderType&1
						}//ParameterArrayOrderTypeUnitOutputDenialMarker&0
						
						OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
						
						if(MaxOriginalOrderValueNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(SubRoutineStatus == ParameterApplicationSubRoutineStatus){
									OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
								}//SubRoutineStatus
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								if(SubRoutineStatus == AnalysisApplicationSubRoutineStatus){
									OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
								}//SubRoutineStatus
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(SubRoutineStatus == ValueApplicationSubRoutineStatus){
									if(OriginalOrderType == ExponentialValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == SuffixValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == PrefixValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == DotValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}else if(OriginalOrderType == NullValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 1;
									}//OriginalOrderType
								}else if(SubRoutineStatus == NullValueApplicationSubRoutineStatus){
									if(OriginalOrderType == ExponentialValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 2;
									}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 3;
									}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 4;
									}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 5;
									}else if(OriginalOrderType == SuffixValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 6;
									}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 7;
									}else if(OriginalOrderType == PrefixValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 8;
									}else if(OriginalOrderType == DotValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 9;
									}else if(OriginalOrderType == NullValueApplicationOrderType){
										OriginalOrderTypeUnitPartialOrderTypeDenialMarker = 0;
									}//OriginalOrderType
								}//SubRoutineStatus
							}//RoutineStatus
						}//MaxOriginalOrderValueNumber&1
						
						TotalOriginalOrderKind = 0;
						MaxOriginalOrderKind = 0;
						
						if(MaxOriginalPartialOrderType >= 1){
							if(OriginalOrderTypeUnitPartialOrderTypeDenialMarker == 0){
								if(SavedOrderKindReadStatus == UndefinedApplicationReadStatus){
									TotalOriginalOrderKind = CandidateTotalOriginalOrderKind;
									MaxOriginalOrderKind = CandidateMaxOriginalOrderKind;
								}else if(SavedOrderKindReadStatus == ParameterApplicationReadStatus){
									TotalOriginalOrderKind = TotalOriginalParameterArrayOrderKind;
									MaxOriginalOrderKind = MaxOriginalParameterArrayOrderKind;
								}//SavedOrderKindReadStatus
							}//OriginalOrderTypeUnitPartialOrderTypeDenialMarker&0
						}//MaxOriginalPartialOrderType&1
						
						OrderKindUnitTotalOriginalOrderNumber = 0;
						OrderKindUnitMaxOriginalOrderNumber = 0;
						OrderKindUnitTotalOriginalOrderCharNumber = 0;
						OrderKindUnitMaxOriginalOrderCharNumber = 0;
						OrderKindCutTotalOriginalOrderCharNumber = 0;
						
						if(MaxOriginalOrderType >= 1){
							if(RoutineStatus == ValueApplicationRoutineStatus){
								if(PreValueApplicationRoutineStatusGlobalTotalOrderType >= 1){
									if(LoopTimeModulo2Plus1 == 1){
										OrderKindUnitTotalOriginalOrderNumber = StringKindUnitTotalValueStringNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitMaxOriginalOrderNumber = StringKindUnitMaxValueStringNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitTotalOriginalOrderCharNumber = StringKindUnitTotalValueStringCharNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitMaxOriginalOrderCharNumber = StringKindUnitMaxValueStringCharNumbers[WholeOriginalOrderType - 1];
										OrderKindCutTotalOriginalOrderCharNumber = StringKindCutTotalValueStringCharNumbers[WholeOriginalOrderType - 1];
									}else if(LoopTimeModulo2Plus1 == 2){
										OrderKindUnitTotalOriginalOrderNumber = CopyStringKindUnitTotalValueStringNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitMaxOriginalOrderNumber = CopyStringKindUnitMaxValueStringNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitTotalOriginalOrderCharNumber = CopyStringKindUnitTotalValueStringCharNumbers[WholeOriginalOrderType - 1];
										OrderKindUnitMaxOriginalOrderCharNumber = CopyStringKindUnitMaxValueStringCharNumbers[WholeOriginalOrderType - 1];
										OrderKindCutTotalOriginalOrderCharNumber = CopyStringKindCutTotalValueStringCharNumbers[WholeOriginalOrderType - 1];
									}//LoopTimeModulo2Plus1
								}//PreValueApplicationRoutineStatusGlobalTotalOrderType&1
							}//RoutineStatus
						}//MaxOriginalOrderType&1
						
					}//OriginalOrderKind&0
					
					WholeOriginalOrderKind = 0;
					if(MaxOriginalOrderKind >= 1){
						OriginalOrderKind = OriginalOrderKind + 1;
						WholeOriginalOrderKind = TotalOriginalOrderKind + OriginalOrderKind;
					}//MaxOriginalOrderKind&1
					if(OriginalOrderKind == MaxOriginalOrderKind){
						OriginalOrderKindEndMarker = 1;
					}//OriginalOrderKind&MaxOriginalOrderKind
					
					if(MaxOriginalOrderKind >= 1){
						if(RoutineStatus == ParameterApplicationRoutineStatus){
							OriginalParameterArrayOrderKind = OriginalOrderKind;
						}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
							OriginalParameterArrayOrderKind = FormatStringApplicationTokenKind;
						}else if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == ExponentialValueApplicationOrderType){
								OriginalParameterArrayOrderKind = UndefinedApplicationTokenKind;
							}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								OriginalParameterArrayOrderKind = ValueDigitApplicationTokenKind;
							}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								OriginalParameterArrayOrderKind = ValueDigitApplicationTokenKind;
							}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
								OriginalParameterArrayOrderKind = CarryUpDigitApplicationTokenKind;
							}else if(OriginalOrderType == SuffixValueApplicationOrderType){
								OriginalParameterArrayOrderKind = SuffixDigitApplicationTokenKind;
							}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
								OriginalParameterArrayOrderKind = PrefixSignOperatorApplicationTokenKind;
							}else if(OriginalOrderType == PrefixValueApplicationOrderType){
								OriginalParameterArrayOrderKind = PrefixDigitApplicationTokenKind;
							}else if(OriginalOrderType == DotValueApplicationOrderType){
								OriginalParameterArrayOrderKind = DotOperatorApplicationTokenKind;
							}else if(OriginalOrderType == NullValueApplicationOrderType){
								OriginalParameterArrayOrderKind = NullDigitApplicationTokenKind;
							}//OriginalOrderType
						}//RoutineStatus
					}//MaxOriginalOrderKind&1
					
					MaxOriginalPartialOrderKind = 0;
					if(MaxOriginalOrderKind >= 1){
						if(MaxOriginalPartialOrderType >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								MaxOriginalPartialOrderKind = 1;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								MaxOriginalPartialOrderKind = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								MaxOriginalPartialOrderKind = 1;
							}//RoutineStatus
						}//MaxOriginalPartialOrderType&1
					}//MaxOriginalOrderKind&1
				}//PartialOrderKind&0
				
				OrderKind = 0;
				WholeOrderKind = 0;
				
				if(MaxOriginalPartialOrderKind >= 1){
					PartialOrderKind = PartialOrderKind + 1;
					OrderKind = OriginalOrderKindUnitMaxPartialOrderKind + PartialOrderKind;
					WholeOrderKind = TotalOrderKind + OrderKind;
				}//MaxOriginalPartialOrderKind&1
				
				if(PartialOrderKind == MaxOriginalPartialOrderKind){
					PartialOrderKindEndMarker = 1;
				}//PartialOrderKind&MaxAPplicationChosenPartialOrderKind
			}//OrderLanguageSortCounterStartMarker&0
			
			if(OrderNumberCounterStartMarker <= 0){
				if(PartialOrderLanguageSort == 0){
					if(OriginalOrderLanguageSort == 0){
						
						MaxOrderLanguageSort = 0;
						MaxOriginalOrderLanguageSort = 0;
						CandidateTotalOriginalOrderLanguageSort = 0;
						SavedOrderLanguageSortReadStatus = UndefinedApplicationReadStatus;
						
						if(MaxOriginalOrderKind >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind == 0){
									CandidateTotalOriginalOrderLanguageSort = TotalOrderLanguageSort;
									CandidateMaxOriginalOrderLanguageSort = MaxApplicationLanguageSort;
								}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind >= 1){
									SavedOrderLanguageSortReadStatus = ParameterApplicationReadStatus;
									CandidateTotalOriginalOrderLanguageSort = 0;
									CandidateMaxOriginalOrderLanguageSort = 0;
								}//PreParameterApplicationRoutineStatusGlobalTotalOrderKind&1
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								SavedOrderLanguageSortReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderLanguageSort = TotalOrderLanguageSort;
								CandidateMaxOriginalOrderLanguageSort = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								SavedOrderLanguageSortReadStatus = UndefinedApplicationReadStatus;
								CandidateTotalOriginalOrderLanguageSort = TotalOrderLanguageSort;
								CandidateMaxOriginalOrderLanguageSort = 1;
							}//OrderValueNumberUnitRoutineStatus
						}//MaxOriginalOrderKind&1
						
						TotalOriginalParameterArrayOrderLanguageSort = 0;
						MaxOriginalParameterArrayOrderLanguageSort = 0;
						ParameterArrayOrderKindUnitOutputDenialMarker = 0;
						WholeOriginalParameterArrayOrderKind = 0;
						
						if(ParameterArrayOrderTypeUnitOutputDenialMarker != 0){
							ParameterArrayOrderKindUnitOutputDenialMarker = -1;
						}//ParameterArrayOrderTypeUnitOutputDenialMarker&0
						if(OriginalParameterArrayOrderKind < 1){
							ParameterArrayOrderKindUnitOutputDenialMarker = 1;
						}//OriginalParameterArrayOrderKind&0
						if(OriginalParameterArrayOrderKind > MaxOriginalParameterArrayOrderKind){
							ParameterArrayOrderKindUnitOutputDenialMarker = 2;
						}//OriginalParameterArrayOrderKind&0
						
						if(ParameterArrayOrderKindUnitOutputDenialMarker == 0){
							WholeOriginalParameterArrayOrderKind = TotalOriginalParameterArrayOrderKind + OriginalParameterArrayOrderKind;
							if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind >= 1){
								if(LoopTimeModulo2Plus1 == 1){
									TotalOriginalParameterArrayOrderLanguageSort = TotalParameterStringLanguageSorts[WholeOriginalParameterArrayOrderKind - 1];
									MaxOriginalParameterArrayOrderLanguageSort = MaxParameterStringLanguageSorts[WholeOriginalParameterArrayOrderKind - 1];
								}else if(LoopTimeModulo2Plus1 == 2){
									TotalOriginalParameterArrayOrderLanguageSort = CopyTotalParameterStringLanguageSorts[WholeOriginalParameterArrayOrderKind - 1];
									MaxOriginalParameterArrayOrderLanguageSort = CopyMaxParameterStringLanguageSorts[WholeOriginalParameterArrayOrderKind - 1];
								}//OrderCharLanguageSortLoopTimeModulo2Plus1
							}//PreParameterApplicationRoutineStatusGlobalTotalOrderKind&1
						}//ParameterArrayOrderKindUnitOutputDenialMarker&0
						
						TotalOriginalOrderLanguageSort = 0;
						MaxOriginalOrderLanguageSort = 0;
						
						if(MaxOriginalPartialOrderKind >= 1){
							if(SavedOrderLanguageSortReadStatus == UndefinedApplicationReadStatus){
								TotalOriginalOrderLanguageSort = CandidateTotalOriginalOrderLanguageSort;
								MaxOriginalOrderLanguageSort = CandidateMaxOriginalOrderLanguageSort;
							}else if(SavedOrderLanguageSortReadStatus == ParameterApplicationReadStatus){
								TotalOriginalOrderLanguageSort = TotalOriginalParameterArrayOrderLanguageSort;
								MaxOriginalOrderLanguageSort = MaxOriginalParameterArrayOrderLanguageSort;
							}//SavedOrderLanguageSortReadStatus
						}//MaxOriginalPartialOrderKind&1
						
						OrderLanguageSortCounterStartMarker = 1;
						CurrentApplicationLanguageSort = FirstApplicationLanguageSort;
						OriginalOrderLanguageSortUnitMaxOrderCharNumber = 0;
						OriginalOrderLanguageSortUnitMaxOrderNumber = 0;
						OriginalOrderLanguageSortUnitMaxPartialOrderLanguageSort = 0;
					}//OriginalOrderLanguageSort&0
					
					WholeOriginalOrderLanguageSort = 0;
					if(MaxOriginalOrderLanguageSort >= 1){
						OriginalOrderLanguageSort = OriginalOrderLanguageSort + 1;
						WholeOriginalOrderLanguageSort = TotalOriginalOrderLanguageSort + OriginalOrderLanguageSort;
					}//MaxOriginalOrderLanguageSort&0
					if(OriginalOrderLanguageSort == MaxOriginalOrderLanguageSort){
						OriginalOrderLanguageSortEndMarker = 1;
					}//OriginalOrderLanguageSort&MaxOriginalOrderLanguageSort
					
					if(MaxOriginalOrderLanguageSort >= 1){
						if(RoutineStatus == ParameterApplicationRoutineStatus){
							OriginalParameterArrayOrderLanguageSort = OriginalOrderLanguageSort;
						}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
							OriginalParameterArrayOrderLanguageSort = CurrentApplicationLanguageSort;
						}else if(RoutineStatus == ValueApplicationRoutineStatus){
							OriginalParameterArrayOrderLanguageSort = CurrentApplicationLanguageSort;
						}//RoutineStatus
					}//MaxOriginalOrderLanguageSort&1
					
					MaxOriginalPartialOrderLanguageSort = 0;
					if(MaxOriginalOrderLanguageSort >= 1){
						if(MaxOriginalPartialOrderKind >= 1){
							MaxOriginalPartialOrderLanguageSort = 1;
						}//MaxOriginalPartialOrderKind&1
					}//MaxOriginalOrderLanguageSort&1
				}//PartialOrderLanguageSort&0
				
				OrderLanguageSort = 0;
				WholeOrderLanguageSort = 0;
				
				if(MaxOriginalPartialOrderLanguageSort >= 1){
					PartialOrderLanguageSort = PartialOrderLanguageSort + 1;
					OrderLanguageSort = OriginalOrderLanguageSortUnitMaxPartialOrderLanguageSort + PartialOrderLanguageSort;
					WholeOrderLanguageSort = TotalOrderLanguageSort + OrderLanguageSort;
				}//MaxOriginalPartialOrderLanguageSort&1
				
				if(PartialOrderLanguageSort == MaxOriginalPartialOrderLanguageSort){
					PartialOrderLanguageSortEndMarker = 1;
				}//PartialOrderLanguageSort&MaxAPplicationChosenPartialOrderLanguageSort
				
			}//OrderNumberCounterStartMarker&0
			
			if(OrderCharNumberCounterStartMarker <= 0){
				if(PartialOrderNumber == 0){
					if(PartialOrderNumberLoopTime == 0){
						if(OriginalOrderNumber == 0){
							if(OriginalOrderNumberLoopTime == 0){
								OrderNumberCounterStartMarker = 1;
								
								if(MaxOriginalOrderLanguageSort >= 1){
									if(RoutineStatus == ValueApplicationRoutineStatus){
										if(OriginalOrderType == ExponentialValueApplicationOrderType){
											MaxOriginalExponentialOrderNumber = 1;
										}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
											ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
					 						ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
											MaxOriginalDecimalOrderOrderNumber = CandidateMaxOriginalDecimalOrderOrderNumber;
										}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
											MaxOriginalWholeDigitOrderOrderNumber = CandidateMaxOriginalWholeDigitOrderOrderNumber;
											RoundDownToZeroMarker = 0;
											WholeDigitOrderOrderNumber = 0;
										}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
											MaxOriginalCarryUpDigitOrderNumber = CalculatedMaxOriginalCarryUpDigitOrderNumber;
										}else if(OriginalOrderType == SuffixValueApplicationOrderType){
											MaxOriginalSuffixOrderNumber = 0;
											if(SetDecimalOrderOrderNumberMarker == 0){
												MaxOriginalSuffixOrderNumber = 0;
											}else if(SetDecimalOrderOrderNumberMarker != 0){
												if(SetDecimalOrderOrderNumber <= -1){
													MaxOriginalSuffixOrderNumber = 0;
												}else if(SetDecimalOrderOrderNumber >= 0){
													if(SetDecimalOrderOrderNumber < DecimalOrderOrderNumber){
														MaxOriginalSuffixOrderNumber = 0;
													}else if(SetDecimalOrderOrderNumber >= DecimalOrderOrderNumber){
														if(DecimalOrderOrderNumber <= -1){
															MaxOriginalSuffixOrderNumber = SetDecimalOrderOrderNumber;
														}else if(DecimalOrderOrderNumber >= 0){
															MaxOriginalSuffixOrderNumber = SetDecimalOrderOrderNumber - DecimalOrderOrderNumber;
														}//DecimalOrderOrderNumber
													}//SetDecimalOrderOrderNumber
												}//SetDecimalOrderOrderNumber&0
											}//SetDecimalOrderOrderNumberMarker&0
										}else if(OriginalOrderType == PrefixValueApplicationOrderType){
											MaxOriginalPrefixOrderNumber = 0;
											if(SetWholeDigitOrderOrderNumberMarker == 0){
												MaxOriginalPrefixOrderNumber = 0;
											}else if(SetWholeDigitOrderOrderNumberMarker != 0){
												if(SetWholeDigitOrderOrderNumber <= 0){
													MaxOriginalPrefixOrderNumber = 0;
												}else if(SetWholeDigitOrderOrderNumber >= 1){
													if(SetWholeDigitOrderOrderNumber <= OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber){
														MaxOriginalPrefixOrderNumber = 0;
													}else if(SetWholeDigitOrderOrderNumber > OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber){
														MaxOriginalPrefixOrderNumber = SetWholeDigitOrderOrderNumber - (OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber);
													}//SetWholeDigitOrderOrderNumber
												}//SetWholeDigitOrderOrderNumber&0
											}//SetWholeDigitOrderOrderNumberMarker&0
										}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
											MaxOriginalPlusOrMinusSignOrderNumber = CandidateMaxOriginalPlusOrMinusSignOrderNumber;
											MaxOriginalPlusOrMinusSignOrderNumberModulo2 = MaxOriginalPlusOrMinusSignOrderNumber - (int)((double)MaxOriginalPlusOrMinusSignOrderNumber/2.0d) * 2;
										}else if(OriginalOrderType == DotValueApplicationOrderType){
											DotOrderNumberAdditionDenialMarker = 0;
											if(SetDecimalOrderOrderNumberMarker == 0){
												if(DecimalOrderOrderNumber <= 0){
													DotOrderNumberAdditionDenialMarker = 1;
												}//DecimalOrderOrderNumber
											}else if(SetDecimalOrderOrderNumberMarker != 0){
												if(SetDecimalOrderOrderNumber <= 0){
													DotOrderNumberAdditionDenialMarker = 2;
												}//DecimalOrderOrderNumber
											}//SetDecimalOrderOrderNumberMarker&0
											
											if(SetWholeDigitOrderOrderNumberMarker != 0){
												if(SetWholeDigitOrderOrderNumber <= 0){
													DotOrderNumberAdditionDenialMarker = 3;
												}//SetWholeDigitOrderOrderNumber
											}//SetWholeDigitOrderOrderNumberMarker&0
											
											if(DotOrderNumberAdditionDenialMarker == 0){
												MaxOriginalDotOrderNumber = CandidateMaxOriginalDotOrderNumber;
											}else if(DotOrderNumberAdditionDenialMarker != 0){
												MaxOriginalDotOrderNumber = 0;
											}//DotOrderNumberAdditionDenialMarker&0
										}else if(OriginalOrderType == NullValueApplicationOrderType){
											MaxOriginalNullOrderNumber = CandidateMaxOriginalNullOrderNumber;
										}//OriginalOrderType
									}//RoutineStatus
								}//MaxOriginalOrderLanguageSort&1
									
								CandidateTotalOriginalOrderNumber = 0;
								CandidateMaxOriginalOrderNumber = 0;
								MaxOrderNumber = 0;
								SavedOrderNumberReadStatus = UndefinedApplicationReadStatus;
								
								if(MaxOriginalOrderLanguageSort >= 1){
									
									if(RoutineStatus == ParameterApplicationRoutineStatus){
										if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind == 0){
											CandidateTotalOriginalOrderNumber = TotalOrderNumber;
											if(OriginalOrderType == FormatStringApplicationTokenType){
												if(OriginalOrderKind == FormatStringApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxFormatStringApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == ValueApplicationTokenType){
												if(OriginalOrderKind == ValueApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxValueApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == LeftBracketApplicationTokenType){
												if(OriginalOrderKind == LeftBracketApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxLeftBracketApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == RightBracketApplicationTokenType){
												if(OriginalOrderKind == RightBracketApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxRightBracketApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == ArgumentStatementApplicationTokenType){
												if(OriginalOrderKind == ArgumentStatementApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxArgumentStatementApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == DigitApplicationTokenType){
												if(OriginalOrderKind == ValueDigitApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxNormalDigitApplicationTokenStringNumber;
												}else if(OriginalOrderKind == NullDigitApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxNullDigitApplicationTokenStringNumber;
												}else if(OriginalOrderKind == SuffixDigitApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxSuffixDigitApplicationTokenStringNumber;
												}else if(OriginalOrderKind == PrefixDigitApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxPrefixDigitApplicationTokenStringNumber;
												}else if(OriginalOrderKind == CarryUpDigitApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxCarryUpDigitApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == OperatorApplicationTokenType){
												if(OriginalOrderKind == PrefixSignOperatorApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxPrefixSignOperatorApplicationTokenStringNumber;
												}else if(OriginalOrderKind == MinusSignOperatorApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxMinusSignOperatorApplicationTokenStringNumber;
												}else if(OriginalOrderKind == PlusSignOperatorApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxPlusSignOperatorApplicationTokenStringNumber;
												}else if(OriginalOrderKind == ExponentialOperatorApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxExponentialOperatorApplicationTokenStringNumber;
												}else if(OriginalOrderKind == DotOperatorApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxDotOperatorApplicationTokenStringNumber;
												}//OriginalOrderKind
											}else if(OriginalOrderType == BlankApplicationTokenType){
												if(OriginalOrderKind == BlankApplicationTokenKind){
													CandidateMaxOriginalOrderNumber = MaxBlankApplicationTokenStringNumber;
												}//OriginalOrderKind
											}//OriginalOrderType
										}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind >= 1){
											SavedOrderNumberReadStatus = ParameterApplicationReadStatus;
											CandidateTotalOriginalOrderNumber = 0;
											CandidateMaxOriginalOrderNumber = 0;
										}//PreParameterApplicationRoutineStatusGlobalTotalOrderKind&1
									}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
										SavedOrderNumberReadStatus = ParameterApplicationReadStatus;
										CandidateTotalOriginalOrderNumber = 0;
										CandidateMaxOriginalOrderNumber = 0;
									}else if(RoutineStatus == ValueApplicationRoutineStatus){
										SavedOrderNumberReadStatus = UndefinedApplicationReadStatus;
										CandidateTotalOriginalOrderNumber = TotalOrderNumber;
										if(OriginalOrderType == ExponentialValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalExponentialOrderNumber;
										}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalDecimalOrderOrderNumber;
										}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalWholeDigitOrderOrderNumber;
										}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalCarryUpDigitOrderNumber;
										}else if(OriginalOrderType == SuffixValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalSuffixOrderNumber;
										}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalPlusOrMinusSignOrderNumber;
										}else if(OriginalOrderType == PrefixValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalPrefixOrderNumber;
										}else if(OriginalOrderType == DotValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalDotOrderNumber;
										}else if(OriginalOrderType == NullValueApplicationOrderType){
											CandidateMaxOriginalOrderNumber = MaxOriginalNullOrderNumber;
										}//OriginalOrderType
									}//RoutineStatus
								}//MaxOriginalOrderLanguageSort&1
								
								TotalOriginalParameterArrayOrderNumber = 0;
								MaxOriginalParameterArrayOrderNumber = 0;
								ParameterArrayOrderLanguageSortUnitOutputDenialMarker = 0;
								WholeOriginalParameterArrayOrderLanguageSort = 0;
								
								if(ParameterArrayOrderKindUnitOutputDenialMarker != 0){
									ParameterArrayOrderLanguageSortUnitOutputDenialMarker = -1;
								}//ParameterArrayOrderKindUnitOutputDenialMarker&0
								if(OriginalParameterArrayOrderLanguageSort < 1){
									ParameterArrayOrderLanguageSortUnitOutputDenialMarker = 1;
								}//OriginalParameterArrayOrderLanguageSort&0
								if(OriginalParameterArrayOrderLanguageSort > MaxOriginalParameterArrayOrderLanguageSort){
									ParameterArrayOrderLanguageSortUnitOutputDenialMarker = 2;
								}//OriginalParameterArrayOrderLanguageSort&0
								
								if(ParameterArrayOrderLanguageSortUnitOutputDenialMarker == 0){
									WholeOriginalParameterArrayOrderLanguageSort = TotalOriginalParameterArrayOrderLanguageSort + OriginalParameterArrayOrderLanguageSort;
									if(PreParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort >= 1){
										if(LoopTimeModulo2Plus1 == 1){
											TotalOriginalParameterArrayOrderNumber = TotalParameterStringNumbers[WholeOriginalParameterArrayOrderLanguageSort - 1];
											MaxOriginalParameterArrayOrderNumber = MaxParameterStringNumbers[WholeOriginalParameterArrayOrderLanguageSort - 1];
										}else if(LoopTimeModulo2Plus1 == 2){
											TotalOriginalParameterArrayOrderNumber = CopyTotalParameterStringNumbers[WholeOriginalParameterArrayOrderLanguageSort - 1];
											MaxOriginalParameterArrayOrderNumber = CopyMaxParameterStringNumbers[WholeOriginalParameterArrayOrderLanguageSort - 1];
										}//OrderCharNumberLoopTimeModulo2Plus1
									}//PreParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort&1
								}//ParameterArrayOrderLanguageSortUnitOutputDenialMarker&0
								
								MaxOriginalOrderNumberLoopTime = 0;
								
								if(MaxOriginalPartialOrderLanguageSort >= 1){
									MaxOriginalOrderNumberLoopTime = 2;
								}//MaxOriginalPartialOrderLanguageSort&1
								
							}//OriginalOrderNumberLoopTime&0
							
							OriginalOrderNumberUnitMaxPartialOrderNumber = 0;
							OriginalOrderNumberUnitMaxOrderCharNumber = 0;
							
							if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = 0;
								}//
							}//RoutineStatus
							
							TotalOriginalOrderNumber = 0;
							MaxOriginalOrderNumber = 0;
							
							if(MaxOriginalOrderNumberLoopTime >= 1){
								if(SavedOrderNumberReadStatus == UndefinedApplicationReadStatus){
									TotalOriginalOrderNumber = CandidateTotalOriginalOrderNumber;
									MaxOriginalOrderNumber = CandidateMaxOriginalOrderNumber;
								}else if(SavedOrderNumberReadStatus == ParameterApplicationReadStatus){
									TotalOriginalOrderNumber = TotalOriginalParameterArrayOrderNumber;
									MaxOriginalOrderNumber = MaxOriginalParameterArrayOrderNumber;
								}//SavedOrderNumberReadStatus
							}//MaxOriginalOrderNumberLoopTime&1
							
							if(MaxOriginalOrderNumberLoopTime >= 1){
								OriginalOrderNumberLoopTime = OriginalOrderNumberLoopTime + 1;
							}//MaxOriginalOrderNumberLoopTime&1
							if(OriginalOrderNumberLoopTime == MaxOriginalOrderNumberLoopTime){
								OriginalOrderNumberLoopTimeEndMarker = 1;
							}//OriginalOrderNumberLoopTime&MaxOriginalOrderNumberLoopTime
							
							
						}//OriginalOrderNumber&0
						
						WholeOriginalOrderNumber = 0;
						if(MaxOriginalOrderNumber >= 1){
							OriginalOrderNumber = OriginalOrderNumber + 1;
							WholeOriginalOrderNumber = TotalOriginalOrderNumber + OriginalOrderNumber;
						}//MaxOriginalOrderNumber&1
						
						
						if(OriginalOrderNumber == MaxOriginalOrderNumber){
							OriginalOrderNumberEndMarker = 1;
						}//OriginalOrderNumber&MaxOriginalOrderNumber
						
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
								AdjustingPlusOrMinusSignChoiceMarker = 0;
								AdjustingPlusOrMinusSignMarker = 0;
							}//OriginalOrderType
						}//RoutineStatus
						
						MaxPartialOrderNumberLoopTime = 0;
						if(MaxOriginalOrderNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								MaxPartialOrderNumberLoopTime = 1;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								MaxPartialOrderNumberLoopTime = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
									MaxPartialOrderNumberLoopTime = 2;
								}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									MaxPartialOrderNumberLoopTime = 2;
								}else{//OriginalOrderType
									MaxPartialOrderNumberLoopTime = 1;
								}//OriginalOrderType
							}//RoutineStatus
						}//MaxOriginalOrderNumber&1
						OrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = 0;
						
					}//PartialOrderNumberLoopTime&0
					
					if(MaxPartialOrderNumberLoopTime >= 1){
						PartialOrderNumberLoopTime = PartialOrderNumberLoopTime + 1;
					}//MaxPartialOrderNumberLoopTime&1
					if(PartialOrderNumberLoopTime == MaxPartialOrderNumberLoopTime){
						PartialOrderNumberLoopTimeEndMarker = 1;
					}//PartialOrderNumberLoopTime&MaxPartialOrderNumberLoopTime
					
					if(RoutineStatus == ValueApplicationRoutineStatus){
						if(PartialOrderNumberLoopTimeEndMarker != 0){
							if(OriginalOrderNumberLoopTimeEndMarker != 0){
								if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
									
									ValueStringMaxDecimalOrderOrderNumberRestrictionMarker = 1;
									if(SetDecimalOrderOrderNumberMarker == 0){
										if(DecimalOrderOrderNumber <= -1){
											ValueStringMaxDecimalOrderOrderNumber = 0;
										}else if(DecimalOrderOrderNumber >= 0){
											ValueStringMaxDecimalOrderOrderNumber = DecimalOrderOrderNumber;
										}//DecimalOrderOrderNumber&0
									}else if(SetDecimalOrderOrderNumberMarker != 0){
										if(SetDecimalOrderOrderNumber <= -1){
											ValueStringMaxDecimalOrderOrderNumber = 0;
										}else if(SetDecimalOrderOrderNumber >= 0){
											ValueStringMaxDecimalOrderOrderNumber = SetDecimalOrderOrderNumber;
										}//SetDecimalOrderOrderNumber&0
									}//SetDecimalOrderOrderNumberMarker&0
									
									if(SetWholeDigitOrderOrderNumberMarker == 0){
										ValueStringMinDecimalOrderOrderNumberRestrictionMarker = 0;
									}else if(SetWholeDigitOrderOrderNumberMarker != 0){
										if(SetWholeDigitOrderOrderNumber <= 0){
											ValueStringMinDecimalOrderOrderNumberRestrictionMarker = 1;
											ValueStringMinDecimalOrderOrderNumber = 1 - SetWholeDigitOrderOrderNumber;
										}else if(SetWholeDigitOrderOrderNumber >= 1){
											ValueStringMinDecimalOrderOrderNumberRestrictionMarker = 0;
										}//SetWholeDigitOrderOrderNumber&0
									}//SetWholeDigitOrderOrderNumberMarker&0
									
									if(SetDecimalOrderOrderNumberMarker != 0){
										if(SetDecimalOrderOrderNumber <= 0){
											ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker = 1;
											ValueStringMinWholeDigitOrderOrderNumber = 1 - SetDecimalOrderOrderNumber;
										}else if(SetDecimalOrderOrderNumber >= 1){
											ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker = 0;
										}//SetDecimalOrderOrderNumber&0
									}//SetDecimalOrderOrderNumberMarker&0
									
								}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									
									ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker = 1;
									
									if(SetWholeDigitOrderOrderNumberMarker == 0){
										if(WholeDigitOrderOrderNumber <= -1){
											ValueStringMaxWholeDigitOrderOrderNumber = 0;
										}else if(WholeDigitOrderOrderNumber >= 0){
											ValueStringMaxWholeDigitOrderOrderNumber = WholeDigitOrderOrderNumber;
										}//WholeDigitOrderOrderNumber&0
									}else if(SetWholeDigitOrderOrderNumberMarker != 0){
										if(SetWholeDigitOrderOrderNumber <= -1){
											ValueStringMaxWholeDigitOrderOrderNumber = 0;
										}else if(SetWholeDigitOrderOrderNumber >= 0){
											ValueStringMaxWholeDigitOrderOrderNumber = SetWholeDigitOrderOrderNumber;
										}//SetWholeDigitOrderOrderNumber&0
									}//SetWholeDigitOrderOrderNumberMarker&0
									
								}//OriginalOrderType
							}//OriginalOrderNumberLoopTimeEndMarker&0
						}//PartialOrderNumberLoopTimeEndMarker&0
					}//RoutineStatus
					
					MaxOriginalPartialOrderNumber = 0;
					if(MaxPartialOrderNumberLoopTime >= 1){
						if(RoutineStatus == ParameterApplicationRoutineStatus){
							MaxOriginalPartialOrderNumber = 1;
						}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
							MaxOriginalPartialOrderNumber = 1;
						}else if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								if(DecimalOrderOrderNumber <= -1){
									MaxOriginalPartialOrderNumber = 0;
								}else if(DecimalOrderOrderNumber >= 0){
									MaxOriginalPartialOrderNumber = 1;
								}//DecimalOrderOrderNumber
							}else{//OriginalOrderType
								MaxOriginalPartialOrderNumber = 1;
							}//OriginalOrderType
						}//RoutineStatus
					}//MaxPartialOrderNumberLoopTime&1
					
					if(MaxPartialOrderNumberLoopTime >= 1){
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 0;
								DummyAbsoluteValueDecimalOrderPart = AbsoluteValueDecimalOrderPart;
								DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
						 		DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = 0;
							}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								DummyRoundDownToZeroMarker = 0;

								DummyAbsoluteValueWholeDigitOrderPart = AbsoluteValueWholeDigitOrderPart;
								if(CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker == 0){
									DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = 0;
								}else if(CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker != 0){
									DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker = -1;
								}//CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker&0

							}//OriginalOrderType
						}//OrderValueNumberUnitRoutineStatus
					}//MaxPartialOrderNumberLoopTime&1
					
				}//PartialOrderNumber&0
			
				OrderNumber = 0;
				WholeOrderNumber = 0;
				OriginalOrderKindCutWholeOrderNumber = 0;
				
				if(MaxOriginalPartialOrderNumber >= 1){
					PartialOrderNumber = PartialOrderNumber + 1;
					OrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber + PartialOrderNumber;
					WholeOrderNumber = TotalOrderNumber + OrderNumber;
					OriginalOrderKindCutWholeOrderNumber = OriginalOrderKindCutTotalOrderNumber + OrderNumber;
				}//MaxOriginalPartialOrderNumber&1
				
				OriginalOneDigit = 0;
				OriginalCarryUpOneDigit = 0;
				OneDigit = 0;
				ExponentialAdjustingWholeOrderNumber = 0;
				
				if(MaxOriginalPartialOrderNumber >= 1){
					if(RoutineStatus == ValueApplicationRoutineStatus){
						
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
						
					}//RoutineStatus
				}//MaxOriginalPartialOrderNumber&1
				
				if(RoutineStatus == ValueApplicationRoutineStatus){
					if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
						if(OriginalOrderTypeUnitPartialOrderTypeDenialMarker == 0){
							if(DecimalOrderOrderNumber <= -1){
								PartialOrderNumberEndMarker = 1;
							}else if(DecimalOrderOrderNumber >= 0){
								if(PartialOrderNumber == DecimalOrderOrderNumber + 1){
									PartialOrderNumberEndMarker = 2;
								}//PartialOrderNumber
							}//DecimalOrderOrderNumber
						}else if(OriginalOrderTypeUnitPartialOrderTypeDenialMarker != 0){
							PartialOrderNumberEndMarker = -1;
						}//OriginalOrderTypeUnitPartialOrderTypeDenialMarker&0
					}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
						if(OriginalOrderTypeUnitPartialOrderTypeDenialMarker == 0){
							if(IntValueBaseErrorMarker == 0){
								if(DummyAbsoluteValueWholeDigitOrderPart < 1.0d){
									PartialOrderNumberEndMarker = 3;
								}//DummyAbsoluteValueWholeDigitOrderPart&1.0d
							}else if(IntValueBaseErrorMarker != 0){
								PartialOrderNumberEndMarker = 4;
							}//IntValueBaseErrorMarker&0
						}else if(OriginalOrderTypeUnitPartialOrderTypeDenialMarker != 0){
							PartialOrderNumberEndMarker = -2;
						}//OriginalOrderTypeUnitPartialOrderTypeDenialMarker&0
					}else{//OriginalOrderType
						if(PartialOrderNumber == MaxOriginalPartialOrderNumber){
							PartialOrderNumberEndMarker = 5;
						}//PartialOrderNumber
					}//OriginalOrderType
				}else{//RoutineStatus
					if(PartialOrderNumber == MaxOriginalPartialOrderNumber){
						PartialOrderNumberEndMarker = 6;
					}//PartialOrderNumber
				}//RoutineStatus
				
				if(AdjustingPlusOrMinusSignChoiceMarker == 0){
					if(PartialOrderNumberEndMarker != 0){
						if(OriginalOrderNumberEndMarker != 0){
							AdjustingPlusOrMinusSignMarker = 1;
						}//OriginalOrderNumberEndMarker&0
					}//PartialOrderNumberEndMarker&0
					if(AdjustingPlusOrMinusSignMarker != 0){
						AdjustingPlusOrMinusSignChoiceMarker = 1;
					}//AdjustingPlusOrMinusSignMarker&0
				}//AdjustingPlusOrMinusSignChoiceMarker&0
				
				PlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
				AdjustingFinalPlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
				
				if(MaxOriginalPartialOrderNumber >= 1){
					if(RoutineStatus == ValueApplicationRoutineStatus){
						
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
							
							if(PlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
								AdjustingFinalPlusOrMinusSignStatus = UndefinedApplicationPlusOrMinusSignStatus;
							}else if(PlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
								if(MaxOriginalPlusOrMinusSignOrderNumber == 0){
									AdjustingFinalPlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
								}else if(MaxOriginalPlusOrMinusSignOrderNumber >= 1){
									if(MaxOriginalPlusOrMinusSignOrderNumberModulo2 == 0){
										AdjustingFinalPlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
									}else if(MaxOriginalPlusOrMinusSignOrderNumberModulo2 == 1){
										AdjustingFinalPlusOrMinusSignStatus = MinusApplicationPlusOrMinusSignStatus;
									}//MaxOriginalPlusOrMinusSignOrderNumberModulo2&0
								}//MaxOriginalPlusOrMinusSignOrderNumber&1
							}else if(PlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
								AdjustingFinalPlusOrMinusSignStatus = PlusApplicationPlusOrMinusSignStatus;
							}//PlusOrMinusSignStatus
							
						}//OriginalOrderType
					}//RoutineStatus
				}//MaxOriginalPartialOrderNumber&1
				
				if(MaxOriginalPartialOrderNumber >= 1){
					if(RoutineStatus == ValueApplicationRoutineStatus){
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
								CarryUpDigitDecimalOrderOrderNumberDiscontinuityMarker = 1;
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
							OneDigit = 1;
						}//OriginalOrderType
					}//RoutineStatus&ValueApplicationRoutineStatus
				}//MaxOriginalPartialOrderNumber
				
				if(MaxOriginalOrderNumber >= 1){
					if(RoutineStatus == ParameterApplicationRoutineStatus){
						OriginalParameterArrayOrderNumber = OriginalOrderNumber;
					}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
						OriginalParameterArrayOrderNumber = OriginalOrderNumber;
					}else if(RoutineStatus == ValueApplicationRoutineStatus){
						if(OriginalOrderType == ExponentialValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == UndefinedApplicationTokenKind){
								OriginalParameterArrayOrderNumber = UndefinedApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == ValueDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = OneDigit + 1;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == ValueDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = OneDigit + 1;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == CarryUpDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = CarryUpDigitApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == SuffixValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == SuffixDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = SuffixDigitApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == PrefixSignOperatorApplicationTokenKind){
								if(AdjustingPlusOrMinusSignMarker == 0){
									if(PlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = UndefinedPrefixSignOperatorApplicationTokenStringNumber;
									}else if(PlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = MinusPrefixSignOperatorApplicationTokenStringNumber;
									}else if(PlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = PlusPrefixSignOperatorApplicationTokenStringNumber;
									}//PlusOrMinusSignStatus
								}else if(AdjustingPlusOrMinusSignMarker != 0){
									if(AdjustingFinalPlusOrMinusSignStatus == UndefinedApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = UndefinedPrefixSignOperatorApplicationTokenStringNumber;
									}else if(AdjustingFinalPlusOrMinusSignStatus == MinusApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = MinusPrefixSignOperatorApplicationTokenStringNumber;
									}else if(AdjustingFinalPlusOrMinusSignStatus == PlusApplicationPlusOrMinusSignStatus){
										OriginalParameterArrayOrderNumber = PlusPrefixSignOperatorApplicationTokenStringNumber;
									}//AdjustingFinalPlusOrMinusSignStatus
								}//AdjustingPlusOrMinusSignMarker&0
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == PrefixValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == PrefixDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = PrefixDigitApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == DotValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == DotOperatorApplicationTokenKind){
								OriginalParameterArrayOrderNumber = DotOperatorApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}else if(OriginalOrderType == NullValueApplicationOrderType){
							if(OriginalParameterArrayOrderKind == NullDigitApplicationTokenKind){
								OriginalParameterArrayOrderNumber = NullDigitApplicationTokenStringNumber;
							}//OriginalParameterArrayOrderKind
						}//OriginalOrderType
					}//RoutineStatus
				}//MaxOriginalOrderNumber&1
				
			}//OrderCharNumberCounterStartMarker&0
			
			if(PartialOrderCharNumber == 0){
				if(OriginalOrderCharNumber == 0){
					
					OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = 0;
					MaxOrderCharNumber = 0;
					OrderCharNumberCounterStartMarker = 1;
					OrderNumberAdditionDenialMarker = 0;
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						if(OriginalOrderNumberLoopTimeEndMarker != 0){
							if(MaxOriginalPartialOrderNumber >= 1){
								if(RoutineStatus == ValueApplicationRoutineStatus){
									if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
										if(ValueStringMaxDecimalOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutWholeOrderNumber > ValueStringMaxDecimalOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 1;
											}//OrderNumber&ValueStringMaxDecimalOrderOrderNumber
										}//ValueStringMaxDecimalOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinDecimalOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutWholeOrderNumber < ValueStringMinDecimalOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 2;
											}//OrderNumber&ValueStringMinDecimalOrderOrderNumber
										}//ValueStringMinDecimalOrderOrderNumberRestrictionMarker&0
									}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
										if(ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutWholeOrderNumber > ValueStringMaxWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 3;
											}//OrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
										}//ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutWholeOrderNumber < ValueStringMinWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 4;
											}//OrderNumber&ValueStringMinWholeDigitOrderOrderNumber
										}//ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker&0
										if(ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutWholeOrderNumber > SavedOriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = -3;
											}//OrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
										}//ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker&0
									}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
										if(ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutWholeOrderNumber > ValueStringMaxWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 5;
											}//OrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
										}//ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutWholeOrderNumber < ValueStringMinWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 6;
											}//OrderNumber&ValueStringMinWholeDigitOrderOrderNumber
										}//ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker&0
									}else if(OriginalOrderType == SuffixValueApplicationOrderType){
										if(ValueStringMaxDecimalOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalDecimalOrderOrderNumber + OriginalOrderKindCutWholeOrderNumber > ValueStringMaxDecimalOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 1;
											}//OrderNumber&ValueStringMaxDecimalOrderOrderNumber
										}//ValueStringMaxDecimalOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinDecimalOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalDecimalOrderOrderNumber + OriginalOrderKindCutWholeOrderNumber < ValueStringMinDecimalOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 2;
											}//OrderNumber&ValueStringMinDecimalOrderOrderNumber
										}//ValueStringMinDecimalOrderOrderNumberRestrictionMarker&0
									}else if(OriginalOrderType == PrefixValueApplicationOrderType){
										if(ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber + OriginalOrderKindCutWholeOrderNumber > ValueStringMaxWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 5;
											}//OrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
										}//ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber + OriginalOrderKindCutWholeOrderNumber < ValueStringMinWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 6;
											}//OrderNumber&ValueStringMinWholeDigitOrderOrderNumber
										}//ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker&0
									}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
										if(ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber > ValueStringMaxWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 7;
											}//OrderNumber&ValueStringMaxWholeDigitOrderOrderNumber
										}//ValueStringMaxWholeDigitOrderOrderNumberRestrictionMarker&0
										if(ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker != 0){
											if(OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber < ValueStringMinWholeDigitOrderOrderNumber){
												OrderNumberAdditionDenialMarker = 8;
											}//OrderNumber&ValueStringMinWholeDigitOrderOrderNumber
										}//ValueStringMinWholeDigitOrderOrderNumberRestrictionMarker&0
									}//OriginalOrderType
								}//RoutineStatus&ValueApplicationRoutineStatus
							}//MaxOriginalPartialOrderNumber&1
						}//OriginalOrderNumberLoopTimeEndMarker&0
					}//PartialOrderNumberLoopTimeEndMarker&0
						
					SavedOrderCharNumberReadStatus = UndefinedApplicationReadStatus;
					CandidateMaxOriginalOrderCharNumber = 0;
					CandidateTotalOriginalOrderCharNumber = 0;
					
					if(MaxOriginalOrderNumber >= 1){
						if(RoutineStatus == ParameterApplicationRoutineStatus){
							if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind == 0){
								CandidateTotalOriginalOrderCharNumber = TotalOrderCharNumber;
								if(OriginalOrderType == FormatStringApplicationTokenType){
									if(OriginalOrderKind == FormatStringApplicationTokenKind){
										if(OriginalOrderNumber == FormatStringApplicationTokenStringNumber){
											CandidateMaxOriginalOrderCharNumber = 0;
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == ValueApplicationTokenType){
									if(OriginalOrderKind == ValueApplicationTokenKind){
										if(OriginalOrderNumber == ValueValueApplicationTokenStringNumber){
											if(StringValue != NULL){
												CandidateMaxOriginalOrderCharNumber = sizeof(StringValue)/sizeof(char) - 1;
											}//StringValue&NULL
										}else if(OriginalOrderNumber == BaseValueApplicationTokenStringNumber){
											if(StringBase != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringBase)/sizeof(char) - 1;
											}//StringBase&NULL
										}else if(OriginalOrderNumber == PowerValueApplicationTokenStringNumber){
											if(StringPower != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringPower)/sizeof(char) - 1;
											}//StringPower&NULL
										}else if(OriginalOrderNumber == FValueApplicationTokenStringNumber){
											if(StringLowercaseF != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringLowercaseF)/sizeof(char) - 1;
											}//StringLowercaseF&NULL
										}else if(OriginalOrderNumber == DValueApplicationTokenStringNumber){
											if(StringLowercaseD != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringLowercaseD)/sizeof(char) - 1;
											}//StringLowercaseD&NULL
										}else if(OriginalOrderNumber == LfValueApplicationTokenStringNumber){
											if(StringLowercaseLF != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringLowercaseLF)/sizeof(char) - 1;
											}//StringLowercaseLF&NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == LeftBracketApplicationTokenType){
									if(OriginalOrderKind == LeftBracketApplicationTokenKind){
										if(OriginalOrderNumber == RoundLeftBracketApplicationTokenStringNumber){
											if(StringRoundLeftBracket != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringRoundLeftBracket)/sizeof(char) - 1;
											}//StringRoundLeftBracket&NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == RightBracketApplicationTokenType){
									if(OriginalOrderKind == RightBracketApplicationTokenKind){
										if(OriginalOrderNumber == RoundRightBracketApplicationTokenStringNumber){
											if(StringRoundRightBracket != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringRoundRightBracket)/sizeof(char) - 1;
											}//StringRoundRightBracket&NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == ArgumentStatementApplicationTokenType){
									if(OriginalOrderKind == ArgumentStatementApplicationTokenKind){
										if(OriginalOrderNumber == PercentageArgumentStatementApplicationTokenStringNumber){
											if(StringPercentage != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringPercentage)/sizeof(char) - 1;
											}//StringPercentage&NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == DigitApplicationTokenType){
									if(OriginalOrderKind == ValueDigitApplicationTokenKind){
										if(OriginalOrderLanguageSort == FirstApplicationLanguageSort){
											if(OriginalOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
												if(StringZeroNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringZeroNormalDigit)/sizeof(char) - 1;
												}//StringZeroNormalDigit&NULL
											}else if(OriginalOrderNumber == OneNormalDigitApplicationTokenStringNumber){
												if(StringOneNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringOneNormalDigit)/sizeof(char) - 1;
												}//StringOneNormalDigit&NULL
											}else if(OriginalOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
												if(StringTwoNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringTwoNormalDigit)/sizeof(char) - 1;
												}//StringTwoNormalDigit&NULL
											}else if(OriginalOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
												if(StringThreeNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringThreeNormalDigit)/sizeof(char) - 1;
												}//StringThreeNormalDigit&NULL
											}else if(OriginalOrderNumber == FourNormalDigitApplicationTokenStringNumber){
												if(StringFourNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFourNormalDigit)/sizeof(char) - 1;
												}//StringFourNormalDigit&NULL
											}else if(OriginalOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
												if(StringFiveNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFiveNormalDigit)/sizeof(char) - 1;
												}//StringFiveNormalDigit&NULL
											}else if(OriginalOrderNumber == SixNormalDigitApplicationTokenStringNumber){
												if(StringSixNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringSixNormalDigit)/sizeof(char) - 1;
												}//StringSixNormalDigit&NULL
											}else if(OriginalOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
												if(StringSevenNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringSevenNormalDigit)/sizeof(char) - 1;
												}//StringSevenNormalDigit&NULL
											}else if(OriginalOrderNumber == EightNormalDigitApplicationTokenStringNumber){
												if(StringEightNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringEightNormalDigit)/sizeof(char) - 1;
												}//StringEightNormalDigit&NULL
											}else if(OriginalOrderNumber == NineNormalDigitApplicationTokenStringNumber){
												if(StringNineNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringNineNormalDigit)/sizeof(char) - 1;
												}//StringNineNormalDigit&NULL
											}else if(OriginalOrderNumber == ANormalDigitApplicationTokenStringNumber){
												if(StringANormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringANormalDigit)/sizeof(char) - 1;
												}//StringANormalDigit&NULL
											}else if(OriginalOrderNumber == BNormalDigitApplicationTokenStringNumber){
												if(StringBNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringBNormalDigit)/sizeof(char) - 1;
												}//StringBNormalDigit&NULL
											}else if(OriginalOrderNumber == CNormalDigitApplicationTokenStringNumber){
												if(StringCNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringCNormalDigit)/sizeof(char) - 1;
												}//StringCNormalDigit&NULL
											}else if(OriginalOrderNumber == DNormalDigitApplicationTokenStringNumber){
												if(StringDNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringDNormalDigit)/sizeof(char) - 1;
												}//StringDNormalDigit&NULL
											}else if(OriginalOrderNumber == ENormalDigitApplicationTokenStringNumber){
												if(StringENormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringENormalDigit)/sizeof(char) - 1;
												}//StringENormalDigit&NULL
											}else if(OriginalOrderNumber == FNormalDigitApplicationTokenStringNumber){
												if(StringFNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFNormalDigit)/sizeof(char) - 1;
												}//StringFNormalDigit&NULL
											}//OriginalOrderNumber
										}else if(OriginalOrderLanguageSort == SecondApplicationLanguageSort){
											if(OriginalOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
												if(StringFullZeroNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullZeroNormalDigit)/sizeof(char) - 1;
												}//StringFullZeroNormalDigit&NULL
											}else if(OriginalOrderNumber == OneNormalDigitApplicationTokenStringNumber){
												if(StringFullOneNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullOneNormalDigit)/sizeof(char) - 1;
												}//StringFullOneNormalDigit&NULL
											}else if(OriginalOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
												if(StringFullTwoNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullTwoNormalDigit)/sizeof(char) - 1;
												}//StringFullTwoNormalDigit&NULL
											}else if(OriginalOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
												if(StringFullThreeNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullThreeNormalDigit)/sizeof(char) - 1;
												}//StringFullThreeNormalDigit&NULL
											}else if(OriginalOrderNumber == FourNormalDigitApplicationTokenStringNumber){
												if(StringFullFourNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullFourNormalDigit)/sizeof(char) - 1;
												}//StringFullFourNormalDigit&NULL
											}else if(OriginalOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
												if(StringFullFiveNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullFiveNormalDigit)/sizeof(char) - 1;
												}//StringFullFiveNormalDigit&NULL
											}else if(OriginalOrderNumber == SixNormalDigitApplicationTokenStringNumber){
												if(StringFullSixNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullSixNormalDigit)/sizeof(char) - 1;
												}//StringFullSixNormalDigit&NULL
											}else if(OriginalOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
												if(StringFullSevenNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullSevenNormalDigit)/sizeof(char) - 1;
												}//StringFullSevenNormalDigit&NULL
											}else if(OriginalOrderNumber == EightNormalDigitApplicationTokenStringNumber){
												if(StringFullEightNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullEightNormalDigit)/sizeof(char) - 1;
												}//StringFullEightNormalDigit&NULL
											}else if(OriginalOrderNumber == NineNormalDigitApplicationTokenStringNumber){
												if(StringFullNineNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullNineNormalDigit)/sizeof(char) - 1;
												}//StringFullNineNormalDigit&NULL
											}else if(OriginalOrderNumber == ANormalDigitApplicationTokenStringNumber){
												if(StringFullANormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullANormalDigit)/sizeof(char) - 1;
												}//StringFullANormalDigit&NULL
											}else if(OriginalOrderNumber == BNormalDigitApplicationTokenStringNumber){
												if(StringFullBNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullBNormalDigit)/sizeof(char) - 1;
												}//StringFullBNormalDigit&NULL
											}else if(OriginalOrderNumber == CNormalDigitApplicationTokenStringNumber){
												if(StringFullCNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullCNormalDigit)/sizeof(char) - 1;
												}//StringFullCNormalDigit&NULL
											}else if(OriginalOrderNumber == DNormalDigitApplicationTokenStringNumber){
												if(StringFullDNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullDNormalDigit)/sizeof(char) - 1;
												}//StringFullDNormalDigit&NULL
											}else if(OriginalOrderNumber == ENormalDigitApplicationTokenStringNumber){
												if(StringFullENormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullENormalDigit)/sizeof(char) - 1;
												}//StringFullENormalDigit&NULL
											}else if(OriginalOrderNumber == FNormalDigitApplicationTokenStringNumber){
												if(StringFullFNormalDigit != NULL){
													CandidateMaxOriginalOrderCharNumber= sizeof(StringFullFNormalDigit)/sizeof(char) - 1;
												}//StringFullFNormalDigit&NULL
											}//OriginalOrderNumber
										}//OriginalOrderLanguageSort
									}else if(OriginalOrderKind == NullDigitApplicationTokenKind){
										if(OriginalOrderNumber == NullDigitApplicationTokenStringNumber){
											if(StringNullDigit != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringNullDigit)/sizeof(char) - 1;
											}//StringNullDigit & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == SuffixDigitApplicationTokenKind){
										if(OriginalOrderNumber == SuffixDigitApplicationTokenStringNumber){
											if(StringSuffixDigit != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringSuffixDigit)/sizeof(char) - 1;
											}//StringSuffixDigit & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == PrefixDigitApplicationTokenKind){
										if(OriginalOrderNumber == PrefixDigitApplicationTokenStringNumber){
											if(StringPrefixDigit != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringPrefixDigit)/sizeof(char) - 1;
											}//StringPrefixDigit & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == CarryUpDigitApplicationTokenKind){
										if(OriginalOrderNumber == CarryUpDigitApplicationTokenStringNumber){
											if(StringCarryUpDigit != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringCarryUpDigit)/sizeof(char) - 1;
											}//StringCarryUpDigit & NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == OperatorApplicationTokenType){
									if(OriginalOrderKind == PrefixSignOperatorApplicationTokenKind){
										if(OriginalOrderNumber == UndefinedPrefixSignOperatorApplicationTokenStringNumber){
											if(StringUndefinedPrefixSignOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringUndefinedPrefixSignOperator)/sizeof(char) - 1;
											}//StringUndefinedPrefixSignOperator & NULL
										}else if(OriginalOrderNumber == MinusPrefixSignOperatorApplicationTokenStringNumber){
											if(StringMinusPrefixSignOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringMinusPrefixSignOperator)/sizeof(char) - 1;
											}//StringMinusPrefixSignOperator & NULL
										}else if(OriginalOrderNumber == PlusPrefixSignOperatorApplicationTokenStringNumber){
											if(StringPlusPrefixSignOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringPlusPrefixSignOperator)/sizeof(char) - 1;
											}//StringPlusPrefixSignOperator & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == MinusSignOperatorApplicationTokenKind){
										if(OriginalOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
											if(StringMinusSignOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringMinusSignOperator)/sizeof(char) - 1;
											}//StringMinusSignOperator & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == PlusSignOperatorApplicationTokenKind){
										if(OriginalOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
											if(StringPlusSignOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringPlusSignOperator)/sizeof(char) - 1;
											}//StringPlusSignOperator & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == ExponentialOperatorApplicationTokenKind){
										if(OriginalOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
											if(StringExponentialOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringExponentialOperator)/sizeof(char) - 1;
											}//StringExponentialOperator & NULL
										}//OriginalOrderNumber
									}else if(OriginalOrderKind == DotOperatorApplicationTokenKind){
										if(OriginalOrderNumber == DotOperatorApplicationTokenStringNumber){
											if(StringDotOperator != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringDotOperator)/sizeof(char) - 1;
											}//StringDotOperator & NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}else if(OriginalOrderType == BlankApplicationTokenType){
									if(OriginalOrderKind == BlankApplicationTokenKind){
										if(OriginalOrderNumber == NullCharacterBlankApplicationTokenStringNumber){
											if(StringNullCharacterBlank != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringNullCharacterBlank)/sizeof(char) - 1;
											}//StringNullCharacterBlank & NULL
										}else if(OriginalOrderNumber == HorizontalTabBlankApplicationTokenStringNumber){
											if(StringHorizontalTabBlank != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringHorizontalTabBlank)/sizeof(char) - 1;
											}//StringHorizontalTabBlank & NULL
										}else if(OriginalOrderNumber == SpaceBlankApplicationTokenStringNumber){
											if(StringSpaceBlank != NULL){
												CandidateMaxOriginalOrderCharNumber= sizeof(StringSpaceBlank)/sizeof(char) - 1;
											}//StringSpaceBlank & NULL
										}//OriginalOrderNumber
									}//OriginalOrderKind
								}//OriginalOrderType
							}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderKind >= 1){
								SavedOrderCharNumberReadStatus = ParameterApplicationReadStatus;
								CandidateTotalOriginalOrderCharNumber = 0;
								CandidateMaxOriginalOrderCharNumber = 0;
							}//PreParameterApplicationRoutineStatusGlobalTotalOrderKind&1
						}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
							SavedOrderCharNumberReadStatus = ParameterApplicationReadStatus;
							CandidateTotalOriginalOrderCharNumber = 0;
							CandidateMaxOriginalOrderCharNumber = 0;
						}else if(RoutineStatus == ValueApplicationRoutineStatus){
							SavedOrderCharNumberReadStatus = ParameterApplicationReadStatus;
							CandidateTotalOriginalOrderCharNumber = 0;
							CandidateMaxOriginalOrderCharNumber = 0;
						}//RoutineStatus
					}//MaxOriginalOrderNumber&1
					
					ParameterArrayOrderNumberUnitOutputDenialMarker = 0;
					WholeOriginalParameterArrayOrderNumber = 0;
					TotalOriginalParameterArrayOrderCharNumber = 0;
					MaxOriginalParameterArrayOrderCharNumber = 0;
					
					if(ParameterArrayOrderLanguageSortUnitOutputDenialMarker != 0){
						ParameterArrayOrderNumberUnitOutputDenialMarker = -1;
					}//ParameterArrayOrderLanguageSortUnitOutputDenialMarker&0
					if(OriginalParameterArrayOrderNumber < 1){
						ParameterArrayOrderNumberUnitOutputDenialMarker = 1;
					}//OriginalParameterArrayOrderNumber&0
					if(OriginalParameterArrayOrderNumber > MaxOriginalParameterArrayOrderNumber){
						ParameterArrayOrderNumberUnitOutputDenialMarker = 2;
					}//OriginalParameterArrayOrderNumber&0
					
					if(ParameterArrayOrderNumberUnitOutputDenialMarker == 0){
						WholeOriginalParameterArrayOrderNumber = TotalOriginalParameterArrayOrderNumber + OriginalParameterArrayOrderNumber;
						if(PreParameterApplicationRoutineStatusGlobalTotalOrderNumber >= 1){
							if(LoopTimeModulo2Plus1 == 1){
								TotalOriginalParameterArrayOrderCharNumber = TotalParameterStringCharNumbers[WholeOriginalParameterArrayOrderNumber - 1];
								MaxOriginalParameterArrayOrderCharNumber = MaxParameterStringCharNumbers[WholeOriginalParameterArrayOrderNumber - 1];
							}else if(LoopTimeModulo2Plus1 == 2){
								TotalOriginalParameterArrayOrderCharNumber = CopyTotalParameterStringCharNumbers[WholeOriginalParameterArrayOrderNumber - 1];
								MaxOriginalParameterArrayOrderCharNumber = CopyMaxParameterStringCharNumbers[WholeOriginalParameterArrayOrderNumber - 1];
							}//OrderCharCharNumberLoopTimeModulo2Plus1
						}//PreParameterApplicationRoutineStatusGlobalTotalOrderNumber&1
					}//ParameterArrayOrderNumberUnitOutputDenialMarker&0
				
					OrderNumberUnitTotalOriginalOrderCharNumber = 0;
					OrderNumberUnitMaxOriginalOrderCharNumber = 0;
					OrderNumberUnitOrderKindCutTotalOriginalOrderCharNumber = 0;
					if(MaxOriginalPartialOrderNumber >= 1){
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(PreValueApplicationRoutineStatusGlobalTotalOrderNumber >= 1){
								if(LoopTimeModulo2Plus1 == 1){
									OrderNumberUnitTotalOriginalOrderCharNumber = TotalValueStringCharNumbers[WholeOrderNumber - 1];
									OrderNumberUnitMaxOriginalOrderCharNumber = MaxValueStringCharNumbers[WholeOrderNumber - 1];
									OrderNumberUnitOrderKindCutTotalOriginalOrderCharNumber = OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers[WholeOrderNumber - 1];
								}else if(LoopTimeModulo2Plus1 == 2){
									OrderNumberUnitTotalOriginalOrderCharNumber = CopyTotalValueStringCharNumbers[WholeOrderNumber - 1];
									OrderNumberUnitMaxOriginalOrderCharNumber = CopyMaxValueStringCharNumbers[WholeOrderNumber - 1];
									OrderNumberUnitOrderKindCutTotalOriginalOrderCharNumber = CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers[WholeOrderNumber - 1];
								}//LoopTimeModulo2Plus1
							}//PreValueApplicationRoutineStatusGlobalTotalOrderNumber
						}//RoutineStatus
					}//MaxOriginalPartialOrderNumber&1
					
					TotalOriginalOrderCharNumber = 0;
					MaxOriginalOrderCharNumber = 0;
					if(MaxOriginalPartialOrderNumber >= 1){
						if(SavedOrderCharNumberReadStatus == UndefinedApplicationReadStatus){
							TotalOriginalOrderCharNumber = CandidateTotalOriginalOrderCharNumber;
							MaxOriginalOrderCharNumber = CandidateMaxOriginalOrderCharNumber;
						}else if(SavedOrderCharNumberReadStatus == ParameterApplicationReadStatus){
							TotalOriginalOrderCharNumber = TotalOriginalParameterArrayOrderCharNumber;
							MaxOriginalOrderCharNumber = MaxOriginalParameterArrayOrderCharNumber;
						}//SavedOrderCharNumberReadStatus
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
				
				SavedOneCharReadStatus = UndefinedApplicationReadStatus;
				CandidateOriginalOneChar = (char)0;
				
				if(MaxOriginalOrderCharNumber >= 1){
					if(RoutineStatus == ParameterApplicationRoutineStatus){
						if(PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber == 0){
							if(OriginalOrderType == FormatStringApplicationTokenType){
								if(OriginalOrderKind == FormatStringApplicationTokenKind){
									if(OriginalOrderNumber == FormatStringApplicationTokenStringNumber){
										CandidateOriginalOneChar = (char)0;
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == ValueApplicationTokenType){
								if(OriginalOrderKind == ValueApplicationTokenKind){
									if(OriginalOrderNumber == ValueValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringValue[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == BaseValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringBase[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == PowerValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringPower[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == FValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringLowercaseF[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == DValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringLowercaseD[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == LfValueApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringLowercaseLF[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == LeftBracketApplicationTokenType){
								if(OriginalOrderKind == LeftBracketApplicationTokenKind){
									if(OriginalOrderNumber == RoundLeftBracketApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringRoundLeftBracket[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == RightBracketApplicationTokenType){
								if(OriginalOrderKind == RightBracketApplicationTokenKind){
									if(OriginalOrderNumber == RoundRightBracketApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringRoundRightBracket[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == ArgumentStatementApplicationTokenType){
								if(OriginalOrderKind == ArgumentStatementApplicationTokenKind){
									if(OriginalOrderNumber == PercentageArgumentStatementApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringPercentage[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == DigitApplicationTokenType){
								if(OriginalOrderKind == ValueDigitApplicationTokenKind){
									if(OriginalOrderLanguageSort == FirstApplicationLanguageSort){
										if(OriginalOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringZeroNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == OneNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringOneNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringTwoNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringThreeNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FourNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFourNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFiveNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == SixNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringSixNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringSevenNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == EightNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringEightNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == NineNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringNineNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ANormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringANormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == BNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringBNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == CNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringCNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == DNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringDNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ENormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringENormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFNormalDigit[OriginalOrderCharNumber - 1];
										}//OriginalOrderNumber
									}else if(OriginalOrderLanguageSort == SecondApplicationLanguageSort){
										if(OriginalOrderNumber == ZeroNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullZeroNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == OneNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullOneNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == TwoNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullTwoNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ThreeNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullThreeNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FourNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullFourNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FiveNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullFiveNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == SixNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullSixNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == SevenNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullSevenNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == EightNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullEightNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == NineNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullNineNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ANormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullANormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == BNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullBNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == CNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullCNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == DNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullDNormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == ENormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullENormalDigit[OriginalOrderCharNumber - 1];
										}else if(OriginalOrderNumber == FNormalDigitApplicationTokenStringNumber){
											CandidateOriginalOneChar = StringFullFNormalDigit[OriginalOrderCharNumber - 1];
										}//OriginalOrderNumber
									}//OriginalOrderLanguageSort
								}else if(OriginalOrderKind == NullDigitApplicationTokenKind){
									if(OriginalOrderNumber == NullDigitApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringNullDigit[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == SuffixDigitApplicationTokenKind){
									if(OriginalOrderNumber == SuffixDigitApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringSuffixDigit[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == PrefixDigitApplicationTokenKind){
									if(OriginalOrderNumber == PrefixDigitApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringPrefixDigit[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == CarryUpDigitApplicationTokenKind){
									if(OriginalOrderNumber == CarryUpDigitApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringCarryUpDigit[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == OperatorApplicationTokenType){
								if(OriginalOrderKind == PrefixSignOperatorApplicationTokenKind){
									if(OriginalOrderNumber == UndefinedPrefixSignOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringUndefinedPrefixSignOperator[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == MinusPrefixSignOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringMinusPrefixSignOperator[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == PlusPrefixSignOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringPlusPrefixSignOperator[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == MinusSignOperatorApplicationTokenKind){
									if(OriginalOrderNumber == MinusSignOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringMinusSignOperator[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == PlusSignOperatorApplicationTokenKind){
									if(OriginalOrderNumber == PlusSignOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringPlusSignOperator[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == ExponentialOperatorApplicationTokenKind){
									if(OriginalOrderNumber == ExponentialOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringExponentialOperator[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}else if(OriginalOrderKind == DotOperatorApplicationTokenKind){
									if(OriginalOrderNumber == DotOperatorApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringDotOperator[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}else if(OriginalOrderType == BlankApplicationTokenType){
								if(OriginalOrderKind == BlankApplicationTokenKind){
									if(OriginalOrderNumber == NullCharacterBlankApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringNullCharacterBlank[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == HorizontalTabBlankApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringHorizontalTabBlank[OriginalOrderCharNumber - 1];
									}else if(OriginalOrderNumber == SpaceBlankApplicationTokenStringNumber){
										CandidateOriginalOneChar = StringSpaceBlank[OriginalOrderCharNumber - 1];
									}//OriginalOrderNumber
								}//OriginalOrderKind
							}//OriginalOrderType
						}else if(PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber >= 1){
							SavedOneCharReadStatus = ParameterApplicationReadStatus;
							CandidateOriginalOneChar = (char)0;
						}//PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber&1
					}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
						SavedOneCharReadStatus = ParameterApplicationReadStatus;
						CandidateOriginalOneChar = (char)0;
					}else if(RoutineStatus == ValueApplicationRoutineStatus){
						SavedOneCharReadStatus = ParameterApplicationReadStatus;
						CandidateOriginalOneChar = (char)0;
					}//RoutineStatus
				}//MaxOriginalOrderCharNumber&1
				
				MaxOriginalPartialOrderCharNumber = 0;
				
				if(MaxOriginalOrderCharNumber >= 1){
					if(MaxOriginalPartialOrderNumber >= 1){
						if(OrderNumberAdditionDenialMarker == 0){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								MaxOriginalPartialOrderCharNumber = 1;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								MaxOriginalPartialOrderCharNumber = 1;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								MaxOriginalPartialOrderCharNumber = 1;
							}//RoutineStatus
						}//OrderNumberAdditionDenialMarker&0
					}//MaxOriginalPartialOrderNumber&1
				}//MaxOriginalOrderCharNumber&1
				
			}//PartialOrderCharNumber&0
			
			OrderCharNumber = 0;
			WholeOrderCharNumber = 0;
			OriginalOrderKindCutWholeOrderCharNumber = 0;
			OriginalOrderKindCutWholeSubstitutedOrderCharNumber = 0;
			WholeSubstitutedOrderCharNumber = 0;
			
			if(MaxOriginalPartialOrderCharNumber >= 1){
				PartialOrderCharNumber = PartialOrderCharNumber + 1;
				OrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + PartialOrderCharNumber;
				WholeOrderCharNumber = TotalOrderCharNumber + OrderCharNumber;
				OriginalOrderKindCutWholeOrderCharNumber = OriginalOrderKindCutTotalOrderCharNumber + OrderCharNumber;
			}//MaxOriginalPartialOrderCharNumber&1
			
			if(PartialOrderCharNumber == MaxOriginalPartialOrderCharNumber){
				PartialOrderCharNumberEndMarker = 1;
			}//PartialOrderCharNumber&MaxAPplicationChosenPartialOrderCharNumber
			
			OneChar = (char)0;
			
			WholeOriginalParameterArrayOrderCharNumber = 0;
			OriginalParameterArrayOneChar = (char)0;
			
			if(MaxOriginalOrderCharNumber >= 1){
				if(RoutineStatus == ParameterApplicationRoutineStatus){
					OriginalParameterArrayOrderCharNumber = OriginalOrderCharNumber;
				}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
					OriginalParameterArrayOrderCharNumber = OriginalOrderCharNumber;
				}else if(RoutineStatus == ValueApplicationRoutineStatus){
					OriginalParameterArrayOrderCharNumber = OriginalOrderCharNumber;
				}//RoutineStatus
			}//MaxOriginalOrderCharNumber&1
			
			if(LoopTime >= 2){
				if(PartialOrderNumberLoopTimeEndMarker != 0){
					if(OriginalOrderNumberLoopTimeEndMarker != 0){
						if(MaxOriginalOrderCharNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								OriginalOrderKindCutWholeSubstitutedOrderCharNumber = OriginalOrderKindCutWholeOrderCharNumber;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								OriginalOrderKindCutWholeSubstitutedOrderCharNumber = OriginalOrderKindCutWholeOrderCharNumber;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
									OriginalOrderKindCutWholeSubstitutedOrderCharNumber = OriginalOrderKindCutWholeOrderCharNumber;
								}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									OriginalOrderKindCutWholeSubstitutedOrderCharNumber = OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber - (OrderNumberUnitOrderKindCutTotalOriginalOrderCharNumber + OrderNumberUnitMaxOriginalOrderCharNumber - OrderCharNumber + 1) + 1;
								}else{//OriginalOrderType
									OriginalOrderKindCutWholeSubstitutedOrderCharNumber = OriginalOrderKindCutWholeOrderCharNumber;
								}//OriginalOrderType
							}//RoutineStatus
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderTypeUnitMaxOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderTypeUnitMaxOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == ExponentialValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber + OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber + OriginalOrderKindUnitMaxOriginalDotOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == SuffixValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber + OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber + OriginalOrderKindUnitMaxOriginalDotOrderCharNumber + OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == PrefixValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == DotValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber + OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}else if(OriginalOrderType == NullValueApplicationOrderType){
									WholeSubstitutedOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOriginalPlusOrMinusSignOrderCharNumber + OriginalOrderKindUnitMaxOriginalPrefixOrderCharNumber + OriginalOrderKindUnitMaxOriginalCarryUpDigitOrderCharNumber + OriginalOrderKindUnitMaxOriginalWholeDigitOrderOrderCharNumber + OriginalOrderKindUnitMaxOriginalDotOrderCharNumber + OriginalOrderKindUnitMaxOriginalDecimalOrderOrderCharNumber + OriginalOrderKindUnitMaxOriginalSuffixOrderCharNumber + OriginalOrderKindCutWholeSubstitutedOrderCharNumber;
								}//OriginalOrderType
							}//RoutineStatus
						}//MaxOriginalOrderCharNumber&1
					}//OriginalOrderNumberLoopTimeEndMarker&0
				}//PartialOrderNumberLoopTimeEndMarker&0
			}//LoopTime&2
			
			ParameterArrayOrderCharNumberUnitOutputDenialMarker = 0;
			if(ParameterArrayOrderNumberUnitOutputDenialMarker != 0){
				ParameterArrayOrderCharNumberUnitOutputDenialMarker = -1;
			}//ParameterArrayOrderNumberUnitOutputDenialMarker&0
			if(OriginalParameterArrayOrderCharNumber < 1){
				ParameterArrayOrderCharNumberUnitOutputDenialMarker = 1;
			}//OriginalParameterArrayOrderCharNumber&0
			if(OriginalParameterArrayOrderCharNumber > MaxOriginalParameterArrayOrderCharNumber){
				ParameterArrayOrderCharNumberUnitOutputDenialMarker = 2;
			}//OriginalParameterArrayOrderCharNumber&0
			if(ParameterArrayOrderCharNumberUnitOutputDenialMarker == 0){
				WholeOriginalParameterArrayOrderCharNumber = TotalOriginalParameterArrayOrderCharNumber + OriginalParameterArrayOrderCharNumber;
				if(PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber >= 1){
					if(LoopTimeModulo2Plus1 == 1){
						OriginalParameterArrayOneChar = CharParameterStrings[WholeOriginalParameterArrayOrderCharNumber - 1];
					}else if(LoopTimeModulo2Plus1 == 2){
						OriginalParameterArrayOneChar = CopyCharParameterStrings[WholeOriginalParameterArrayOrderCharNumber - 1];
					}//LoopTimeModulo2Plus1
					
				}//PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber&1
			}//ParameterArrayOrderCharNumberUnitOutputDenialMarker&0
			
			OriginalOneChar = (char)0;
			
			if(MaxOriginalPartialOrderCharNumber >= 1){
				if(SavedOneCharReadStatus == UndefinedApplicationReadStatus){
					OriginalOneChar = CandidateOriginalOneChar;
				}else if(SavedOneCharReadStatus == ParameterApplicationReadStatus){
					OriginalOneChar = OriginalParameterArrayOneChar;
				}//SavedOneCharReadStatus
			}//MaxOriginalPartialOrderCharNumber&1
			
			if(MaxOriginalPartialOrderCharNumber >= 1){
				OneChar = OriginalOneChar;
			}//MaxOriginalPartialOrderCharNumber&1
			
			
			if(PartialOrderNumberLoopTimeEndMarker != 0){
				if(OriginalOrderNumberLoopTimeEndMarker != 0){
					if(MaxOriginalPartialOrderCharNumber >= 1){
						if(RoutineStatus == ParameterApplicationRoutineStatus){
							if(LoopTime == 2){
								CharParameterStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}else if(LoopTime == 3){
								CopyCharParameterStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}//LoopTime
						}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
							if(LoopTime == 2){
								CharAnalysisStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}else if(LoopTime == 3){
								CopyCharAnalysisStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}//LoopTime
						}else if(RoutineStatus == ValueApplicationRoutineStatus){
							if(LoopTime == 2){
								CharValueStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}else if(LoopTime == 3){
								CopyCharValueStrings[WholeSubstitutedOrderCharNumber - 1] = OneChar;
							}//LoopTime
						}//RoutineStatus
					}//MaxOriginalPartialOrderCharNumber&1
				}//OriginalOrderNumberLoopTimeEndMarker&0
			}//PartialOrderNumberLoopTimeEndMarker&0

			if(PartialOrderCharNumberEndMarker != 0){
				MaxPartialOrderCharNumber = PartialOrderCharNumber;
				OriginalOrderCharNumberUnitMaxPartialOrderCharNumber = OriginalOrderCharNumberUnitMaxPartialOrderCharNumber + MaxPartialOrderCharNumber;
				if(OriginalOrderCharNumberEndMarker != 0){
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						if(OriginalOrderNumberLoopTimeEndMarker != 0){
							MaxOrderCharNumber = OrderCharNumber;
							if(OriginalOrderNumberLoopTimeEndMarker != 0){
								OriginalOrderNumberUnitMaxOrderCharNumber = OriginalOrderNumberUnitMaxOrderCharNumber + MaxOrderCharNumber;
								if(MaxOriginalPartialOrderNumber >= 1){
									if(RoutineStatus == ParameterApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalParameterStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											MaxParameterStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
										}else if(LoopTime == 3){
											CopyTotalParameterStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											CopyMaxParameterStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
										}//LoopTime
									}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalAnalysisStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											MaxAnalysisStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
										}else if(LoopTime == 3){
											CopyTotalAnalysisStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											CopyMaxAnalysisStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
										}//LoopTime
									}else if(RoutineStatus == ValueApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalValueStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											MaxValueStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
											OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers[WholeOrderNumber - 1] = OriginalOrderKindCutTotalOrderCharNumber;
										}else if(LoopTime == 3){
											CopyTotalValueStringCharNumbers[WholeOrderNumber - 1] = TotalOrderCharNumber;
											CopyMaxValueStringCharNumbers[WholeOrderNumber - 1] = MaxOrderCharNumber;
											CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers[WholeOrderNumber - 1] = OriginalOrderKindCutTotalOrderCharNumber;
										}//LoopTime
									}//RoutineStatus
								}//MaxOriginalPartialOrderNumber&1
								TotalOrderCharNumber = TotalOrderCharNumber + MaxOrderCharNumber;
								OriginalOrderKindCutTotalOrderCharNumber = OriginalOrderKindCutTotalOrderCharNumber + MaxOrderCharNumber;
							}//OriginalOrderNumberLoopTimeEndMarker&0
						}//OriginalOrderNumberLoopTimeEndMarker&0
					}//PartialOrderNumberLoopTimeEndMarker&0
					OrderCharNumberCounterStartMarker = -1;
					OriginalParameterArrayOrderCharNumber = 0;
					OriginalOrderCharNumber = 0;
					OriginalOrderCharNumberEndMarker = 0;
				}//OriginalOrderCharNumberEndMarker&0
				PartialOrderCharNumber = 0;
				PartialOrderCharNumberEndMarker = 0;
			}//PartialCharNumberEndMarker&0
			
			if(OrderCharNumberCounterStartMarker <= 0){
				
				if(PartialOrderNumberEndMarker != 0){
					MaxPartialOrderNumber = PartialOrderNumber;
					if(MaxOriginalOrderNumberLoopTime >= 1){
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
								ValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber = DummyValueSubStringSmallestRoundUpOrderNumberDecimalOrderOrderNumber;
								ValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber = DummyValueSubStringLargestRoundUpOrderNumberDecimalOrderOrderNumber;
								
							}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								if(PartialOrderNumberLoopTime == 1){
									
									RoundDownToZeroMarker = DummyRoundDownToZeroMarker;
									
									if(RoundDownToZeroMarker == 0){
										if(DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker == 0){
											CalculatedMaxOriginalCarryUpDigitOrderNumber = CandidateMaxOriginalCarryUpDigitOrderNumber;
										}//DummyCarryUpDigitWholeDigitOrderOrderNumberDiscontinuityMarker&0
										
										WholeDigitOrderOrderNumber = MaxPartialOrderNumber;
									}else if(RoundDownToZeroMarker != 0){
										WholeDigitOrderOrderNumber = 1;
									}//RoundDownToZeroMarker&0
									
								}//PartialOrderNumberLoopTime&1
							}//OriginalOrderType
						}//RoutineStatus&ValueApplicationRoutineStatus
						
					}//MaxOriginalOrderNumberLoopTime&1
					if(PartialOrderNumberLoopTimeEndMarker != 0){
						OriginalOrderNumberUnitMaxPartialOrderNumber = OriginalOrderNumberUnitMaxPartialOrderNumber + MaxPartialOrderNumber;
						if(RoutineStatus == ValueApplicationRoutineStatus){
							if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber = OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber + WholeDigitOrderOrderNumber;
								OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber + WholeDigitOrderOrderNumber;
								
							}//OriginalOrderType
						}//RoutineStatus
						
						if(OriginalOrderNumberEndMarker != 0){
							MaxOrderNumber = OrderNumber;
							if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
									SavedOriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber = OriginalOrderKindUnitMaxPartialWholeDigitOrderOrderNumber;
								}//OriginalOrderType
							}//RoutineStatus
							if(OriginalOrderNumberLoopTimeEndMarker != 0){
								if(MaxOriginalPartialOrderLanguageSort >= 1){
									if(RoutineStatus == ParameterApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalParameterStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											MaxParameterStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}else if(LoopTime == 3){
											CopyTotalParameterStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											CopyMaxParameterStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}//LoopTime
									}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalAnalysisStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											MaxAnalysisStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}else if(LoopTime == 3){
											CopyTotalAnalysisStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											CopyMaxAnalysisStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}//LoopTime
									}else if(RoutineStatus == ValueApplicationRoutineStatus){
										if(LoopTime == 2){
											TotalValueStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											MaxValueStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}else if(LoopTime == 3){
											CopyTotalValueStringNumbers[WholeOrderLanguageSort - 1] = TotalOrderNumber;
											CopyMaxValueStringNumbers[WholeOrderLanguageSort - 1] = MaxOrderNumber;
										}//LoopTime
									}//RoutineStatus
								}//MaxOriginalPartialOrderLanguageSort&1
								OriginalOrderKindCutTotalOrderNumber = OriginalOrderKindCutTotalOrderNumber + MaxOrderNumber;
								if(RoutineStatus == ValueApplicationRoutineStatus){
									
									if(OriginalOrderType == ExponentialValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalExponentialOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalDecimalOrderOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber = OriginalOrderKindCutOriginalOrderNumberUnitTotalWholeDigitOrderOrderNumber + OriginalOrderNumberUnitMaxPartialWholeDigitOrderOrderNumber;
									}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalCarryUpDigitOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == SuffixValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalSuffixOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalPlusOrMinusSignOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == PrefixValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalPrefixOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == DotValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalDotOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}else if(OriginalOrderType == NullValueApplicationOrderType){
										OriginalOrderKindCutOriginalOrderNumberUnitTotalNullOrderNumber = OriginalOrderKindCutTotalOrderNumber;
									}//OriginalOrderType
								}//
								
								TotalOrderNumber = TotalOrderNumber + MaxOrderNumber;
								OriginalOrderNumberUnitTotalOrderCharNumber = OriginalOrderNumberUnitTotalOrderCharNumber + OriginalOrderNumberUnitMaxOrderCharNumber;
								OrderNumberCounterStartMarker = -1;
								OriginalOrderNumberLoopTime = 0;
								OriginalOrderNumberLoopTimeEndMarker = 0;
							}//OriginalOrderNumberLoopTimeEndMarker&9
							OriginalParameterArrayOrderNumber = 0;
							OriginalOrderNumber = 0;
							OriginalOrderNumberEndMarker = 0;
						}//OriginalOrderNumberEndMarker&0
						PartialOrderNumberLoopTime = 0;
						PartialOrderNumberLoopTimeEndMarker = 0;
					}//PartialOrderNumberLoopTimeEndMarker&0
					PartialOrderNumber = 0;
					PartialOrderNumberEndMarker = 0;
				}//PartialOrderNumberEndMarker&0
			}//OrderCharNumberCounterStartMarker&0
			
			if(OrderNumberCounterStartMarker <= 0){
				if(PartialOrderLanguageSortEndMarker != 0){
					MaxPartialOrderLanguageSort = PartialOrderLanguageSort;
					OriginalOrderLanguageSortUnitMaxPartialOrderLanguageSort = OriginalOrderLanguageSortUnitMaxPartialOrderLanguageSort + MaxPartialOrderLanguageSort;
					OriginalOrderLanguageSortUnitMaxOrderNumber = OriginalOrderLanguageSortUnitMaxOrderNumber + MaxOrderNumber;
					OriginalOrderLanguageSortUnitMaxOrderCharNumber = OriginalOrderLanguageSortUnitMaxOrderCharNumber + OriginalOrderNumberUnitMaxOrderCharNumber;
					if(OriginalOrderLanguageSortEndMarker != 0){
						
						MaxOrderLanguageSort = OrderLanguageSort;
						if(MaxOriginalPartialOrderKind >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalParameterStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									MaxParameterStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}else if(LoopTime == 3){
									CopyTotalParameterStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									CopyMaxParameterStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}//LoopTime
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalAnalysisStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									MaxAnalysisStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}else if(LoopTime == 3){
									CopyTotalAnalysisStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									CopyMaxAnalysisStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}//LoopTime
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalValueStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									MaxValueStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}else if(LoopTime == 3){
									CopyTotalValueStringLanguageSorts[WholeOrderKind - 1] = TotalOrderLanguageSort;
									CopyMaxValueStringLanguageSorts[WholeOrderKind - 1] = MaxOrderLanguageSort;
								}//LoopTime
							}//RoutineStatus
						}//MaxOriginalPartialOrderKind&1
						TotalOrderLanguageSort = TotalOrderLanguageSort + MaxOrderLanguageSort;
						
						OrderLanguageSortCounterStartMarker = -2;
						OriginalParameterArrayOrderLanguageSort = 0;
						OriginalOrderLanguageSort = 0;
						OriginalOrderLanguageSortEndMarker = 0;
					}//OriginalOrderLanguageSortEndMarker&0
					PartialOrderLanguageSort = 0;
					PartialOrderLanguageSortEndMarker = 0;
				}//PartialOrderLanguageSortEndMarker&0
			}//OrderNumberCounterStartMarker&0
			
			if(OrderLanguageSortCounterStartMarker <= 0){
				if(PartialOrderKindEndMarker != 0){
					MaxPartialOrderKind = PartialOrderKind;
					OriginalOrderKindUnitMaxPartialOrderKind = OriginalOrderKindUnitMaxPartialOrderKind + MaxPartialOrderKind;
					OriginalOrderKindUnitMaxOrderNumber = OriginalOrderKindUnitMaxOrderNumber + OriginalOrderLanguageSortUnitMaxOrderNumber;
					OriginalOrderKindUnitMaxOrderCharNumber = OriginalOrderKindUnitMaxOrderCharNumber + OriginalOrderLanguageSortUnitMaxOrderCharNumber;
					
					OriginalOrderLanguageSortUnitTotalOrderNumber = OriginalOrderLanguageSortUnitTotalOrderNumber + OriginalOrderLanguageSortUnitMaxOrderNumber;
					OriginalOrderLanguageSortUnitTotalOrderCharNumber = OriginalOrderLanguageSortUnitTotalOrderCharNumber + OriginalOrderLanguageSortUnitMaxOrderCharNumber;
					if(OriginalOrderKindEndMarker != 0){
						
						MaxOrderKind = OrderKind;
						if(MaxOriginalPartialOrderType >= 1){
							if(RoutineStatus == ValueApplicationRoutineStatus){
								if(OriginalOrderType == ExponentialValueApplicationOrderType){
									OriginalOrderKindUnitMaxExponentialOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == DecimalOrderOrderNumberValueApplicationOrderType){
									OriginalOrderKindUnitMaxDecimalOrderOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == WholeDigitOrderOrderNumberValueApplicationOrderType){
								}else if(OriginalOrderType == CarryUpDigitValueApplicationOrderType){
									OriginalOrderKindUnitMaxCarryUpDigitOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == SuffixValueApplicationOrderType){
									OriginalOrderKindUnitMaxSuffixOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == PlusOrMinusSignValueApplicationOrderType){
									OriginalOrderKindUnitMaxPlusOrMinusSignOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == PrefixValueApplicationOrderType){
									OriginalOrderKindUnitMaxPrefixOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == DotValueApplicationOrderType){
									OriginalOrderKindUnitMaxDotOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}else if(OriginalOrderType == NullValueApplicationOrderType){
									OriginalOrderKindUnitMaxNullOrderNumber = OriginalOrderKindUnitMaxOrderNumber;
								}//OriginalOrderType
							}//RoutineStatus
						}//MaxOriginalPartialOrderType&1
				
						if(MaxOriginalPartialOrderType >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalParameterStringKinds[WholeOrderType - 1] = TotalOrderKind;
									MaxParameterStringKinds[WholeOrderType - 1] = MaxOrderKind;
								}else if(LoopTime == 3){
									CopyTotalParameterStringKinds[WholeOrderType - 1] = TotalOrderKind;
									CopyMaxParameterStringKinds[WholeOrderType - 1] = MaxOrderKind;
								}//LoopTime
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalAnalysisStringKinds[WholeOrderType - 1] = TotalOrderKind;
									MaxAnalysisStringKinds[WholeOrderType - 1] = MaxOrderKind;
								}else if(LoopTime == 3){
									CopyTotalAnalysisStringKinds[WholeOrderType - 1] = TotalOrderKind;
									CopyMaxAnalysisStringKinds[WholeOrderType - 1] = MaxOrderKind;
								}//LoopTime
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalValueStringKinds[WholeOrderType - 1] = TotalOrderKind;
									MaxValueStringKinds[WholeOrderType - 1] = MaxOrderKind;
									StringKindUnitTotalValueStringNumbers[WholeOrderType - 1] = OriginalOrderKindUnitTotalOrderNumber;
									StringKindUnitMaxValueStringNumbers[WholeOrderType - 1] = OriginalOrderKindUnitMaxOrderNumber;
									StringKindUnitTotalValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindUnitTotalOrderCharNumber;
									StringKindUnitMaxValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindUnitMaxOrderCharNumber;
									StringKindCutTotalValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindCutTotalOrderCharNumber;
								}else if(LoopTime == 3){
									CopyTotalValueStringKinds[WholeOrderType - 1] = TotalOrderKind;
									CopyMaxValueStringKinds[WholeOrderType - 1] = MaxOrderKind;
									CopyStringKindUnitTotalValueStringNumbers[WholeOrderType - 1] = OriginalOrderKindUnitTotalOrderNumber;
									CopyStringKindUnitMaxValueStringNumbers[WholeOrderType - 1] = OriginalOrderKindUnitMaxOrderNumber;
									CopyStringKindUnitTotalValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindUnitTotalOrderCharNumber;
									CopyStringKindUnitMaxValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindUnitMaxOrderCharNumber;
									CopyStringKindCutTotalValueStringCharNumbers[WholeOrderType - 1] = OriginalOrderKindCutTotalOrderCharNumber;
								}//LoopTime
							}//RoutineStatus
							
							
						}//MaxOriginalPartialOrderType&1
						TotalOrderKind = TotalOrderKind + MaxOrderKind;
						
						OrderKindCounterStartMarker = -2;
						OriginalParameterArrayOrderKind = 0;
						OriginalOrderKind = 0;
						OriginalOrderKindEndMarker = 0;
					}//OriginalOrderKindEndMarker&0
					PartialOrderKind = 0;
					PartialOrderKindEndMarker = 0;
				}//PartialOrderKindEndMarker&0
			}//OrderLanguageSortCounterStartMarker&0
			
			if(OrderKindCounterStartMarker <= 0){
				
				if(PartialOrderTypeEndMarker != 0){
					MaxPartialOrderType = PartialOrderType;
					OriginalOrderTypeUnitMaxPartialOrderType = OriginalOrderTypeUnitMaxPartialOrderType + MaxPartialOrderType;
					OriginalOrderTypeUnitMaxOrderNumber = OriginalOrderTypeUnitMaxOrderNumber + OriginalOrderKindUnitMaxOrderNumber;
					OriginalOrderTypeUnitMaxOrderCharNumber = OriginalOrderTypeUnitMaxOrderCharNumber + OriginalOrderKindUnitMaxOrderCharNumber;
					
					OriginalOrderKindUnitTotalOrderNumber = OriginalOrderKindUnitTotalOrderNumber + OriginalOrderKindUnitMaxOrderNumber;
					OriginalOrderKindUnitTotalOrderCharNumber = OriginalOrderKindUnitTotalOrderCharNumber + OriginalOrderKindUnitMaxOrderCharNumber;
					
					if(OriginalOrderTypeEndMarker != 0){
						
						MaxOrderType = OrderType;
						if(MaxOriginalPartialOrderValueNumber >= 1){
							if(RoutineStatus == ParameterApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalParameterStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									MaxParameterStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}else if(LoopTime == 3){
									CopyTotalParameterStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									CopyMaxParameterStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}//LoopTime
							}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalAnalysisStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									MaxAnalysisStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}else if(LoopTime == 3){
									CopyTotalAnalysisStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									CopyMaxAnalysisStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}//LoopTime
							}else if(RoutineStatus == ValueApplicationRoutineStatus){
								if(LoopTime == 2){
									TotalValueStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									MaxValueStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}else if(LoopTime == 3){
									CopyTotalValueStringTypes[WholeOrderValueNumber - 1] = TotalOrderType;
									CopyMaxValueStringTypes[WholeOrderValueNumber - 1] = MaxOrderType;
								}//LoopTime
							}//RoutineStatus
						}//MaxOriginalPartialOrderValueNumber&1
						TotalOrderType = TotalOrderType + MaxOrderType;
						
						OrderTypeCounterStartMarker = -2;
						OriginalParameterArrayOrderType = 0;
						OriginalOrderType = 0;
						OriginalOrderTypeEndMarker = 0;
					}//OriginalOrderTypeEndMarker&0
					PartialOrderType = 0;
					PartialOrderTypeEndMarker = 0;
				}//PartialOrderTypeEndMarker&0
			}//OrderKindCounterStartMarker&0
			
			if(OrderTypeCounterStartMarker <= 0){

				if(PartialOrderValueNumberEndMarker != 0){
					MaxPartialOrderValueNumber = PartialOrderValueNumber;
					OriginalOrderValueNumberUnitMaxPartialOrderValueNumber = OriginalOrderValueNumberUnitMaxPartialOrderValueNumber + MaxPartialOrderValueNumber;
					OriginalOrderValueNumberUnitMaxOrderCharNumber = OriginalOrderValueNumberUnitMaxOrderCharNumber + OriginalOrderTypeUnitMaxOrderCharNumber;
					OriginalOrderValueNumberUnitMaxOrderNumber = OriginalOrderValueNumberUnitMaxOrderNumber + OriginalOrderTypeUnitMaxOrderNumber;
					
					OriginalOrderTypeUnitTotalOrderNumber = OriginalOrderTypeUnitTotalOrderNumber + OriginalOrderTypeUnitMaxOrderNumber;
					OriginalOrderTypeUnitTotalOrderCharNumber = OriginalOrderTypeUnitTotalOrderCharNumber + OriginalOrderTypeUnitMaxOrderCharNumber;
					if(OriginalOrderValueNumberEndMarker != 0){
						MaxOrderValueNumber = OrderValueNumber;
						if(RoutineStatus == AnalysisApplicationRoutineStatus){
							TotalAnalysisArrayOrderValueNumber = 2;
						}//RoutineStatu
						TotalOrderValueNumber = TotalOrderValueNumber + MaxOrderValueNumber;
						OriginalOrderValueNumberUnitTotalOrderNumber = OriginalOrderValueNumberUnitTotalOrderNumber + OriginalOrderValueNumberUnitMaxOrderNumber;
						OriginalOrderValueNumberUnitTotalOrderCharNumber = OriginalOrderValueNumberUnitTotalOrderCharNumber + OriginalOrderValueNumberUnitMaxOrderCharNumber;
						
						OrderValueNumberCounterStartMarker = -2;
						OriginalParameterArrayOrderValueNumber = 0;
						OriginalOrderValueNumber = 0;
						OriginalOrderValueNumberEndMarker = 0;
					}//OriginalOrderValueNumberEndMarker&0
					PartialOrderValueNumber = 0;
					PartialOrderValueNumberEndMarker = 0;
				}//PartialOrderValueNumberEndMarker&0
			}//OrderTypeCounterStartMarker&0
			
			if(OrderValueNumberCounterStartMarker <= 0){
				if(RoutineStatus == ParameterApplicationRoutineStatus){
					if(LoopTime == 1){
						if(TotalParameterStringTypes != NULL){
							TotalParameterStringTypes = NULL;
						}//TotalParameterStringTypes&NULL;
						if(MaxParameterStringTypes != NULL){
							MaxParameterStringTypes = NULL;
						}//MaxParameterStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							TotalParameterStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							MaxParameterStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(TotalParameterStringKinds != NULL){
							TotalParameterStringKinds = NULL;
						}//TotalParameterStringKinds&NULL;
						if(MaxParameterStringKinds != NULL){
							MaxParameterStringKinds = NULL;
						}//MaxParameterStringKinds&NULL;
						if(TotalOrderType >= 1){
							TotalParameterStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							MaxParameterStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(TotalParameterStringLanguageSorts != NULL){
							TotalParameterStringLanguageSorts = NULL;
						}//TotalParameterStringLanguageSorts&NULL;
						if(MaxParameterStringLanguageSorts != NULL){
							MaxParameterStringLanguageSorts = NULL;
						}//MaxParameterStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							TotalParameterStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							MaxParameterStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(TotalParameterStringNumbers != NULL){
							TotalParameterStringNumbers = NULL;
						}//TotalParameterStringNumbers&NULL;
						if(MaxParameterStringNumbers != NULL){
							MaxParameterStringNumbers = NULL;
						}//MaxParameterStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							TotalParameterStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							MaxParameterStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(TotalParameterStringCharNumbers != NULL){
							TotalParameterStringCharNumbers = NULL;
						}//TotalParameterStringCharNumbers&NULL;
						if(MaxParameterStringCharNumbers != NULL){
							MaxParameterStringCharNumbers = NULL;
						}//MaxParameterStringCharNumbers&NULL;
						if(TotalOrderNumber >= 1){
							TotalParameterStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							MaxParameterStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						}//TotalOrderNumber&1
						
						if(CharParameterStrings != NULL){
							CharParameterStrings = NULL;
						}//CharParameterStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CharParameterStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CharParameterStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
						
					}else if(LoopTime == 2){
						if(CopyTotalParameterStringTypes != NULL){
							CopyTotalParameterStringTypes = NULL;
						}//CopyTotalParameterStringTypes&NULL;
						if(CopyMaxParameterStringTypes != NULL){
							CopyMaxParameterStringTypes = NULL;
						}//CopyMaxParameterStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							CopyTotalParameterStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							CopyMaxParameterStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(CopyTotalParameterStringKinds != NULL){
							CopyTotalParameterStringKinds = NULL;
						}//CopyTotalParameterStringKinds&NULL;
						if(CopyMaxParameterStringKinds != NULL){
							CopyMaxParameterStringKinds = NULL;
						}//CopyMaxParameterStringKinds&NULL;
						if(TotalOrderType >= 1){
							CopyTotalParameterStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyMaxParameterStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(CopyTotalParameterStringLanguageSorts != NULL){
							CopyTotalParameterStringLanguageSorts = NULL;
						}//CopyTotalParameterStringLanguageSorts&NULL;
						if(CopyMaxParameterStringLanguageSorts != NULL){
							CopyMaxParameterStringLanguageSorts = NULL;
						}//CopyMaxParameterStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalParameterStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							CopyMaxParameterStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(CopyTotalParameterStringNumbers != NULL){
							CopyTotalParameterStringNumbers = NULL;
						}//CopyTotalParameterStringNumbers&NULL;
						if(CopyMaxParameterStringNumbers != NULL){
							CopyMaxParameterStringNumbers = NULL;
						}//CopyMaxParameterStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalParameterStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							CopyMaxParameterStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(CopyTotalParameterStringCharNumbers != NULL){
							CopyTotalParameterStringCharNumbers = NULL;
						}//CopyTotalParameterStringCharNumbers&NULL;
						if(CopyMaxParameterStringCharNumbers != NULL){
							CopyMaxParameterStringCharNumbers = NULL;
						}//CopyMaxParameterStringCharNumbers&NULL;
						if(TotalOrderNumber >= 1){
							CopyTotalParameterStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							CopyMaxParameterStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						}//TotalOrderNumber&1
						
						if(CopyCharParameterStrings != NULL){
							CopyCharParameterStrings = NULL;
						}//CopyCharParameterStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CopyCharParameterStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CopyCharParameterStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
						
					}//LoopTime
				}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
					if(LoopTime == 1){
						if(TotalAnalysisStringTypes != NULL){
							TotalAnalysisStringTypes = NULL;
						}//TotalAnalysisStringTypes&NULL;
						if(MaxAnalysisStringTypes != NULL){
							MaxAnalysisStringTypes = NULL;
						}//MaxAnalysisStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							TotalAnalysisStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							MaxAnalysisStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						
						if(TotalAnalysisStringKinds != NULL){
							TotalAnalysisStringKinds = NULL;
						}//TotalAnalysisStringKinds&NULL;
						if(MaxAnalysisStringKinds != NULL){
							MaxAnalysisStringKinds = NULL;
						}//MaxAnalysisStringKinds&NULL;
						if(TotalOrderType >= 1){
							TotalAnalysisStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							MaxAnalysisStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(TotalAnalysisStringLanguageSorts != NULL){
							TotalAnalysisStringLanguageSorts = NULL;
						}//TotalAnalysisStringLanguageSorts&NULL;
						if(MaxAnalysisStringLanguageSorts != NULL){
							MaxAnalysisStringLanguageSorts = NULL;
						}//MaxAnalysisStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							TotalAnalysisStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							MaxAnalysisStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(TotalAnalysisStringNumbers != NULL){
							TotalAnalysisStringNumbers = NULL;
						}//TotalAnalysisStringNumbers&NULL;
						if(MaxAnalysisStringNumbers != NULL){
							MaxAnalysisStringNumbers = NULL;
						}//MaxAnalysisStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							TotalAnalysisStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							MaxAnalysisStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(MaxAnalysisStringCharNumbers != NULL){
							MaxAnalysisStringCharNumbers = NULL;
						}//MaxAnalysisStringCharNumbers&NULL
						if(TotalAnalysisStringCharNumbers != NULL){
							TotalAnalysisStringCharNumbers = NULL;
						}//TotalAnalysisStringCharNumbers&NULL
						MaxAnalysisStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						TotalAnalysisStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						
						if(CharAnalysisStrings != NULL){
							CharAnalysisStrings = NULL;
						}//CharAnalysisStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CharAnalysisStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CharAnalysisStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
					}else if(LoopTime == 2){
						if(CopyTotalAnalysisStringTypes != NULL){
							CopyTotalAnalysisStringTypes = NULL;
						}//CopyTotalAnalysisStringTypes&NULL;
						if(CopyMaxAnalysisStringTypes != NULL){
							CopyMaxAnalysisStringTypes = NULL;
						}//CopyMaxAnalysisStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							CopyTotalAnalysisStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							CopyMaxAnalysisStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(CopyTotalAnalysisStringKinds != NULL){
							CopyTotalAnalysisStringKinds = NULL;
						}//CopyTotalAnalysisStringKinds&NULL;
						if(CopyMaxAnalysisStringKinds != NULL){
							CopyMaxAnalysisStringKinds = NULL;
						}//CopyMaxAnalysisStringKinds&NULL;
						if(TotalOrderType >= 1){
							CopyTotalAnalysisStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyMaxAnalysisStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(CopyTotalAnalysisStringLanguageSorts != NULL){
							CopyTotalAnalysisStringLanguageSorts = NULL;
						}//CopyTotalAnalysisStringLanguageSorts&NULL;
						if(CopyMaxAnalysisStringLanguageSorts != NULL){
							CopyMaxAnalysisStringLanguageSorts = NULL;
						}//CopyMaxAnalysisStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalAnalysisStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							CopyMaxAnalysisStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(CopyTotalAnalysisStringNumbers != NULL){
							CopyTotalAnalysisStringNumbers = NULL;
						}//CopyTotalAnalysisStringNumbers&NULL;
						if(CopyMaxAnalysisStringNumbers != NULL){
							CopyMaxAnalysisStringNumbers = NULL;
						}//CopyMaxAnalysisStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalAnalysisStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							CopyMaxAnalysisStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(CopyMaxAnalysisStringCharNumbers != NULL){
							CopyMaxAnalysisStringCharNumbers = NULL;
						}//CopyMaxAnalysisStringCharNumbers&NULL
						if(CopyTotalAnalysisStringCharNumbers != NULL){
							CopyTotalAnalysisStringCharNumbers = NULL;
						}//CopyTotalAnalysisStringCharNumbers&NULL
						CopyMaxAnalysisStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						CopyTotalAnalysisStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						
						if(CopyCharAnalysisStrings != NULL){
							CopyCharAnalysisStrings = NULL;
						}//CopyCharAnalysisStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CopyCharAnalysisStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CopyCharAnalysisStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
					}//LoopTime
				}else if(RoutineStatus == ValueApplicationRoutineStatus){
					if(LoopTime == 1){
						if(TotalValueStringTypes != NULL){
							TotalValueStringTypes = NULL;
						}//TotalValueStringTypes&NULL;
						if(MaxValueStringTypes != NULL){
							MaxValueStringTypes = NULL;
						}//MaxValueStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							TotalValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							MaxValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(TotalValueStringKinds != NULL){
							TotalValueStringKinds = NULL;
						}//TotalValueStringKinds&NULL;
						if(MaxValueStringKinds != NULL){
							MaxValueStringKinds = NULL;
						}//MaxValueStringKinds&NULL;
						if(StringKindUnitTotalValueStringNumbers != NULL){
							StringKindUnitTotalValueStringNumbers = NULL;
						}//StringKindUnitTotalValueStringNumbers&NULL
						if(StringKindUnitMaxValueStringNumbers != NULL){
							StringKindUnitMaxValueStringNumbers = NULL;
						}//StringKindUnitMaxValueStringNumbers&NULL
						if(StringKindUnitTotalValueStringCharNumbers != NULL){
							StringKindUnitTotalValueStringCharNumbers = NULL;
						}//StringKindUnitTotalValueStringCharNumbers&NULL
						if(StringKindUnitMaxValueStringCharNumbers != NULL){
							StringKindUnitMaxValueStringCharNumbers = NULL;
						}//StringKindUnitMaxValueStringCharNumbers&NULL
						if(StringKindCutTotalValueStringCharNumbers != NULL){
							StringKindCutTotalValueStringCharNumbers = NULL;
						}//StringKindCutTotalValueStringCharNumbers&NULL
						if(TotalOrderType >= 1){
							TotalValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							MaxValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							StringKindUnitTotalValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							StringKindUnitMaxValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							StringKindUnitTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							StringKindUnitMaxValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							StringKindCutTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(TotalValueStringLanguageSorts != NULL){
							TotalValueStringLanguageSorts = NULL;
						}//TotalValueStringLanguageSorts&NULL;
						if(MaxValueStringLanguageSorts != NULL){
							MaxValueStringLanguageSorts = NULL;
						}//MaxValueStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							TotalValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							MaxValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(TotalValueStringNumbers != NULL){
							TotalValueStringNumbers = NULL;
						}//TotalValueStringNumbers&NULL;
						if(MaxValueStringNumbers != NULL){
							MaxValueStringNumbers = NULL;
						}//MaxValueStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							TotalValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							MaxValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(MaxValueStringCharNumbers != NULL){
							MaxValueStringCharNumbers = NULL;
						}//MaxValueStringCharNumbers&NULL
						if(TotalValueStringCharNumbers != NULL){
							TotalValueStringCharNumbers = NULL;
						}//TotalValueStringCharNumbers&NULL
						if(OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers != NULL){
							OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = NULL;
						}//OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers&NULL
						if(TotalOrderNumber >= 1){
							MaxValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							TotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							OriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						}//TotalOrderNumber&1
						if(CharValueStrings != NULL){
							CharValueStrings = NULL;
						}//CharValueStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CharValueStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CharValueStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
					}else if(LoopTime == 2){
						if(CopyTotalValueStringTypes != NULL){
							CopyTotalValueStringTypes = NULL;
						}//CopyTotalValueStringTypes&NULL;
						if(CopyMaxValueStringTypes != NULL){
							CopyMaxValueStringTypes = NULL;
						}//CopyMaxValueStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							CopyTotalValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							CopyMaxValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(CopyTotalValueStringKinds != NULL){
							CopyTotalValueStringKinds = NULL;
						}//CopyTotalValueStringKinds&NULL;
						if(CopyMaxValueStringKinds != NULL){
							CopyMaxValueStringKinds = NULL;
						}//CopyMaxValueStringKinds&NULL;
						if(TotalOrderType >= 1){
							CopyTotalValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyMaxValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(CopyTotalValueStringLanguageSorts != NULL){
							CopyTotalValueStringLanguageSorts = NULL;
						}//CopyTotalValueStringLanguageSorts&NULL;
						if(CopyMaxValueStringLanguageSorts != NULL){
							CopyMaxValueStringLanguageSorts = NULL;
						}//CopyMaxValueStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							CopyMaxValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(CopyTotalValueStringNumbers != NULL){
							CopyTotalValueStringNumbers = NULL;
						}//CopyTotalValueStringNumbers&NULL;
						if(CopyMaxValueStringNumbers != NULL){
							CopyMaxValueStringNumbers = NULL;
						}//CopyMaxValueStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							CopyMaxValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(CopyTotalValueStringTypes != NULL){
							CopyTotalValueStringTypes = NULL;
						}//CopyTotalValueStringTypes&NULL;
						if(CopyMaxValueStringTypes != NULL){
							CopyMaxValueStringTypes = NULL;
						}//CopyMaxValueStringTypes&NULL;
						if(TotalOrderValueNumber >= 1){
							CopyTotalValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
							CopyMaxValueStringTypes = (int*)malloc(sizeof(int) * TotalOrderValueNumber);
						}//TotalOrderValueNumber&1
						
						if(CopyTotalValueStringKinds != NULL){
							CopyTotalValueStringKinds = NULL;
						}//CopyTotalValueStringKinds&NULL;
						if(CopyMaxValueStringKinds != NULL){
							CopyMaxValueStringKinds = NULL;
						}//CopyMaxValueStringKinds&NULL;
						if(CopyStringKindUnitTotalValueStringNumbers != NULL){
							CopyStringKindUnitTotalValueStringNumbers = NULL;
						}//CopyStringKindUnitTotalValueStringNumbers&NULL
						if(CopyStringKindUnitMaxValueStringNumbers != NULL){
							CopyStringKindUnitMaxValueStringNumbers = NULL;
						}//CopyStringKindUnitMaxValueStringNumbers&NULL
						if(CopyStringKindUnitTotalValueStringCharNumbers != NULL){
							CopyStringKindUnitTotalValueStringCharNumbers = NULL;
						}//CopyStringKindUnitTotalValueStringCharNumbers&NULL
						if(CopyStringKindUnitMaxValueStringCharNumbers != NULL){
							CopyStringKindUnitMaxValueStringCharNumbers = NULL;
						}//CopyStringKindUnitMaxValueStringCharNumbers&NULL
						if(CopyStringKindCutTotalValueStringCharNumbers != NULL){
							CopyStringKindCutTotalValueStringCharNumbers = NULL;
						}//CopyStringKindCutTotalValueStringCharNumbers&NULL
						if(TotalOrderType >= 1){
							CopyTotalValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyMaxValueStringKinds = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyStringKindUnitTotalValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyStringKindUnitMaxValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyStringKindUnitTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyStringKindUnitMaxValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
							CopyStringKindCutTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderType);
						}//TotalOrderType&1
						
						if(CopyTotalValueStringLanguageSorts != NULL){
							CopyTotalValueStringLanguageSorts = NULL;
						}//CopyTotalValueStringLanguageSorts&NULL;
						if(CopyMaxValueStringLanguageSorts != NULL){
							CopyMaxValueStringLanguageSorts = NULL;
						}//CopyMaxValueStringLanguageSorts&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
							CopyMaxValueStringLanguageSorts = (int*)malloc(sizeof(int) * TotalOrderKind);
						}//TotalOrderKind&1
						
						if(CopyTotalValueStringNumbers != NULL){
							CopyTotalValueStringNumbers = NULL;
						}//CopyTotalValueStringNumbers&NULL;
						if(CopyMaxValueStringNumbers != NULL){
							CopyMaxValueStringNumbers = NULL;
						}//CopyMaxValueStringNumbers&NULL;
						if(TotalOrderKind >= 1){
							CopyTotalValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
							CopyMaxValueStringNumbers = (int*)malloc(sizeof(int) * TotalOrderLanguageSort);
						}//TotalOrderKind&1
						
						if(CopyMaxValueStringCharNumbers != NULL){
							CopyMaxValueStringCharNumbers = NULL;
						}//CopyMaxValueStringCharNumbers&NULL
						if(CopyTotalValueStringCharNumbers != NULL){
							CopyTotalValueStringCharNumbers = NULL;
						}//CopyTotalValueStringCharNumbers&NULL
						if(CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers != NULL){
							CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = NULL;
						}//CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers&NULL
						if(TotalOrderNumber >= 1){
							CopyMaxValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							CopyTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
							CopyOriginalStringNumberUnitStringKindCutTotalValueStringCharNumbers = (int*)malloc(sizeof(int) * TotalOrderNumber);
						}//TotalOrderNumber&1
						if(CopyCharValueStrings != NULL){
							CopyCharValueStrings = NULL;
						}//CopyCharValueStrings&NULL
						if(TotalOrderCharNumber >= 1){
							CopyCharValueStrings = (char*)malloc(sizeof(char) * (TotalOrderCharNumber + 1));
							CopyCharValueStrings[(TotalOrderCharNumber + 1) - 1] = '\0';
						}//TotalOrderCharNumber&1
					}//LoopTime
				}//RoutineStatus
				
				if(RoutineStatus == ParameterApplicationRoutineStatus){
					if(LoopTime == 2){
						PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber = TotalOrderValueNumber;
						PreParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort = TotalOrderLanguageSort;
						PreParameterApplicationRoutineStatusGlobalTotalOrderType = TotalOrderType;
						PreParameterApplicationRoutineStatusGlobalTotalOrderKind = TotalOrderKind;
						PreParameterApplicationRoutineStatusGlobalTotalOrderNumber = TotalOrderNumber;
						PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber = TotalOrderCharNumber;
					}//LoopTime&1
					if(LoopTimeEndMarker != 0){
						ParameterApplicationRoutineStatusGlobalTotalOrderValueNumber = PreParameterApplicationRoutineStatusGlobalTotalOrderValueNumber;
						ParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort = PreParameterApplicationRoutineStatusGlobalTotalOrderLanguageSort;
						ParameterApplicationRoutineStatusGlobalTotalOrderType = PreParameterApplicationRoutineStatusGlobalTotalOrderType;
						ParameterApplicationRoutineStatusGlobalTotalOrderKind = PreParameterApplicationRoutineStatusGlobalTotalOrderKind;
						ParameterApplicationRoutineStatusGlobalTotalOrderNumber = PreParameterApplicationRoutineStatusGlobalTotalOrderNumber;
						ParameterApplicationRoutineStatusGlobalTotalOrderCharNumber = PreParameterApplicationRoutineStatusGlobalTotalOrderCharNumber;
					}//CharLoopTimeEndMarker&0
				}else if(RoutineStatus == AnalysisApplicationRoutineStatus){
					if(LoopTime == 2){
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderValueNumber = TotalOrderValueNumber;
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderLanguageSort = TotalOrderLanguageSort;
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderType = TotalOrderType;
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderKind = TotalOrderKind;
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderNumber = TotalOrderNumber;
						PreAnalysisApplicationRoutineStatusGlobalTotalOrderCharNumber = TotalOrderCharNumber;
					}//LoopTime&1
					if(LoopTimeEndMarker != 0){
						AnalysisApplicationRoutineStatusGlobalTotalOrderValueNumber = PreAnalysisApplicationRoutineStatusGlobalTotalOrderValueNumber;
						AnalysisApplicationRoutineStatusGlobalTotalOrderLanguageSort = PreAnalysisApplicationRoutineStatusGlobalTotalOrderLanguageSort;
						AnalysisApplicationRoutineStatusGlobalTotalOrderType = PreAnalysisApplicationRoutineStatusGlobalTotalOrderType;
						AnalysisApplicationRoutineStatusGlobalTotalOrderKind = PreAnalysisApplicationRoutineStatusGlobalTotalOrderKind;
						AnalysisApplicationRoutineStatusGlobalTotalOrderNumber = PreAnalysisApplicationRoutineStatusGlobalTotalOrderNumber;
						AnalysisApplicationRoutineStatusGlobalTotalOrderCharNumber = PreAnalysisApplicationRoutineStatusGlobalTotalOrderCharNumber;
					}//CharLoopTimeEndMarker&0
				}else if(RoutineStatus == ValueApplicationRoutineStatus){
					if(LoopTime == 2){
						PreValueApplicationRoutineStatusGlobalTotalOrderValueNumber = TotalOrderValueNumber;
						PreValueApplicationRoutineStatusGlobalTotalOrderLanguageSort = TotalOrderLanguageSort;
						PreValueApplicationRoutineStatusGlobalTotalOrderType = TotalOrderType;
						PreValueApplicationRoutineStatusGlobalTotalOrderKind = TotalOrderKind;
						PreValueApplicationRoutineStatusGlobalTotalOrderNumber = TotalOrderNumber;
						PreValueApplicationRoutineStatusGlobalTotalOrderCharNumber = TotalOrderCharNumber;
					}//LoopTime&1
					if(LoopTimeEndMarker != 0){
						ValueApplicationRoutineStatusGlobalTotalOrderValueNumber = PreValueApplicationRoutineStatusGlobalTotalOrderValueNumber;
						ValueApplicationRoutineStatusGlobalTotalOrderLanguageSort = PreValueApplicationRoutineStatusGlobalTotalOrderLanguageSort;
						ValueApplicationRoutineStatusGlobalTotalOrderType = PreValueApplicationRoutineStatusGlobalTotalOrderType;
						ValueApplicationRoutineStatusGlobalTotalOrderKind = PreValueApplicationRoutineStatusGlobalTotalOrderKind;
						ValueApplicationRoutineStatusGlobalTotalOrderNumber = PreValueApplicationRoutineStatusGlobalTotalOrderNumber;
						ValueApplicationRoutineStatusGlobalTotalOrderCharNumber = PreValueApplicationRoutineStatusGlobalTotalOrderCharNumber;
					}//CharLoopTimeEndMarker&0
				}//RoutineStatus
				
				if(LoopTimeModulo2Plus1EndMarker != 0){
					LoopTimeModulo2Plus1 = 0;
					LoopTimeModulo2Plus1EndMarker = 0;
				}//LoopTimeModulo2Plus1EndMarker&0
				
				if(LoopTimeEndMarker != 0){
					if(RoutineNumberEndMarker != 0){
						ValueConversionEndMarker = 1;
						RoutineNumber = 0;
						RoutineNumberEndMarker = 0;
					}//RoutineNumberEndMarker&0
					LoopTimeModulo2Plus1 = 0;
					LoopTime = 0;
					LoopTimeEndMarker = 0;
				}//LoopTimeEndMarker&0
			}//OrderValueNumberCounterStartMarker&0
			
		}while(ValueConversionEndMarker == 0);
		
		return(CharValueStrings);
	}//oubleValueToCharArray