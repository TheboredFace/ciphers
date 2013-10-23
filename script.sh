#!/bin/sh

arg=$1
case $arg in
	-v) echo "vigenere cipher"; ~/dump/cpp/viper;;
	-c) echo "caesar cipher"; ~/dump/cpp/caesar;;
	 *) echo "crypt.sh: invalid option -- '$1'"; echo "Use option '-v' for Vigenere Cipher"; echo "Use option '-c' for Caesar Cipher";;
esac




