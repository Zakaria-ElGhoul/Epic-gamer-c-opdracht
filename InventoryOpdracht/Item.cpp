#include "Item.h"


Item::Item(std::string aName, int aCoinValue, std::string aTypeID)
{
	name = aName;
	coinValue = aCoinValue;
	typeID = aTypeID;
}

Item::~Item()
{

}

std::string Item::GetName()
{
	return name;
}

void Item::SetName(std::string aName)
{
	name = aName;
}

int Item::GetCoinValue()
{
	return coinValue;
}

void Item::SetCoinValue(int aCoinValue)
{
	coinValue = aCoinValue;
}

std::string Item::GetTypeID()
{
	return typeID;
}

void Item::SetTypeID(std::string aTypeID)
{
	typeID = aTypeID;
}
