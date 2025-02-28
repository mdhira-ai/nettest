#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main(int, char **)
{

    std::string version;
    std::string changelog;
    std::string downloadurl;

    std::cout << "Hello, please check update!\n";

    cpr::Response r = cpr::Get(cpr::Url{"https://raw.githubusercontent.com/mdhira-ai/nettest/refs/heads/master/update.json"});

    json jsondata = json::parse(r.text);
    version = jsondata.at("version");
    changelog = jsondata.at("changelog");
    downloadurl = jsondata.at("downloadurl");

    auto currentversion = "1.0.0";

    if (currentversion == version)
    {
        std::cout << "no update";
    }
    else
    {
        std::cout << "there is new update available " << version << std::endl;
    }

    return 0;
}
