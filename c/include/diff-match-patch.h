//
// Created by jayson on 12/10/21.
//

#ifndef DIFF_MATCH_PATCH_DIFF_MATCH_PATCH_H
#define DIFF_MATCH_PATCH_DIFF_MATCH_PATCH_H
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

enum dm_result
{
  dm_result_ok = 1 << 0,
  dm_result_value_is_null = 1 << 2,
};
typedef enum dm_result dm_result;

enum dm_diff_type
{
  dm_diff_type_delete = -1,
  dm_diff_type_insert = 1,
  dm_diff_type_equal = 0,
};
typedef enum dm_diff_type dm_diff_type;

bool
dm_result_is_ok(dm_result result);
bool
dm_result_is_error(dm_result result);
const char*
dm_result_get_message(dm_result result);

struct dm_diff_operation
{
  dm_diff_type type;
  size_t text_length;
  const char* text;
};
typedef struct dm_diff_operation dm_diff_operation;

struct dm_diff_list
{
  size_t length;
  dm_diff_operation* items;
};
typedef struct dm_diff_list dm_diff_list;

struct dm_diff_result
{
  dm_result result;
  dm_diff_list* diffs;
};
typedef struct dm_diff_result dm_diff_result;

dm_diff_result
dm_diff(const char* a, const char* b);

void
dm_free(dm_diff_result result);
void
dm_free_dm_diff_list(dm_diff_list* diffs);
void
dm_free_dm_diff_operation(dm_diff_operation* diffs);

#endif // DIFF_MATCH_PATCH_DIFF_MATCH_PATCH_H
