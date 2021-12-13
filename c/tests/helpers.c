#include "helpers.h"

void
assert_true(bool condition, const char* message)
{
  if (!condition) {
    printf("Assertion failed: %s\n", message);
    exit(1);
  }
}

void
assert_string_equal(const char* expected,
                    const char* actual,
                    const char* message)
{
  if (strcmp(expected, actual) != 0) {
    printf("Assertion failed: %s\n", message);
    printf("Expected: %s\n", expected);
    printf("Actual: %s\n", actual);
    exit(1);
  }
}

void
assert_dm_diff_result_is(dm_result expected,
                         dm_diff_result diff,
                         const char* message)
{
  if (diff.result != expected) {
    printf("Assertion failed: %s\n", message);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", diff.result);
    exit(1);
  }
}

void
assert_dm_operations(dm_diff_result result,
                     size_t total_operations,
                     const dm_diff_operation* operations)
{
  assert_dm_diff_result_is(dm_result_ok, result, "Result is not ok");
}
