//
// Created by mercury on 4/21/23.
//

#include "parse.h"
#include <iostream>

request parse_start_line(string request) {
    struct request req;

    int sub = request.find("\n");
    string start_line = request.substr(0, sub);

    req.request = start_line.substr(0, start_line.find(" "));
    start_line.erase(0, req.request.length() + 1);

    req.target = start_line.substr(0, start_line.find(" "));
    start_line.erase(0, req.target.length() + 1);

    req.version = start_line.substr(0 ,sub);

    return req;
}
