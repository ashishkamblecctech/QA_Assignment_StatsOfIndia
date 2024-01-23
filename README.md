# QA_Assignment_StatsOfIndia

## Overview

This readme provides information about the testing of the Point3D class. The Point3D class is designed to represent a point in three-dimensional space, and this testing framework aims to ensure the correctness of its functionality.

## What You Are Testing

The testing focuses on various aspects of the Point3D class, including:

1. **Default Constructor Test**: Verifies that the default constructor sets the x and y coordinates to 0.0.

2. **Parameterized Constructor Test**: Validates that the parameterized constructor correctly sets the initial coordinates.

3. **Setters and Getters Test**: Ensures that the setters and getters for x, y, and z coordinates function as expected.

## Test Location

### Test Files

The test cases are implemented using Google Test framework and are located in the following files:

1. **test.cpp**: Contains test cases for the Point3D class.

### Source Files

1. **Point3D.h**: Header file for the Point3D class declaration.
2. **Point3D.cpp**: Source file containing the implementation of the Point3D class.

### Main Test Execution

1. **main.cpp**: Initializes the Google Test framework and runs all the defined test cases.

## Steps to Integrate Testing Tool

Follow these steps to integrate the testing tool and run the test cases:

1. **Install Google Test**:
   - Make sure you have Google Test installed in your development environment.

2. **Configure Project**:
   - Include the necessary headers in your project. In this case, make sure to include the `gtest/gtest.h` header.

3. **Compile Test Files**:
   - Add the test files (`Point3DTest.cpp`, `main.cpp`) to your project's compilation list.

4. **Link with Google Test Libraries**:
   - Link your project with the Google Test libraries during the compilation process.

5. **Run Test Suite**:
   - Execute the `main` function, which initializes and runs all the defined test cases.

6. **Review Test Results**:
   - After running the test suite, review the test results to ensure that all tests pass successfully.

## Additional Notes

- Ensure that the Point3D class implementation (`Point3D.h` and `Point3D.cpp`) is included in your project.

- Make sure that the testing framework (Google Test) is compatible with your development environment.

- Regularly run the tests during development to catch and address any issues early in the development process.

- Update the test suite as needed when modifying or adding functionality to the Point3D class.

