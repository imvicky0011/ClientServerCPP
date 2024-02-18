#include <bits/stdc++.h>
#include "httplib.h"
using namespace std;

int main() {
    cout << "Hello" << endl;
    httplib::Client cli("localhost", 1234);

    auto res = cli.Get("/hi");
    if(res && res->status == 200) {
        cout << res->body << endl;
    } else {
        cout << res->body << endl;
    }

    return 0;
}