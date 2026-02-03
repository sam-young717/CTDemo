Parasoft C/C++test Code Coverage Project
Instructions for ISO26262 standards compliance
Ensure MISRA & CERT Compliance:

Retrieve the list of C/C++test violations reported for the current context.
If no existing violations are found, execute a new static analysis to detect potential MISRA or CERT rule breaches.
For each violation, review the rule documentation to understand the issue and examine example fixes.
Apply the recommended fix or suppress the violation if it cannot be resolved in the current context.
Re-run the static analysis to ensure that all violations have been addressed.
Improve Unit Tests and Coverage:

Always start with rebuilding and executing tests to gather initial coverage data. To build and execute tests use "Configure" and then "Build and Run" build task. Do not use other build tasks or call CMake directly.
Use available tools to identify uncovered lines, focusing on line and MC/DC coverage. The coverage data is located in .coverage workspace subdirectory.
Generate tests to cover uncovered lines, ensuring that logical conditions and branches are exercised.
If given line cannot be covered due to unreachable code, apply coverage suppressions with justification. When suppressing unreachable code line, apply suppression for all metrics, using "ALL" for the <COVERAGE_TYPE> suppression parameter, e.g.: // parasoft-cov-suppress ALL "Unreachable code - all conditions above return values"
After applying suppresions, run "Update Coverage" task to refresh coverage data.
When you are done, generate HTML report with code annotations for LC and MCDC metrics and put the report into "compliance-evidence/coverage/index.html". Hint: use "cpptestcov report html" command with the following syntax: " usage: cpptestcov report html [-h] [-out REPORT_FILE] [-coverage LC,SC,...] [-scm] [-code] [-root ROOT_PATH] [--single-page] [--coverage-low L] [--coverage-high H] coverage_dir "