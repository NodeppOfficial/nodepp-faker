#include <nodepp/nodepp.h>
#include <faker/faker.h>

using namespace nodepp;

void onMain() {

    console::log( faker::generate( "${var1|var2|var3}" ) );
    console::log( faker::generate( "${username}${_|-}${###}" ) );
    console::log( faker::generate( "${day} - ${month} - ${year}" ) );
    console::log( faker::generate( "male: ${male_name} ${lastname} - ${job}" ) );
    console::log( faker::generate( "female: ${female_name} ${lastname} - ${job}" ) );

}