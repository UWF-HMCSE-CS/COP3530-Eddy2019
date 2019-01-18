// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <vector>
#include "catch/catch.hpp"
#include "../foo.hpp"
#include "../bar.hpp"
#include "../baz.hpp"

TEST_CASE("Test Classes. PASS.")
{
	REQUIRE (Foo::GetMagicNumber() == 12);

	Bar b = Bar("Hello");
	REQUIRE (b.GetString() == "Hello");

	Baz *baz = new Baz(90.0 / 9);
	REQUIRE (baz->GetValue() > 9.999 && baz->GetValue() < 10.0001);
}

// Compile & run:
// make clean test
