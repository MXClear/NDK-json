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

#include "json.hpp"

using json = nlohmann::json;

/**
 * Demo for Niels Lohmann json library
 *
 * @return string with json data
 */
std::string jsonDemo() {
    int var1 = 78;
    bool var2 = true;

    json j1 = {"algun texto", "otro texto", 15, 22, var1, var2};
    json j2 = json::array({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

    return j1.dump() + "\n" + j2.dump();
}