#include "diff-match-patch.h"
#include "helpers.h"

int
main()
{
  assert_dm_diff_result_is(
    dm_result_value_is_null, dm_diff("a", NULL), "a NULL should be NULL");
  assert_dm_diff_result_is(
    dm_result_value_is_null, dm_diff(NULL, "b"), "NULL b should be NULL");
  assert_dm_diff_result_is(
    dm_result_value_is_null, dm_diff(NULL, NULL), "NULL NULL should be NULL");
}
