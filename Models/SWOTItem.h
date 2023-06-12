#include <string>
#include <list>
#include <map>

class SWOTItem{
private:
    std::string category;
    std::string description;
    int score;
public:
    // Constructors
    SWOTItem();
    SWOTItem(std::string* category, std::string* description, int* score);
    SWOTItem(SWOTItem* item);

    // Getters
    std::string getDescription();
    int getScore();

    // Setters
    void setScore(int score);

    bool operator==(const SWOTItem& sw);
    friend std::ostream& operator<<(std::ostream& os, SWOTItem& sw);
    friend std::istream& operator>>(std::istream& is, SWOTItem& sw);
    
};

using ListSWOTItems = std::list<SWOTItem>;
using SWOTBoard = std::map<std::string, ListSWOTItems>;