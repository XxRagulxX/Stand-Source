<?php
require "common.php";

echo "--- Basic To Regular ---\n\n";

for($i = 0; $i < $argv[2]; $i++)
{
	$key = generateKey(31);
	$db->query("INSERT INTO `upgrades` (`key`, `privilege_from`, `privilege_to`, `note`) VALUES (?, 1, 2, ?)", "ss", $key, $argv[1]);
	echo "Stand-Upgrade-$key\n";
}

echo "\n";
