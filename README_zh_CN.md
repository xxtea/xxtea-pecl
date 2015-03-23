# XXTEA 加密算法的 PHP 扩展实现

[![Build Status](https://travis-ci.org/xxtea/xxtea-pecl.svg?branch=master)](https://travis-ci.org/xxtea/xxtea-pecl)

## 简介

XXTEA 是一个快速安全的加密算法。本项目是 XXTEA 加密算法的 PHP 扩展实现。

它不同于原始的 XXTEA 加密算法。它是针对字符串进行加密的，而不是针对 uint32 数组。同样，密钥也是字符串。

## 安装

有许多方式来构建此包，下面是两种最常用的方式：

-----------------------------------------------------------------------------
### 方式 1：跟 PHP 一起构建包

1.  在 PHP 源码文件夹下创建 ext/xxtea 文件夹。将包中的所有文件复制到创建的文件夹下。

2.  运行

        ./buildconf

    来重新构建 PHP 的配置脚本。

3.  使用此选项来编译 PHP：

    `--enable-xxtea` 以捆绑方式来构建 PHP 模块。

    `--enable-xxtea=shared` 构建动态加载模块。

-----------------------------------------------------------------------------
### 方式 2：使用 phpize 工具来构建包

1.  解压此包。

2.  运行脚本

        phpize

    它将为构建 XXTEA 扩展准备环境。

3.  运行

        ./configure --enable-xxtea=shared

    以生成 makefile

4.  运行

        make

    以构建 XXTEA 扩展库. 它将被置于 ./modules 目录下。

5.  运行

        make install

    以安装 XXTEA 扩展库到 PHP 环境下。

-----------------------------------------------------------------------------
### 方式 3：通过 pecl 安装

1. 运行：

        pecl install xxtea

    这就好了。
-----------------------------------------------------------------------------

## 使用

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
