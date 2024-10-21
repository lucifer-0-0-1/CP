import re

def is_valid_number(s: str) -> bool:
    # Define the regular expression pattern for a valid number
    number_pattern = re.compile(r"""
        ^                   # Start of the string
        [+-]?               # Optional sign
        (                   # Start of the main number group
            (\d+(\.\d*)?)   # Digits followed by an optional dot and optional digits
            |               # OR
            (\.\d+)         # A dot followed by digits
        )                   # End of the main number group
        ([eE][+-]?\d+)?     # Optional exponent part
        $                   # End of the string
    """, re.VERBOSE)

    # Use the pattern to match the input string
    return bool(number_pattern.match(s))


print(is_valid_number("3e5"))
