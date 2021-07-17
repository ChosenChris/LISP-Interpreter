/*
FILE:		ErrorMessages.hpp

REMARKS:	This file stores every error message.
*/
#pragma once

using namespace std;



/**
* The namespace Error contains every error message, that can be generated by the Interpreter.
*/
namespace Error {
	const short int SUCCESS = 0;

	/**
	* Enumeration contains every error message that can be generated by the FileScanner.
	*/
	enum FileScanner : const short int {
		ERROR_FILESCANNER_FILE_DOES_NOT_EXIST = 1 //The file does not exist.
	};

	/**
	* Enumeration contains every error message that can be generated by the Tokenizer.
	*/
	enum Tokenizer : const short int {
		TOO_MANY_DECIMALS = 2, //Number has too many decimal points (max. allowed = 1).
		SOURCECODE_NOT_LONG_ENOUGH = 3, //The sourcecode is not long enough.
		EMPTY_CHARACTER_ENCOUNTERED = 4, //A char-type value is used, that does not include any character.
		NO_EXIT_QUOTATION_MARK = 5 //The quotation mark is not present at all, or at the appropriate position.
	};

	/**
	* Enumeration contains every error message that can be generated by the Parser.
	*/
	enum Parser : const short int {
		SYNTAX_P = 6, //Syntax error.
		EMPTY_AST_P = 7, //Information for the parsing-algorithm that makes the parser notice, that the parsed AST is empty. THIS IS NO ERROR MESSAGE, BUT JUST INFORMATION!
		ATOM_CAN_NEVER_BE_PARENTHESES = 8 //An atom apperas to be closed or opened parentheses.
	};

	/**
	* Enumeration contains every error message, that can be generated by the Interpreter.
	*/
	enum Interpreter : const short int {
		SYNTAX_I = 9, //Syntax error.
		OPERANDS_ARE_OF_DIFFERENT_TYPE = 10, //Operands of operation do not have the same datatype.
		CANNOT_ADD_BOOLEANS = 11, //Addition with booleans is not possible.
		CANNOT_SUBTRACT_NON_NUMERIC_VALUES = 12, //Subtraction of non-numeric values.
		CANNOT_MULTIPLY_NON_NUMERIC_VALUES = 13, //Multiplication of non-numeric values.
		CANNOT_DIVIDE_NON_NUMERIC_VALUES = 14, //Division of non-numeric values.
		CANNOT_DIVIDE_BY_ZERO = 15, //Division through the value 0.
		VARIABLE_DOES_NOT_EXIST = 16, //Used variable does not exist.
		VARIABLE_NAME_ALREADY_IN_USE = 17, //Variable's name does already exist.
		EMPTY_AST_I = 18, //An empty AST is encountered.
		MISSING_TOKEN = 19, //A token is missing in the sourcecode.
		INCORRECT_TOKEN = 20, //An incorrect token was found in the sourcecode.
		TOO_MANY_ARGUMENTS = 21, //There are too many arguments.
		NOT_ENOUGH_ARGUMENTS = 22, //There are not enough arguments.
		CANNOT_CONVERT_INT_TO_DOUBLE = 23, //Cannot convert integer to double.
		CANNOT_CONVERT_INT_TO_BOOL = 24, //Cannot convert integer to boolean.
		CANNOT_CONVERT_INT_TO_CHAR = 25, //Cannot convert integer to character.
		CANNOT_CONVERT_INT_TO_STRING = 26, //Cannot convert integer to string.
		CANNOT_CONVERT_DOUBLE_TO_INT = 27, //Cannot convert double to integer.
		CANNOT_CONVERT_DOUBLE_TO_BOOL = 28, //Cannot convert double to boolean.
		CANNOT_CONVERT_DOUBLE_TO_CHAR = 29, //Cannot convert double to character.
		CANNOT_CONVERT_DOUBLE_TO_STRING = 30, //Cannot convert double to string.
		CANNOT_CONVERT_BOOL_TO_INT = 31, //Cannot convert boolean to integer.
		CANNOT_CONVERT_BOOL_TO_DOUBLE = 32, //Cannot convert boolean to double.
		CANNOT_CONVERT_BOOL_TO_CHAR = 33, //Cannot convert boolean to character.
		CANNOT_CONVERT_BOOL_TO_STRING = 34, //Cannot convert boolean to string.
		CANNOT_CONVERT_CHAR_TO_INT = 35, //Cannot convert character to integer.
		CANNOT_CONVERT_CHAR_TO_DOUBLE = 36, //Cannot convert character to double.
		CANNOT_CONVERT_CHAR_TO_BOOL = 37, //Cannot convert character to boolean.
		CANNOT_CONVERT_CHAR_TO_STRING = 38, //Cannot convert character to string.
		CANNOT_CONVERT_STRING_TO_INT = 39, //Cannot convert string to integer.
		CANNOT_CONVERT_STRING_TO_DOUBLE = 40, //Cannot convert string to double.
		CANNOT_CONVERT_STRING_TO_BOOL = 41, //Cannot convert string to boolean.
		CANNOT_CONVERT_STRING_TO_CHAR = 42 //Cannot convert string to character.
	};



