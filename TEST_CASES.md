# Test Cases

Run each test manually and compare the actual result with the expected result.

| ID | Test | Input / action | Expected result |
|---|---|---|---|
| TC-01 | Add valid record | Roll 103, name Nitin Raj, course BCA, semester 3, marks 82.50 | Record is added and displayed. |
| TC-02 | Display records | Add two records, then choose option 2 | All records in the current run are displayed. |
| TC-03 | Search existing roll | Search for a roll number already added | Matching student details are displayed. |
| TC-04 | Search unknown roll | Search for a roll number not in the vector | “Student record not found.” is displayed. |
| TC-05 | Display empty list | Choose option 2 before adding any record | “No student records available.” is displayed. |
| TC-06 | Invalid roll number | Enter 0 or a negative roll number | Record is rejected. |
| TC-07 | Invalid semester | Enter 0 or a negative semester | Record is rejected. |
| TC-08 | Invalid marks | Enter marks below 0 or above 100 | Record is rejected. |
| TC-09 | Invalid menu input | Enter a non-numeric menu choice | Error message appears and menu is shown again. |
| TC-10 | Invalid menu option | Enter a number outside 1–4 | Invalid-choice message appears. |
| TC-11 | Exit | Choose option 4 | Closing message appears and program ends. |

## Testing notes

The report's original test summary describes the expected outcomes for valid entries, display, search, empty list, invalid marks, and invalid menu options. The repository source also handles non-numeric menu input and basic non-numeric input checks for record fields. Duplicate roll numbers and empty names are not comprehensively validated.
