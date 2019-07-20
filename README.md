# gcmorse
A text to Morse code converter, and vice versa. A simple Morse code application.


[![The GPL License](https://img.shields.io/badge/license-GPL-yellow.svg?style=flat-square)](https://opensource.org/licenses/GPL-3.0)

## Usage
`gcmorse [OPTIONS]`

Supported command line options:
 - `-a` / `--append` - Append to file instead of overwriting
 - `-d` / `--decrypt` - Convert from Morse code to regular text
 - `-h` / `--help` - Display help message
 - `-i` / `--input` - Specify input file in next argument
 - `-o` / `--output` - Specify input file in next argument
 - `-p` / `--prosginsdisabled` - Disable automatic prosign insertion (like `.-.-` instead of new line)
 - `-u` / `--uppercase` - Output uppercase text, when decrypting
 - `-v` / `--version` - Display software version number
 
For example, `gcmorse -i example.txt -o example.morse` will encode `example.txt` and store Morse code in `example.morse`.
To reverse process use `gcmorse -d -i example.morse -o decrypted.txt`.

When input file is not specified, `gcmorse` will read `stdin` until `EOF` or `EOT` character occurs.
Same applies to output files - when not specified, `gcmorse` will write to `stdout`.


<img src="https://a.fsdn.com/con/app/proj/gcmorse/screenshots/gcmorse_macos.png/max/max/1"/>
<img src="https://a.fsdn.com/con/app/proj/gcmorse/screenshots/gcmorse_debian.png/max/max/1"/>


## Building from source
 - Clone git repository - `git clone https://github.com/Spectrum256/gcmorse.git && cd gcmorse`
 - Invoke makefile - `make all`
 - To install use `sudo make install`, and to uninstall - `sudo make uninstall`.
 
## Developing gcmorse with Docker
 - Clone git repository - `git clone https://github.com/Spectrum256/gcmorse.git && cd gcmorse`
 - Build docker image - `docker build -t gcmorse .`
 - Run `gcmorse` binary using docker container based on the gcmorse image - `docker run -it gcmorse gcmorse`