	/**
	* This function produces the error message for a convert error (Codes 23-42).
	* 
	* @param nConvert	Type of the value that should be converted.
	* @param nTarget	Type of the expected value.
	* @return			Convert error message.
	*/
	short int produceConvertError(short int nConvert, short int nTarget) {
		if (nConvert == Token::U_INT) {
			if (nTarget == Token::U_DOUBLE) {
				return Error::Interpreter::CANNOT_CONVERT_INT_TO_DOUBLE;
			}
			else if (nTarget == Token::U_BOOL) {
				return Error::Interpreter::CANNOT_CONVERT_INT_TO_BOOL;
			}
			else if (nTarget == Token::U_CHAR) {
				return Error::Interpreter::CANNOT_CONVERT_INT_TO_CHAR;
			}
			else if (nTarget == Token::U_STRING) {
				return Error::Interpreter::CANNOT_CONVERT_INT_TO_STRING;
			}
		}
		else if (nConvert == Token::U_DOUBLE) {
			if (nTarget == Token::U_INT) {
				return Error::Interpreter::CANNOT_CONVERT_DOUBLE_TO_INT;
			}
			else if (nTarget == Token::U_BOOL) {
				return Error::Interpreter::CANNOT_CONVERT_DOUBLE_TO_BOOL;
			}
			else if (nTarget == Token::U_CHAR) {
				return Error::Interpreter::CANNOT_CONVERT_DOUBLE_TO_CHAR;
			}
			else if (nTarget == Token::U_STRING) {
				return Error::Interpreter::CANNOT_CONVERT_DOUBLE_TO_STRING;
			}
		}
		else if (nConvert == Token::U_BOOL) {
			if (nTarget == Token::U_INT) {
				return Error::Interpreter::CANNOT_CONVERT_BOOL_TO_INT;
			}
			else if (nTarget == Token::U_DOUBLE) {
				return Error::Interpreter::CANNOT_CONVERT_BOOL_TO_DOUBLE;
			}
			else if (nTarget == Token::U_CHAR) {
				return Error::Interpreter::CANNOT_CONVERT_BOOL_TO_CHAR;
			}
			else if (nTarget == Token::U_STRING) {
				return Error::Interpreter::CANNOT_CONVERT_BOOL_TO_STRING;
			}
		}
		else if (nConvert == Token::U_CHAR) {
			if (nTarget == Token::U_INT) {
				return Error::Interpreter::CANNOT_CONVERT_CHAR_TO_INT;
			}
			else if (nTarget == Token::U_DOUBLE) {
				return Error::Interpreter::CANNOT_CONVERT_CHAR_TO_DOUBLE;
			}
			else if (nTarget == Token::U_BOOL) {
				return Error::Interpreter::CANNOT_CONVERT_CHAR_TO_BOOL;
			}
			else if (nTarget == Token::U_STRING) {
				return Error::Interpreter::CANNOT_CONVERT_CHAR_TO_STRING;
			}
		}
		else if (nConvert == Token::U_STRING) {
			if (nTarget == Token::U_INT) {
				return Error::Interpreter::CANNOT_CONVERT_STRING_TO_INT;
			}
			else if (nTarget == Token::U_DOUBLE) {
				return Error::Interpreter::CANNOT_CONVERT_STRING_TO_DOUBLE;
			}
			else if (nTarget == Token::U_BOOL) {
				return Error::Interpreter::CANNOT_CONVERT_STRING_TO_BOOL;
			}
			else if (nTarget == Token::U_CHAR) {
				return Error::Interpreter::CANNOT_CONVERT_STRING_TO_CHAR;
			}
		}
		return Error::SUCCESS;
	}
}
