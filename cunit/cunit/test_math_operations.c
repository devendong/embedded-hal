// test_math_operations.c
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "math_operations.h"

// 测试用例
void test_add() {
    CU_ASSERT(add(2, 3) == 5);
    CU_ASSERT(add(-1, 1) == 0);
    CU_ASSERT(add(-1, -1) == -2);
}

// 主函数
int main() {
    // 初始化CUnit
    CU_initialize_registry();

    // 创建测试套件
    CU_pSuite suite = CU_add_suite("Math Operations Suite", NULL, NULL);
    
    // 添加测试用例
    CU_add_test(suite, "test of add()", test_add);

    // 运行测试
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();

    // 清理
    CU_cleanup_registry();
    return 0;
}
