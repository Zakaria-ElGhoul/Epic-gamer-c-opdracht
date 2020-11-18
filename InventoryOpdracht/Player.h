#pragma once
#include <string>;
#include <vector>;
class Player
{
public:
    Player();
    ~Player();

private:
    std::string playerName;
    int coins;
    std::vector<std::string> inventory;
    std::vector<std::string> equipedItem;
    void EquipItem();


protected:
};
