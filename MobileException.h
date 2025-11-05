#pragma once
#include <string>
using std::string;

class MobileException {
protected:
	string text;
public:
	MobileException(string text) {
		this->text = text;
	}
	virtual string showMessage()const = 0;
};

class NameException : public MobileException {
protected:
	string name;
public:
	NameException(string text, string name)
		:MobileException(text)
	{
		this->name = name;
	}
	string showMessage()const override {
		return "NameException: " + text + "! name:" + name + "!!!";
	}
};

class SecondException : public MobileException {
protected:
	int seconds;
public:
	SecondException(string text, int seconds)
		:MobileException(text)
	{
		this->seconds = seconds;
	}
	string showMessage()const override {
		return "SeconException: " + text + "! seconds:" + std::to_string(seconds) + "!!!";
	}
};

class PriceException : public MobileException {
protected:
	float price;
public:
	PriceException(string text, float price) 
	: MobileException(text)
	{
		this->price = price;
	}
	string showMessage()const override {
		return "PriceException: " + text + "! price:" + std::to_string(price) + "!!!";
	}
};

class ObjException :public MobileException {
public:
	ObjException(string text) 
	:MobileException(text) {
	}
	string showMessage()const override {
		return "ObjException: " + text + "!";
	}
};