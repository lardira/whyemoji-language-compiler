﻿#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "WhyToken.h"
#include "Utils.h"

class WhyLexer
{
public:
	WhyLexer() = default;
	~WhyLexer() = default;

	static std::vector<WhyToken> Tokens;
	static void Tokenize(std::string& inputText);
	static void TryGetOperator(const std::string& stringToken);
	static void TryGetObject(const std::string& stringToken);
	static void TryGetOtherTokens(const std::string& stringToken);
	static void ClearTokens();

private:
	static std::vector<std::string> possibleVariables;
};

