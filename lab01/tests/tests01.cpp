#include <gtest/gtest.h>
#include "vowels.h"

using lab01::CountVowels;

TEST(Vowels, Empty) { EXPECT_EQ(CountVowels(""), 0u); }
TEST(Vowels, SpacesOnly) { EXPECT_EQ(CountVowels("   "), 0u); }
TEST(Vowels, ConsonantsOnly) { EXPECT_EQ(CountVowels("bcdfg"), 0u); }
TEST(Vowels, AllVowels) { EXPECT_EQ(CountVowels("aeiouy"), 6u); }
TEST(Vowels, Phrase) { EXPECT_EQ(CountVowels("hello world"), 3u); }
TEST(Vowels, YIsVowel) { EXPECT_EQ(CountVowels("myth"), 1u); }
