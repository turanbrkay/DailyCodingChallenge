cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode
        Day1_RomantoInteger.cpp
        Day2_IntegertoRoman.cpp
        Day2_TwoSum.cpp
        Day2_ValidParentheses.cpp
        "Day3_MergeTwoSortedLists.cpp"
        Day3_BestTimetoBuyandSellStock.cpp
        Day3_BestTimetoBuyandSellStock_II.cpp
        Day3_ValidPalindrome.cpp
        "Day3_ValidPalindrome_II.cpp"
        Day3_InvertBinaryTree.cpp
        Day4_ValidAnagram.cpp
        Day4_BinarySearch.cpp
        Day5_LowestCommonAncestorofaBinarySearchTree.cpp
        Day5_LowestCommonAncestorofaBinarySearchTree_II.cpp
        Day5_BinaryTreePaths.cpp
        Day6_BalancedBinaryTree.cpp
        Day7_LinkedListCycle.cpp
        Day7_LinkedListCycle_II.cpp
        Day7_ReverseLinkedList.cpp
        Day7_OddEvenLinkedList.cpp
)
