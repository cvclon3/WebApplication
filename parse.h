//
// Created by mercury on 4/21/23.
//
#pragma once
#ifndef WEBAPPLICATION1_PARSE_H
#define WEBAPPLICATION1_PARSE_H

#include <iostream>
#include <string>
using namespace std;

class parse {
    string message;
public:
    parse(char* message) {
        this->message = message;
    }

    string getBody() {
        string delimetr = "/r/n/r/n";
        int rnrn = this->message.find(delimetr) + delimetr.length();
        cout << this->message.length() << endl;
        return this->message.erase(0, rnrn);

    }

};

struct request {
    string request = "!";
    string target = "!!";
    string version = "!!!";
};

request parse_start_line(string request);


#endif //WEBAPPLICATION1_PARSE_H
