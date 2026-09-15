## Assignment: GRADING MULTIPLE CHOICE QUESTIONS.

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
