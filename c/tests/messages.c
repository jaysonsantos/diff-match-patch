#include "diff-match-patch.h"
#include "helpers.h"

int
main()
{
  assert_string_equal("OK", dm_result_get_message(dm_result_ok), "");
  assert_string_equal(
    "Value is null", dm_result_get_message(dm_result_value_is_null), "");
  assert_string_equal("Unknown error", dm_result_get_message(-1), "");
}
