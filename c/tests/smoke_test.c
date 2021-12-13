#include "diff-match-patch.h"
#include "helpers.h"

int
main()
{
  assert_true(dm_result_is_ok(dm_result_ok), "result is not ok");
  assert_string_equal(
    "OK", dm_result_get_message(dm_result_ok), "result message is not OK");
  assert_true(dm_result_is_error(dm_result_value_is_null), "result is not ok");
  assert_string_equal("Value is null",
                      dm_result_get_message(dm_result_value_is_null),
                      "wrong message");
}
