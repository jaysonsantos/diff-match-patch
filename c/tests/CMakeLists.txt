add_executable(smoke_test smoke_test.c helpers.c helpers.h ../diff-match-patch.c)
add_test(smoke_test smoke_test)

add_executable(messages messages.c helpers.c helpers.h ../diff-match-patch.c)
add_test(messages messages)

add_executable(test_diffs test_diffs.c helpers.c helpers.h ../diff-match-patch.c)
add_test(test_diffs test_diffs)

add_executable(null_operations null_operations.c helpers.c helpers.h ../diff-match-patch.c)
add_test(null_operations null_operations)
