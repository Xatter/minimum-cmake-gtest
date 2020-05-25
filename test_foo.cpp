#include "gtest/gtest.h"
#include "foo.h"

TEST(FooTest, SomethingIsTrue)
{
    Foo foo;
    EXPECT_EQ(true, foo.SomeFunction());
}