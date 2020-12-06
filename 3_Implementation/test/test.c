#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <string1.h>
#define PROJECT_NAME    "string"

void test_select(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


/* Add your test functions*/

  CU_add_test(suite, "select", test_select);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}



/* Write all the test functions */
void test_select(void) {
  CU_ASSERT(1 == select(1));
  CU_ASSERT(3 == select(3));
  CU_ASSERT(0 == select(6));
  CU_ASSERT(0 == select(9));
}
