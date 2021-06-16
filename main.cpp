#include <istream>

#include "adam.h"
#include "date.h"
#include "matrix.h"
#include "number.h"

#include "gtest/gtest.h"

namespace date_test {
TEST(date, unix_time_conversion)
{
    date actual = 1622280536;

    ASSERT_EQ(actual.get_year(), 2021);
    ASSERT_EQ(actual.get_month(), 5);
    ASSERT_EQ(actual.get_day(), 29);
    ASSERT_EQ(actual.get_hour(), 9);
    ASSERT_EQ(actual.get_minute(), 28);
    ASSERT_EQ(actual.get_second(), 56);

    ASSERT_EQ(actual.to_unix_time(), 1622280536);
}

TEST(date, file_time_conversion)
{
    date actual = date::from_file_time(132667541360000000);

    ASSERT_EQ(actual.get_year(), 2021);
    ASSERT_EQ(actual.get_month(), 5);
    ASSERT_EQ(actual.get_day(), 29);
    ASSERT_EQ(actual.get_hour(), 9);
    ASSERT_EQ(actual.get_minute(), 28);
    ASSERT_EQ(actual.get_second(), 56);

    ASSERT_EQ(actual.to_file_time(), 132667541360000000);
}

TEST(date, addition)
{
    date actual = 5650068;

    ASSERT_EQ(actual + 17542488, 23192556);
}

TEST(date, subtraction)
{
    date actual = 19166724;

    ASSERT_EQ(actual - 11597083, 7569641);
}

TEST(date, increment)
{
    date actual = 7380744;

    ASSERT_EQ(actual++, 7380744);
    ASSERT_EQ(++actual, 7380746);
}

TEST(date, decrement)
{
    date actual = 9807190;

    ASSERT_EQ(actual--, 9807190);
    ASSERT_EQ(--actual, 9807188);
}
}

namespace number_test {
TEST(number, string_conversion)
{
    std::istringstream stream("-4830879789038080759038");

    number actual;
    stream >> actual;

    ASSERT_EQ(actual.to_string(), "-4830879789038080759038");
}

TEST(number, int_conversion)
{
    number actual = 608227025;

    ASSERT_EQ(actual.to_int(), 608227025);
}

TEST(number, bitwise_not)
{
    number actual = -224415575;

    ASSERT_EQ(~actual, 224415574);
}

TEST(number, bitwise_and)
{
    number actual = -1888848548;

    ASSERT_EQ(actual & -966705981, -2040515520);
}

TEST(number, bitwise_or)
{
    number actual = 920211449;

    ASSERT_EQ(actual | -1001774907, -153391107);
}

TEST(number, bitwise_xor)
{
    number actual = -1414427748;

    ASSERT_EQ(actual ^ -9392399, 1421944173);
}

TEST(number, bitwise_left_shft)
{
    number actual = 589740463;

    ASSERT_EQ(actual << 14, -1368670208);
}

TEST(number, bitwise_right_shift)
{
    number actual = -1079746645;

    ASSERT_EQ(actual >> 23, -129);
}

TEST(number, unary_minus)
{
    number actual = 191857105;

    ASSERT_EQ(-actual, -191857105);
}

TEST(number, addition)
{
    number actual = 648822301;

    ASSERT_EQ(actual + -802766913, -153944612);
}

TEST(number, subtraction)
{
    number actual = 919082178;

    ASSERT_EQ(actual - -344950119, 1264032297);
}

TEST(number, multiplication)
{
    number actual = 2002407556;

    ASSERT_EQ(actual * -79669353, -1532864036);
}

TEST(number, division)
{
    number actual = -1756328454;

    ASSERT_EQ(actual / 74773, -23488);
}

TEST(number, modulo)
{
    number actual = 1653088120;

    ASSERT_EQ(actual % 135216, 72520);
}

TEST(number, increment)
{
    number actual = -1535018095;

    ASSERT_EQ(actual++, -1535018095);
    ASSERT_EQ(++actual, -1535018093);
}

TEST(number, decrement)
{
    number actual = 746676346;

    ASSERT_EQ(actual--, 746676346);
    ASSERT_EQ(--actual, 746676344);
}
}

namespace adam_test {
TEST(adam, adam_year_conversion)
{
    adam actual = 5473;

    ASSERT_EQ(actual.get_indict(), 14);
    ASSERT_EQ(actual.get_sun(), 14);
    ASSERT_EQ(actual.get_moon(), 2);

    ASSERT_EQ(actual.to_adam_year(), 5473);
}

TEST(adam, christ_year_conversion)
{
    adam actual = adam::from_christ_year(447);

    ASSERT_EQ(actual.get_indict(), 1);
    ASSERT_EQ(actual.get_sun(), 20);
    ASSERT_EQ(actual.get_moon(), 9);

    ASSERT_EQ(actual.to_christ_year(), 447);
}

TEST(adam, addition)
{
    adam actual = 1695;

    ASSERT_EQ(actual + 2722, 4417);
}

TEST(adam, subtraction)
{
    adam actual = 7282;

    ASSERT_EQ(actual - 4040, 3242);
}

TEST(adam, increment)
{
    adam actual = 5094;

    ASSERT_EQ(actual++, 5094);
    ASSERT_EQ(++actual, 5096);
}

TEST(adam, decrement)
{
    adam actual = 6565;

    ASSERT_EQ(actual--, 6565);
    ASSERT_EQ(--actual, 6563);
}
}

