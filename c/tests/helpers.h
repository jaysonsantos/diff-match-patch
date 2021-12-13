#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "diff-match-patch.h"

#ifndef DIFF_MATCH_PATCH_HELPERS_H
#define DIFF_MATCH_PATCH_HELPERS_H
void
assert_true(bool condition, const char* message);
void
assert_string_equal(const char* expected,
                    const char* actual,
                    const char* message);
void
assert_dm_diff_result_is(dm_result expected,
                         dm_diff_result diff,
                         const char* message);
void
assert_dm_operations(dm_diff_result result,
                     size_t total_operations,
                     dm_diff_operation* operations);
#endif // DIFF_MATCH_PATCH_HELPERS_H
