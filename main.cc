#include "rapidjson/document.h"
#include <iostream>

int main() {
  rapidjson::Document doc;

  doc.Parse(R"({"user":{"name":"peixoto"}})");

  std::cout << doc["user"]["name"].GetString() << std::endl;

  return 0;
}
