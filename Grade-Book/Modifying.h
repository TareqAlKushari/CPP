#include <string>
using namespace std;

class Modifying
{
public:
    explicit Modifying( string, string );
    void setCourseName( string );
    void setInstructorName( string );
    string getCourseName() const;
    string getInstructorName() const;
    string displayMessage() const;
private:
    string courseName;
    string instructorName;
};

