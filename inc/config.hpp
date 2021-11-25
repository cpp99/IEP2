#ifndef CONFIG_HPP
#define CONFIG_HPP 

#include <iostream>

#ifndef COPYRIGHT_INFO
#define COPYRIGHT_INFO "Copyright  CRISTI" //ce vrei dupa copyright
#endif

namespace conf { //ce vrei la namespace

inline void version()
{
    std::cout << "Application " << "Masini" << std::endl //ce vrei la nume
              << "Version " << "1.0" << std::endl //ce vrei la versiune
              << COPYRIGHT_INFO << std::endl
              << std::endl;
}

} // namespace hello

#endif // CONFIG_HPP