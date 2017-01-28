#include <iostream>
#include <silicon/backends/mhd.hh>
#include <silicon/api.hh>
#include <silicon/clients/libcurl_client.hh>
#include "symbols.hh"

using namespace s;

using namespace sl;

auto hello_api = http_api
  (GET / _text = [] () { return file("./my_file.txt"); });

int main(int argc, char* argv[])
{
  auto ctx = sl::mhd_json_serve(hello_api, 12345);
}
