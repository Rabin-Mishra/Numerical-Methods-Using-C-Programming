# Numerical-Methods-Using-C-Programming

This repository contains implementations of various numerical methods used to solve mathematical problems, such as finding roots of equations, approximating functions, and solving systems of linear equations. The methods implemented include **Curve Fitting**, **Falsi Position**, **Gauss-Jacobi**, **Lagrange Interpolation**, and **Newton-Raphson**. Each method is implemented in **C Programming** with clear examples and explanations.

## Methods and Formulas

### 1. **Curve Fitting**
   - **Objective**: Fit a curve to a set of data points to approximate a function.
   - **Method**: The method uses polynomial fitting, such as the **Least Squares Method** to minimize the sum of squared errors between the data points and the curve.
   - **Formula**: 
     - For a linear fit: 
       \[
       y = mx + c
       \]
     - For polynomial fitting, the least square formula is applied based on degree `n` of the polynomial.

### 2. **Falsi Position Method (Regula Falsi)**
   - **Objective**: Find the root of a nonlinear equation.
   - **Formula**:
     \[
     x_{n+1} = \frac{b - f(b) \cdot (a - b)}{f(a) - f(b)}
     \]
     where `a` and `b` are the initial guesses, and `f(x)` is the function whose root is to be found.

### 3. **Gauss-Jacobi Method**
   - **Objective**: Solve a system of linear equations.
   - **Formula**: For a system of equations \(Ax = b\), the Gauss-Jacobi method iterates over each equation:
     \[
     x_i^{(k+1)} = \frac{1}{a_{ii}} \left( b_i - \sum_{j \neq i} a_{ij} x_j^{(k)} \right)
     \]
     where `i` refers to the index of each variable.

### 4. **Lagrange Interpolation**
   - **Objective**: Estimate the value of a function at a given point using known data points.
   - **Formula**:
     \[
     L(x) = \sum_{i=0}^{n} y_i \prod_{j \neq i} \frac{x - x_j}{x_i - x_j}
     \]
     where `x_i` and `y_i` are the given data points, and `L(x)` is the interpolated value.

### 5. **Newton-Raphson Method**
   - **Objective**: Find the root of a real-valued function.
   - **Formula**:
     \[
     x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
     \]
     where `f(x)` is the function and `f'(x)` is its derivative.

## Approach Used in Coding

### Language:
The methods are implemented in **C programming language**.

### Header Files:
To make the program more modular and reusable, the following standard and custom header files are used:
- `stdio.h` — For input/output operations.
- `math.h` — For mathematical functions like `sqrt()`, `pow()`, `fabs()`, etc.
- `stdlib.h` — For dynamic memory allocation and other utility functions.
- `conio.h` — (Optional) For console input/output functions like `getch()`.
- **Custom Header Files**: Some functions are separated into custom header files (like `methods.h`) for better organization and modularity.

### Code Structure:
The code is divided into functions, each responsible for a specific numerical method. Here’s an example structure:
1. **Function for Curve Fitting** — Computes the best-fit line or polynomial.
2. **Function for Falsi Position** — Implements the root-finding algorithm.
3. **Function for Gauss-Jacobi** — Iteratively solves the system of equations.
4. **Function for Lagrange Interpolation** — Computes the interpolated values.
5. **Function for Newton-Raphson** — Finds the root of the function.

### Approach:
1. **Input**: The user is prompted to input the necessary values such as the range for root finding, the system of equations for Gauss-Jacobi, or data points for interpolation.
2. **Computation**: The program performs the required computations using loops and iterative methods to approximate the solution.
3. **Output**: The results (root, approximated value, or solved system) are printed on the screen for the user to see.

## Example Usage

1. **Falsi Position Method**:
   ```c
   float f(float x) {
       return x * x - 4;  // Example equation: x^2 - 4 = 0
   }

   int main() {
       float a = 0, b = 3;
       printf("Root: %f\n", falsi_position(f, a, b));
       return 0;
   }
   ```

2. **Newton-Raphson Method**:
   ```c
   float f(float x) {
       return x * x - 2;  // Example equation: x^2 - 2 = 0
   }

   float f_prime(float x) {
       return 2 * x;  // Derivative: 2x
   }

   int main() {
       printf("Root: %f\n", newton_raphson(f, f_prime, 1.5));
       return 0;
   }
   ```

## Conclusion

This repository provides implementations of key numerical methods that are essential for solving a wide variety of mathematical problems. Whether you're a student or a professional, these methods can be directly applied to your work or studies. Feel free to explore, contribute, or improve the existing implementations!

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

### Key Features of This README:

- **Clear Method Descriptions**: Describes each method with its objective and formula.
- **Programming Approach**: Highlights how the program is structured and the role of different header files.
- **Example Code**: Provides simple usage examples to help users understand how to use the implemented methods.

