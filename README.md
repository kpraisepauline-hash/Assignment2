# Assignment2
# The assignments are credit card and grading multiple choice questions.

---

## Assignment 1: Credit Card Validator

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

---

## Assignment 2: Student Exam Grader

### OOP Concepts Used
* **Encapsulation (Data Structuring):** Groups raw student submissions into a unified, fixed structural block (`2D array`) matching the corresponding dimensions of the Answer Key array.
* **Procedural Modularity:** Keeps the data entry structure separate from the comparison loop logic, showcasing clear linear data separation.

### Algorithm
1. **Data Initialization:** Stores a hardcoded `8x10` character grid containing responses for 8 students across 10 multiple-choice questions, alongside a 10-element Answer Key array.
2. **Iterative Matrix Processing:** Uses nested loops to process each student row-by-row and evaluate answers column-by-column against the key array elements.
3. **Score Tallies & Reporting:** Tracks correct matches per row and instantly logs the individual student numbers with their total scores to the display stream.

### Possible Error Points
* **Array Index Out of Bounds:** Hardcoding fixed bounds (`8` and `10`) inside the nested `for` loop parameters will crash or read corrupt garbage memory if row or column dimensions change.
* **Case-Sensitivity Issues:** The matching logic relies strictly on exact character matches, meaning standard lowercase entries (`'a'`) would be evaluated as incorrect against an uppercase key (`'A'`).


