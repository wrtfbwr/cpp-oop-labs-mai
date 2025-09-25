#include "vowel_counter.h"
#include <gtest/gtest.h>

TEST(VowelCounterTest, EmptyString) {
    EXPECT_EQ(lab01::CountVowels(""), 0);
}

TEST(VowelCounterTest, NoVowels) {
    EXPECT_EQ(lab01::CountVowels("bcdfgh"), 0);
    EXPECT_EQ(lab01::CountVowels("lsdhfr"), 0);
    EXPECT_EQ(lab01::CountVowels("xyzpmc"), 0);
}

TEST(VowelCounterTest, AllVowels) {
    EXPECT_EQ(lab01::CountVowels("aeiou"), 5);
}

TEST(VowelCounterTest, WithSpaces) {
    EXPECT_EQ(lab01::CountVowels("hello world"), 3);
    EXPECT_EQ(lab01::CountVowels("a e i o u"), 5);
    EXPECT_EQ(lab01::CountVowels("for i in range"), 5);
}

TEST(VowelCounterTest, Mixed) {
    EXPECT_EQ(lab01::CountVowels("serfgjwegjr"), 2);
    EXPECT_EQ(lab01::CountVowels("rentewropfy"), 3);
}