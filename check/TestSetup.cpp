#include "HighsLp.h"
#include "HighsStatus.h"
#include "catch.hpp"

const bool dev_run = true;

// No commas in test case name.
TEST_CASE("correct-print-status", "[highs_data]") {
  std::string str = HighsStatusToString(HighsStatus::kOk);
  REQUIRE(str == "OK");
}
