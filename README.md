# Get next line <img align="left" src="https://github.com/susikohmelo/getnextline/blob/main/readme_files/score.png" height="120"/>
A function to read one (or multiple) files at once with a buffer of any given size - no 1 character at a time shenanigans!

BUFFER_SIZE characters are read at once and stored into a buffer until at least one line of text has been read. Any excess characters past the newline are stored into a static buffer that can't leak, for the next time get_next_line() is called.

<br/>

## How to use
Include the `get_next_line.c`, `get_next_line_utils.c` and `get_next_line.h` in your project and use them like regular functions.<br/>
The `*_bonus*` files are the same, but they support reading multiple files at once.

The preprocessor flag - `BUFFER_SIZE` - can be set to any value you wish. It will adjust the amount of characters read per read() call.<br/>
The function will return a pointer to the string that it read.
