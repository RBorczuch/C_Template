#include "unity.h"
#include "hello.h"

void test_say_hello() {
    TEST_ASSERT_EQUAL(0, 0); // Przykład testu
}

int main()          {
    UNITY_BEGIN();
    RUN_TEST(test_say_hello);
    return UNITY_END();
}
