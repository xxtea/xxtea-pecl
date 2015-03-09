--TEST--
Test that the xxtea_encrypt and xxtea_decrypt functions works.
--SKIPIF--
<?php if (!extension_loaded("xxtea")) print "skip"; ?>
--FILE--
<?php
$str = "Hello World! 你好，中国！";
$key = "1234567890";
$base64 = "QncB1C0rHQoZ1eRiPM4dsZtRi9pNrp7sqvX76cFXvrrIHXL6";
$encrypt_data = xxtea_encrypt($str, $key);
$decrypt_data = xxtea_decrypt($encrypt_data, $key);
if ($str == $decrypt_data && base64_encode($encrypt_data) == $base64) {
    echo "success!";
} else {
    echo "fail!";
}
?>
--EXPECT--
success!
