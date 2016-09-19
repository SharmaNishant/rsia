/**
888b    888 d8b               888                             888               888
8888b   888 Y8P               888                             888               888
88888b  888                   888                             888               888
888Y88b 888 888 88888b.d88b.  88888b.  888  888 .d8888b       888       8888b.  88888b.
888 Y88b888 888 888 "888 "88b 888 "88b 888  888 88K           888          "88b 888 "88b
888  Y88888 888 888  888  888 888  888 888  888 "Y8888b.      888      .d888888 888  888
888   Y8888 888 888  888  888 888 d88P Y88b 888      X88      888      888  888 888 d88P
888    Y888 888 888  888  888 88888P"   "Y88888  88888P'      88888888 "Y888888 88888P"
 */

/**
 * @author Nishant Sharma
 * @date 2016/05/12
 * @version 1.0
 */


#ifndef PHASETWO_FUNCTION_H
#define PHASETWO_FUNCTION_H

#include "GlobalFunctions.h"
#include <DataStructures.h>
#include <PublishCall.h>

using namespace std;

class Function
{
public:
	Function(){};
	virtual ~Function(){};

	string name;
	Dependency dependency;
	bool isCallback;
	bool isFixedRate;
	double rate;
	string subscribedTopic;
	TimePattern timePattern;
	vector<Function> functionCalls;
	vector<string> conditions;
	vector<PublishCall> publishCalls;


	void Dump();
};

#endif //PHASETWO_FUNCTION_H
