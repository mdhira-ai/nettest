#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main(int, char **)
{

    std::string vl;
    std::cout << "Hello, please check update!\n";

    cpr::Response r = cpr::Get(cpr::Url{"https://httpbin.org/get"});

    json jsondata = json::parse(r.text);
    vl = jsondata.at("origin");

    std::cout << vl << std::endl;

    return 0;
}
