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
        Day7_RemoveNodesFromLinkedList.cpp
        Day7_DeleteNodeinaLinkedList.cpp
        Day8_ImplementQueueusingStacks.cpp
        Day8_ImplementStackusingQueues.cpp
        Day8_FirstBadVersion.cpp
        Day9_RansomNote.cpp
        Day9_ClimbingStairs.cpp
        Day9_LongestPalindrome.cpp
        Day9_MajorityElement.cpp
        Day10_MergeSortedArray.cpp
        Day10_RemoveElement.cpp
        Day10_RemoveDuplicatesfromSortedArray.cpp
        Day10_RemoveDuplicatesfromSortedArray_II.cpp
)
