#include "SWOTItem.h"
#include <iostream>

SWOTItem::SWOTItem(){
    category = "";
    description = "";
    score = 0;
}

SWOTItem::SWOTItem(std::string* category, std::string* description, int* score){
    this->category = *category;
    this->description = *description;
    this->score = *score;
}

SWOTItem::SWOTItem(SWOTItem* item){
    this->category = item->category;
    this->description = item->description;
    this->score = item->score;
}

std::string SWOTItem::getDescription()
{
    return std::string();
}

int SWOTItem::getScore()
{
    return 0;
}

void SWOTItem::setScore(int score)
{
}

bool SWOTItem::operator==(const SWOTItem & sw)
{
    bool found = this->description.find(sw.description) != std::string::npos;
    found |= sw.description.find(this->description) != std::string::npos;
    return found;
}

std::ostream &operator<<(std::ostream &os, SWOTItem &sw)
{
    // TODO: insert return statement here
    os<<"description: " +sw.description + "  score: " + std::to_string(sw.score);
    return os;
}

std::istream &operator>>(std::istream &is, SWOTItem &sw)
{
    // TODO: insert return statement here
    std::string category;
    std::cout<<"Please enter the category of the swot item: ";
    is
    return is;
}
