# Hello Autotools

## Requirements

* [Automake](http://www.gnu.org/software/automake/)
* [Autoconf](https://www.gnu.org/software/autoconf/)

## Usage

### Configure

    % ./autogen.sh
    % ./configure

### Build

    % make

### Run (not install)

    % src/hello

### Install

`/usr/local` will be used as the default.

    % sudo make install

### Uninstall

    % sudo make uninstall

### Run (installed)

    % hello
