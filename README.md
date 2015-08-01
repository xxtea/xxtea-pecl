# XXTEA extension for PHP

<a href="https://github.com/xxtea/">
    <img src="https://avatars1.githubusercontent.com/u/6683159?v=3&s=86" alt="XXTEA logo" title="XXTEA" align="right" />
</a>

[![Join the chat at https://gitter.im/xxtea/xxtea-pecl](https://img.shields.io/badge/GITTER-join%20chat-green.svg)](https://gitter.im/xxtea/xxtea-pecl?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
[![Build Status](https://travis-ci.org/xxtea/xxtea-pecl.svg?branch=master)](https://travis-ci.org/xxtea/xxtea-pecl)
[![GitHub release](https://img.shields.io/github/release/xxtea/xxtea-pecl.svg)](https://github.com/xxtea/xxtea-pecl/releases)
[![License](https://img.shields.io/github/license/xxtea/xxtea-pecl.svg)](http://opensource.org/licenses/MIT)

## Introduction

XXTEA is a fast and secure encryption algorithm. This is a XXTEA extension for PHP.

It is different from the original XXTEA encryption algorithm. It encrypts and decrypts string instead of uint32 array, and the key is also string.

## Installation

There are many ways to build the package. Below you can find details for most
useful ways of package building:

-----------------------------------------------------------------------------
### Way 1: Building the package with PHP

1.  Create ext/xxtea folder in the php-source-folder. Copy all files
    from the package into created folder.

2.  Run

        ./buildconf

    to rebuild PHP's configure script.

3.  Compile php with option:

    `--enable-xxtea` to build bundled into PHP module

    `--enable-xxtea=shared` to build dinamycally loadable module

-----------------------------------------------------------------------------
### Way 2: Building the package with phpize utility

1.  Unpack contents of the package.

2.  Run

        phpize

    script, which will prepare environment for building XXTEA package.

3.  Run

        ./configure --enable-xxtea=shared

    to generate makefile.

4.  Run

        make

    to build XXTEA extension library. It will be placed into
    ./modules folder.

5.  Run

        make install

    to install XXTEA extension library into PHP

-----------------------------------------------------------------------------
### Way 3: Install via pecl

1. Run:

        pecl install xxtea

    That's all.

-----------------------------------------------------------------------------
## Usage

```php
<?php
    $str = "Hello World! 你好，中国！";
    $key = "1234567890";
    $encrypt_data = xxtea_encrypt($str, $key);
    $decrypt_data = xxtea_decrypt($encrypt_data, $key);
    if ($str == $decrypt_data) {
        echo "success!";
    } else {
        echo "fail!";
    }
```
