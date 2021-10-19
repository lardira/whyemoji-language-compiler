#pragma once

#include "WhyToken.h"

class ParserNode
{
public:
	WhyToken token;
};

class NumberNode : public ParserNode
{
public:
	NumberNode(WhyToken& token);
};

class OperationNode : public ParserNode
{
public:
	OperationNode(NumberNode left, WhyToken& token, NumberNode right);
};
