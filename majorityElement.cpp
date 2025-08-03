#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int majorityElement(vector<int>& nums) {
    // Step 1: Initialize variables
    int count = 0;         // Count to track majority element frequency
    int candidate = 0;     // Variable to store the current candidate for majority

    // Step 2: Iterate through the array to find a potential candidate
    for (int num : nums) {
        if (count == 0) {
            // If count is zero, choose the current number as the candidate
            candidate = num;
        }

        // If current number matches candidate, increment count
        // Otherwise, decrement count
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 3: Return the candidate
    // In this version, we assume that a majority element is always guaranteed
    return candidate;
}

// Main function to test the majorityElement function
int main() {
    // Example input vector
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    // Call the function and print the result
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
