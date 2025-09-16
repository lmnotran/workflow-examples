# workflow-examples

This repository contains simple C project examples with GitHub Actions workflows.

## Project Structure

- `src/` - Source code directory
  - `main.c` - Main application that prompts for two numbers and displays their sum
  - `addition.c` - Implementation of the addition function
  - `addition.h` - Header file for the addition function
- `tests/` - Test directory
  - `test_addition.c` - Unit tests for the `my_addition()` function
- `.github/workflows/` - GitHub Actions workflows
  - `build.yml` - Build workflow (runs on push)
  - `test.yml` - Test workflow (runs on pull requests)

## Building the Project

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Configure with CMake:
   ```bash
   cmake ..
   ```

3. Build the project:
   ```bash
   make
   ```

## Running the Application

After building, run the main executable:
```bash
./main
```

The program will prompt you to enter two numbers and display their sum.

## Running Tests

Run tests using ctest:
```bash
ctest --verbose
```

Or run the test executable directly:
```bash
./test_addition
```

## GitHub Actions Workflows

- **Build Workflow**: Automatically builds the project on every push to main/master
- **Test Workflow**: Runs unit tests on every pull request to main/master