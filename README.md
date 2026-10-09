# Nodepp Faker - A fast, zero-dependency fake data generator for C++.

[![MIT License](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Nodepp](https://img.shields.io/badge/Nodepp-%3E%3D1.4.7-blue)](https://github.com/NodeppOfficial/nodepp)

Generate usernames, emails, names, addresses, credit cards, and more — using a simple template syntax.
No `std::regex` overhead. No heap churn. Just `ptr_t` and clever tricks.

---

## 🚀 Quick Start

```cpp
#include <nodepp/nodepp.h>
#include <faker/faker.h>

using namespace nodepp;

void onMain() {

    console::log( faker::generate( "${var1|var2|var3}" ) );
    console::log( faker::generate( "${username}${_|-}${@@@}" ) );
    console::log( faker::generate( "${day} - ${month} - ${year}" ) );
    console::log( faker::generate( "male: ${male_name} ${lastname} - ${job}" ) );
    console::log( faker::generate( "female: ${female_name} ${lastname} - ${job}" ) );
    console::log( faker::generate( "email: ${username}${@@}@${gmail|hotmail|outlook}.${domain}" ) );

}
```