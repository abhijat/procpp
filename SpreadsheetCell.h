#include <string>

class SpreadsheetCell
{
    public:
        SpreadsheetCell();
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(const std::string& initialValue);
        SpreadsheetCell(const SpreadsheetCell& src);
        void setValue(double inValue);
        double getValue() const;
        void setString(std::string inString);
        std::string getString() const;
    protected:
        std::string doubleToString(double inValue) const;
        double stringToDouble(std::string inString) const;
        double mValue;
        std::string mString;
};
