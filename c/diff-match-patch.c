#include "diff-match-patch.h"

bool
dm_result_is_ok(dm_result result)
{
  return result == dm_result_ok;
}

bool
dm_result_is_error(dm_result result)
{
  return !dm_result_is_ok(result);
}

const char*
dm_result_get_message(dm_result result)
{
  switch (result) {
    case dm_result_ok:
      return "OK";
    case dm_result_value_is_null:
      return "Value is null";
  }
  return "Unknown error";
}

dm_diff_result
dm_diff(const char* a, const char* b)
{
  if (a == NULL || b == NULL) {
    return (dm_diff_result){
      .result = dm_result_value_is_null,
    };
  }
  return (dm_diff_result){
    .result = dm_result_ok,
  };
}

void
dm_free(dm_diff_result result)
{
  if (result.diffs != NULL) {
    dm_free_dm_diff_list(result.diffs);
  }
}

void
dm_free_dm_diff_list(dm_diff_list* diffs)
{
  // for (size_t i = 0; i < diffs->length; i++) {
  //   dm_free_dm_diff_operation(&diffs->items[i]);
  // }
  free(diffs->items);
}

// void
// dm_free_dm_diff_operation(dm_diff_operation* operation)
// {
//   free(operation);
// }
