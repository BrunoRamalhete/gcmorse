# gcmorse 1 "10th March 2019" "v1.1-1"

##NAME
gcmorse - text to Morse code converter (and vice versa)

##SYNOPSIS
gcmorse [**-a**] [**-d**] [**-h**] [**-i** *filename*] [**-o** *filename*] [**-p**] [**-u**] [**-v**]

##DESCRIPTION
Converts Morse code to text, or vice versa. Currently, only ASCII characters are supported.
If input file is not specified, gcmorse will read stdin, until EOF, or EOT character occurs.
Similarly, if output file is not specified, gcmorse will write output to stdout.
If **-a** option is not set, gcmorse is going to **overwrite output file content**!

###Morse code format
Morse code is written as lines, dots and spaces.
There is one space between each two letter in a word, and words are separated by two spaces.
Normally, all characters are outputted lowercase (unless -p option is used).
Also, gcmorse does not guarantee that line spacing will be exactly the same after encoding and decoding.

##OPTIONS
**-a**, **--append** - append data to file instead of overwriting it

**-d**, **--decode** - decode from Morse code to text file (assumes input file is in Morse code format)

**-h**, **--help** - display a help message

**-i**, **--input** *filename* - specifies input file name. Given file should not contain any non-ASCII characters, otherwise they won't be encrypted and gcmorse will throw errors.

**-o**, **--output** *filename* - specifies output file name

**-p**, **--noprosigns** - do not change special characters (new line, etc.) to Morse prosigns (other Morse code applications may not handle them way gcmorse does)

**-u**, **--uppercase** - output uppercase letters when decoding

**-v**, **--version** - display a version information


##EXAMPLES
*Recommended way of writing to files:*
	gcmorse -i testfile2.txt -o output2.morse
	gcmorse -d -i output2.morse -o output2.txt

*The second way:*
	gcmorse -i testfile.txt > output.morse
	gcmorse -d -i output.morse > output.txt

##BUGS
There are no known bugs yet, if you find some, please report them here:
https://github.com/Jacajack/cmorse/issues

##AUTHOR
Bruno Ramalhete <bram.512@gmail.com>

Inspired by cmorse application by Jacek Wieczorek

##COPYRIGHT
Copyright (c) 2019 Bruno Ramalhete

The GNU General Public License v3.0
