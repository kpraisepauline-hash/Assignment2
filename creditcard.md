## Assignment: Credit Card Validator

### OOP Concepts Used
* **Abstraction:** Hides complex digit-splitting calculations behind descriptive, top-level functions like `isValid()`.
* **Modularity:** Divides distinct tasks (prefix checking, summing positions, sizing) into separate, single-responsibility functions for cleaner code organization.

### Algorithm
1. **Validation Checks:** Determines total digits using `getSize()`. Rejects input if it is outside 13–16 digits or fails to match network prefixes (4, 5, 37, 6).
2. **Luhn Checksum Calculation:** 
   * Multiplies every second digit from the right by 2, adding single digits of the results via `getDigit()`.
   * Sums all odd-position digits without modification.
3. **Final Decision:** Evaluates the combined sum. The card is valid if `sum % 10 == 0`.

### Possible Error Points
* **Spaces or Hyphens:** Reading directly into a `long long` variable fails if the user types spaces, terminating the input stream early.
* **Extreme Digit Overflow:** Input exceeding the memory allocation limit of a `long long` data type will crash the buffer or return garbage numbers.
