<?php
require "common.php";

echo "--- Ultimate ---\n\n";

for($i = 0; $i < $argv[2]; $i++)
{
	$key = generateKey(30);
	$db->query("INSERT INTO `license_keys` (`key`, `privilege`, `note`) VALUES (?, 3, ?)", "ss", $key, $argv[1]);
	echo "Stand-$key\n";
}

echo "\n";
