#include <fstream>
#include <iostream>

// ...

int main()
{
    // notice that IIRC on modern Windows machines if you aren't admin
    // you can't write in the root directory of the system drive;
    // you should instead write e.g. in the current directory
    std::ofstream fs("D:\\k.txt");

    if(!fs)
    {
        std::cerr<<"Cannot open the output file."<<std::endl;
        return 1;
    }
    fs<<"ghgh";
    fs.close();
    return 0;
}
