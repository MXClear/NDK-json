/**
 * License Public Domain (CC0) 2017 Julio Tentor (jtentor@gmail.com)
 *
 * To the extent possible under law, Julio Tentor has waived all copyright and related
 * or neighboring rights. This work is published from: Jujuy - Argentina.
 *
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 */

#include <string>
#include <sstream>

#include "json.hpp"

using json = nlohmann::json;

/**
 * Demo for Niels Lohmann json library
 *
 * @return string with json data
 */
std::string jsonDemo() {
    std::ostringstream out;

    int var1 = 78;
    bool var2 = true;

    json j1 = {"algun texto", "otro texto", 15, 22, var1, var2};

    out << "j1 dump      " << j1.dump() << std::endl;
    out << "j1 to string " << j1 << std::endl;

    json j2 = json::array({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

    out << "j2 dump      " << j2.dump() << std::endl;
    out << "j2 to string " << j2 << std::endl;

    j2.insert(j2.end(), {101, 102, 103});
    j2.insert(j2.begin(), {-1, -2, -3});

    out << "after inserts" << std::endl;
    out << "j2 dump      " << j2.dump() << std::endl;
    out << "j2 to string " << j2 << std::endl;

    json j3 = json::object({{"text1", "algun texto"},
                            {"text2", "otro texto"},
                            {"num1",  15},
                            {"num2",  22},
                            {"var1",  var1},
                            {"var2",  var2}});

    out << "j3 dump      " << j3.dump() << std::endl;
    out << "j3 to string " << j3 << std::endl;

/*
 * From Notes at https://github.com/Newbrick/json#notes
 *
 * By default, the library does not preserve the insertion order of object elements. This is
 * standards-compliant, as the JSON standard defines objects as "an unordered collection of
 * zero or more name/value pairs". If you do want to preserve the insertion order, you can
 * specialize the object type with containers like tsl::ordered_map or nlohmann::fifo_map.
 */
    j3.push_back({"push_back", true});

    out << "after push_back" << std::endl;
    out << "j3 dump      " << j3.dump() << std::endl;
    out << "j3 to string " << j3 << std::endl;

    return out.str();
}