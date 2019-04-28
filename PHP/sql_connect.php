<?php
/**
 * Created by PhpStorm.
 * User: liwen
 * Date: 2018/9/14 0014
 * Time: 13:05
 */
$servername = "XXX.XXX.XXX.XXX";
$username = "XXXXX";
$password = "XXXXXXXX";
$dbname = "XXXXXXXXX";

$conn = new mysqli($servername, $username, $password, $dbname);

 if (mysqli_connect_errno()) {
     echo 'Connect failed' . mysqli_connect_error();
 }

mysqli_query($conn,"set character_set_server 'utf8'");
mysqli_query($conn,"SET NAMES 'utf8'");
?>