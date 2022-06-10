#include <iostream>
#include "index_table.hpp"

using namespace g80;
auto main(const int argc, const char *argv[]) -> int {

    index_table<uint, 5> table;
    table.add_to_bin(2);
    table.add_to_bin(4);
    table.add_to_bin(6);
    table.add_to_bin(8);


    for (auto &ix : table.get_ix_bin()) {
        std::cout << ix << "\n";
    }


}