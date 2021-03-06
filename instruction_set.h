#pragma once
#include "includes.h"

enum mnemonic
{
	GRA = -0x7E5120,
	GRB = -0x7E5121,
	GRC = -0x7E5122,
	GRD = -0x7E5123,
	GRE = -0x7E5124,
	GRF = -0x7E5125,
	ACC = -0x7E5126,
	RR = -0x7E5127,
	SP = -0x7E5128,
	BP = -0x7E5129,
	IC = -0x7E5130,

	PUSH = -0x7E5131,
	POP = -0x7E5132,
	MOV = -0x7E5133,
	MOVB = -0x7E5134,
	MOVW = -0x7E5135,
	MOVD = -0x7E5136,
	MOVF = -0x8E5137,
	CMP = -0x7E5138,
	RET = -0x7E5139,

	ADD = -0x7E5140,
	SUB = -0x7E5141,
	MUL = -0x7E5142,
	DIV = -0x7E5143,
	MOD = -0x7E5144,
	INC = -0x7E5145,
	DEC = -0x7E5146,
	GREATER = -0x7E5147,
	LESS = -0x7E5148,

	AND = -0x7E5149,
	OR = -0x7E5150,
	XOR = -0x7E5151,
	NOT = -0x7E5152,
	LSHIFT = -0x7E5153,
	RSHIFT = -0x7E5154,

	JMP = -0x7E5155,
	TJMP = -0x7E5156,
	FJMP = -0x7E5157,

    	GETC = -0x7E5160,
    	STROUT = -0x7E5161,
    	NUMOUT = -0x7E5162,
	HEXOUT = -0x7E5163,

	DEREF = -0x7E5164,
	ENTRY = -0x7E5165,
	NOREG = -0x7E5166,
	STALL = -0x7E5167
};

static std::vector<int64_t> instruction_set
{
	-0x7E5120,
	-0x7E5121,
	-0x7E5122,
	-0x7E5123,
	-0x7E5124,
	-0x7E5125,
	-0x7E5126,
	-0x7E5127,
	-0x7E5128,
	-0x7E5129,
	-0x7E5130,

	-0x7E5131,
	-0x7E5132,
	-0x7E5133,
	-0x7E5134,
	-0x7E5135,
	-0x7E5136,
	-0x8E5137,
	-0x7E5138,
	-0x7E5139,

	-0x7E5140,
	-0x7E5141,
	-0x7E5142,
	-0x7E5143,
	-0x7E5144,
	-0x7E5145,
	-0x7E5146,
	-0x7E5147,
	-0x7E5148,

	-0x7E5149,
	-0x7E5150,
	-0x7E5151,
	-0x7E5152,
	-0x7E5153,
	-0x7E5154,

	-0x7E5155,
	-0x7E5156,
	-0x7E5157,

    	-0x7E5160,
    	-0x7E5161,
    	-0x7E5162,
	-0x7E5163,

	-0x7E5164,
	-0x7E5165,
	-0x7E5166,
	-0x7E5167
};