namespace matrix_test {
TEST(matrix, string_conversion)
{
    std::istringstream stream("2 3 1 2 3 4 5 6");

    matrix actual;
    stream >> actual;

    ASSERT_EQ(actual.to_string(), "2 3\n1.000000 2.000000 3.000000 \n4.000000 5.000000 6.000000 ");
}

TEST(matrix, identity)
{
    matrix actual = matrix::identity(3);

    matrix expected(3, 3);

    expected.set(0, 0, 1);
    expected.set(0, 1, 0);
    expected.set(0, 2, 0);

    expected.set(1, 0, 0);
    expected.set(1, 1, 1);
    expected.set(1, 2, 0);

    expected.set(2, 0, 0);
    expected.set(2, 1, 0);
    expected.set(2, 2, 1);

    ASSERT_EQ(actual, expected);
}

TEST(matrix, determinant)
{
    matrix actual(4, 4);

    actual.set(0, 0, -4);
    actual.set(0, 1, -2);
    actual.set(0, 2, -7);
    actual.set(0, 3, 8);

    actual.set(1, 0, 2);
    actual.set(1, 1, 7);
    actual.set(1, 2, 4);
    actual.set(1, 3, 9);

    actual.set(2, 0, 2);
    actual.set(2, 1, 0);
    actual.set(2, 2, 6);
    actual.set(2, 3, -3);

    actual.set(3, 0, 6);
    actual.set(3, 1, 4);
    actual.set(3, 2, -10);
    actual.set(3, 3, -4);

    ASSERT_EQ(actual.determinant(), -1926);
}

TEST(matrix, transpose)
{
    matrix actual(3, 4);

    actual.set(0, 0, 2);
    actual.set(0, 1, -3);
    actual.set(0, 2, -1);
    actual.set(0, 3, 2);

    actual.set(1, 0, 3);
    actual.set(1, 1, 5);
    actual.set(1, 2, 9);
    actual.set(1, 3, -4);

    actual.set(2, 0, 4);
    actual.set(2, 1, -3);
    actual.set(2, 2, 5);
    actual.set(2, 3, 7);

    matrix expected(4, 3);

    expected.set(0, 0, 2);
    expected.set(0, 1, 3);
    expected.set(0, 2, 4);

    expected.set(1, 0, -3);
    expected.set(1, 1, 5);
    expected.set(1, 2, -3);

    expected.set(2, 0, -1);
    expected.set(2, 1, 9);
    expected.set(2, 2, 5);

    expected.set(3, 0, 2);
    expected.set(3, 1, -4);
    expected.set(3, 2, 7);

    ASSERT_EQ(actual.transpose(), expected);
}

TEST(matrix, inverse)
{
    matrix actual(3, 3);

    actual.set(0, 0, 2);
    actual.set(0, 1, 5);
    actual.set(0, 2, 7);

    actual.set(1, 0, 6);
    actual.set(1, 1, 3);
    actual.set(1, 2, 4);

    actual.set(2, 0, 5);
    actual.set(2, 1, -2);
    actual.set(2, 2, -3);

    matrix expected(3, 3);

    expected.set(0, 0, 1);
    expected.set(0, 1, -1);
    expected.set(0, 2, 1);

    expected.set(1, 0, -38);
    expected.set(1, 1, 41);
    expected.set(1, 2, -34);

    expected.set(2, 0, 27);
    expected.set(2, 1, -29);
    expected.set(2, 2, 24);

    ASSERT_EQ(actual.inverse(), expected);
}

TEST(matrix, unary_minus)
{
    matrix actual(5, 5);

    actual.set(0, 0, -1);
    actual.set(0, 1, -4);
    actual.set(0, 2, 0);
    actual.set(0, 3, 0);
    actual.set(0, 4, -2);

    actual.set(1, 0, 0);
    actual.set(1, 1, 1);
    actual.set(1, 2, 1);
    actual.set(1, 3, 5);
    actual.set(1, 4, 4);

    actual.set(2, 0, 3);
    actual.set(2, 1, 1);
    actual.set(2, 2, 7);
    actual.set(2, 3, 1);
    actual.set(2, 4, 0);

    actual.set(3, 0, 0);
    actual.set(3, 1, 0);
    actual.set(3, 2, 2);
    actual.set(3, 3, 0);
    actual.set(3, 4, -3);

    actual.set(4, 0, -1);
    actual.set(4, 1, 0);
    actual.set(4, 2, 4);
    actual.set(4, 3, 2);
    actual.set(4, 4, 2);

    matrix expected(5, 5);

    expected.set(0, 0, 1);
    expected.set(0, 1, 4);
    expected.set(0, 2, 0);
    expected.set(0, 3, 0);
    expected.set(0, 4, 2);

    expected.set(1, 0, 0);
    expected.set(1, 1, -1);
    expected.set(1, 2, -1);
    expected.set(1, 3, -5);
    expected.set(1, 4, -4);

    expected.set(2, 0, -3);
    expected.set(2, 1, -1);
    expected.set(2, 2, -7);
    expected.set(2, 3, -1);
    expected.set(2, 4, 0);

    expected.set(3, 0, 0);
    expected.set(3, 1, 0);
    expected.set(3, 2, -2);
    expected.set(3, 3, -0);
    expected.set(3, 4, 3);

    expected.set(4, 0, 1);
    expected.set(4, 1, 0);
    expected.set(4, 2, -4);
    expected.set(4, 3, -2);
    expected.set(4, 4, -2);

    ASSERT_EQ(-actual, expected);
}

TEST(matrix, addition)
{
    matrix left(2, 4);

    left.set(0, 0, 1);
    left.set(0, 1, 3);
    left.set(0, 2, 0);
    left.set(0, 3, 2);

    left.set(1, 0, 4);
    left.set(1, 1, 1);
    left.set(1, 2, 3);
    left.set(1, 3, 1);

    matrix right(2, 4);

    right.set(0, 0, 4);
    right.set(0, 1, -3);
    right.set(0, 2, 2);
    right.set(0, 3, -2);

    right.set(1, 0, -3);
    right.set(1, 1, 0);
    right.set(1, 2, 4);
    right.set(1, 3, 0);

    matrix expected(2, 4);

    expected.set(0, 0, 5);
    expected.set(0, 1, 0);
    expected.set(0, 2, 2);
    expected.set(0, 3, 0);

    expected.set(1, 0, 1);
    expected.set(1, 1, 1);
    expected.set(1, 2, 7);
    expected.set(1, 3, 1);

    ASSERT_EQ(left + right, expected);
}

TEST(matrix, subtraction)
{
    matrix left(3, 3);

    left.set(0, 0, 5);
    left.set(0, 1, 1);
    left.set(0, 2, 6);

    left.set(1, 0, -1);
    left.set(1, 1, 7);
    left.set(1, 2, 9);

    left.set(2, 0, -8);
    left.set(2, 1, 2);
    left.set(2, 2, 3);

    matrix right(3, 3);

    right.set(0, 0, 8);
    right.set(0, 1, 1);
    right.set(0, 2, 4);

    right.set(1, 0, 5);
    right.set(1, 1, -5);
    right.set(1, 2, 7);

    right.set(2, 0, -3);
    right.set(2, 1, -2);
    right.set(2, 2, 7);

    matrix expected(3, 3);

    expected.set(0, 0, -3);
    expected.set(0, 1, 0);
    expected.set(0, 2, 2);

    expected.set(1, 0, -6);
    expected.set(1, 1, 12);
    expected.set(1, 2, 2);

    expected.set(2, 0, -5);
    expected.set(2, 1, 4);
    expected.set(2, 2, -4);

    ASSERT_EQ(left - right, expected);
}

TEST(matrix, matrix_multiplication)
{
    matrix left(3, 4);

    left.set(0, 0, 5);
    left.set(0, 1, 3);
    left.set(0, 2, 7);
    left.set(0, 3, 0);

    left.set(1, 0, 7);
    left.set(1, 1, 1);
    left.set(1, 2, 9);
    left.set(1, 3, 2);

    left.set(2, 0, 3);
    left.set(2, 1, 4);
    left.set(2, 2, 7);
    left.set(2, 3, 6);

    matrix right(4, 2);

    right.set(0, 0, 20.30);
    right.set(0, 1, 1.60);

    right.set(1, 0, 18.60);
    right.set(1, 1, 1.30);

    right.set(2, 0, 12.10);
    right.set(2, 1, 1.00);

    right.set(3, 0, 23.00);
    right.set(3, 1, 1.80);

    matrix expected(3, 2);

    expected.set(0, 0, 242.00);
    expected.set(0, 1, 18.90);

    expected.set(1, 0, 315.60);
    expected.set(1, 1, 25.10);

    expected.set(2, 0, 358.00);
    expected.set(2, 1, 27.80);

    ASSERT_EQ(left * right, expected);
}

TEST(matrix, number_multiplication)
{
    matrix actual(2, 3);

    actual.set(0, 0, 2);
    actual.set(0, 1, -3);
    actual.set(0, 2, 1);

    actual.set(1, 0, 5);
    actual.set(1, 1, 4);
    actual.set(1, 2, -2);

    matrix expected(2, 3);

    expected.set(0, 0, 68);
    expected.set(0, 1, -102);
    expected.set(0, 2, 34);

    expected.set(1, 0, 170);
    expected.set(1, 1, 136);
    expected.set(1, 2, -68);

    ASSERT_EQ(actual * 34, expected);
}
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
