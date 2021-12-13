#include "helpers.h"
int
main()
{
  dm_diff_result result = dm_diff("a", "b");
  assert_dm_operations(result, 1, );
  dm_free(result);
}
