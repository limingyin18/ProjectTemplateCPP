#define BOOST_TEST_MODULE test module name
#include <boost/test/included/unit_test.hpp>

#include "Computer.hpp"

using namespace ProjectTemplate;

bool Test()
{
    Computer<int> *ptr = new Add<int>();
    ptr->SetA(1);
    ptr->SetB(2);
    return 1 + 2 == ptr->Compute();
}

BOOST_AUTO_TEST_CASE(test_case)
{
    BOOST_CHECK(Test());
}
