#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <set>
#include <filesystem>
#include <ranges>

namespace fs = std::filesystem;
#include "DB/File.h"

namespace DB
{

using FileType = std::multiset<File>;
using ExtensionType = std::set<std::string>;
enum class FilterType
{
    Insert,
    Remove,
    Reset,
    Clear
};

}; // namespace DB
