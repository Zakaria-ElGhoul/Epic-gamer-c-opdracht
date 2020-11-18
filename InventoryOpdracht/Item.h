#pragma once
#include <string>;
#include <vector>;

class Item
{

public:

	Item(std::string aName, int aCoinValue, std::string aTypeID);
	~Item();

	std::string GetName();
	void SetName(std::string aName);

	int GetCoinValue();
	void SetCoinValue(int aCoinValue);

	std::string GetTypeID();
	void SetTypeID(std::string aTypeID);

private:
	std::string name;
	int coinValue;
	std::string typeID;
protected:

};

