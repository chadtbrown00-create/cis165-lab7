# CIS-165 Lab 7: BMI and Color Mixer

## Program 1: BMI

### Plan
- Inputs: Weight in pounds and height in inches.
- Variables: weight, height, and bmi.
- Validation: Reject weight or height values less than or equal to zero.
- Calculation: Use the BMI formula: weight * 703.0 / (height * height).
- Output: Display BMI to two decimal places and its classification.

## Program 2: Color Mixer

### Plan
- Inputs: Two primary-color names.
- Variables: Two character arrays.
- Validation: Check that both colors are red, blue, or yellow.
- Comparisons: Use strcmp to compare color names.
- Output: Display the resulting color or an error message.

## BMI Test Records

| Test | Inputs | Expected Result | Actual Result | Match |
|---|---|---|---|---|
| 1 | 100, 70 | 14.35 Underweight | 14.35 Underweight | Yes |
| 2 | 150, 70 | 21.52 Optimal weight | 21.52 Optimal weight | Yes |
| 3 | 200, 70 | 28.69 Overweight | 28.69 Overweight | Yes |
| 4 | 150, 0 | Error | Error | Yes |
| 5 | -150, 70 | Error | Error | Yes |
| 6 | 0, 70 | Error | Error | Yes |

## Color Mixer Test Records

| Test | Inputs | Expected Result | Actual Result | Match |
|---|---|---|---|---|
| 1 | red, blue | purple | purple | Yes |
| 2 | red, yellow | orange | orange | Yes |
| 3 | blue, yellow | green | green | Yes |
| 4 | blue, red | purple | purple | Yes |
| 5 | red, red | red | red | Yes |
| 6 | orange, blue | Error | Error | Yes |
| 7 | red, orange | Error | Error | Yes |
| 8 | blue, blue | blue | blue | Yes |
| 9 | yellow, yellow | yellow | yellow | Yes |
| 10 | yellow, red | orange | orange | Yes |

## Program Explanations

**1. How does the BMI formula use pounds and inches? Why is height * height needed?**

The formula multiplies weight in pounds by 703.0 and divides by height multiplied by itself. Height must be squared for the BMI calculation.

**2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order matter?**

The first condition checks if BMI is below 18.5. The second checks if BMI is less than or equal to 25.0. This includes both endpoints in the optimal category.

**3. Why do you check weight and height before calculating BMI?**

To prevent invalid calculations using zero or negative measurements.

**4. Why do you classify the unrounded BMI and round only its displayed value?**

It keeps the classification accurate because rounding could change which category a BMI belongs to.

**5. What does strcmp return for equal text? Why is == not correct for character-array contents?**

strcmp returns 0 when two strings match. The == operator compares addresses rather than the text stored in character arrays.

**6. How do you make each mixture work in either input order and handle two identical primary colors?**

The conditions check both possible orders of each color combination. If both colors match, the program displays that color.

**7. How do you check for an invalid color in either input position?**

The program checks both arrays against all three valid primary colors before mixing.

**8. How do named constants and result variables make your programs easier to read and check?**

Named constants make fixed values easier to identify, while result variables make calculations easier to understand and verify.

## Compile and Run Instructions

Both programs were tested using OnlineGDB with C++17.

They can also be compiled separately using:

BMI:
```bash
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi
```

Color Mixer:
```bash
g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer
```

## Testing Summary

Both programs were tested with the required inputs and additional test cases. The expected results matched the actual results in all recorded tests.
