#include "catch.hpp"
#include "RESTServer/BaseClass.h"
#include "string.h"

using namespace std;

TEST_CASE( "RESTServer BaseClass Method tests", "[RESTServerBaseClass]" ) {

  BaseClass cl;

  SECTION("Method one returns 1") {
    REQUIRE( (cl.one()) == 1);
  }
}
