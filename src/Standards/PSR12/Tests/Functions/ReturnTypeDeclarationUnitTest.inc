<?php

public function functionName(int $arg1, $arg2): string
{
    return 'foo';
}

public function anotherFunction(
    int $baz
): string {
    return 'foo';
}

$longArgs_noVars = function (
    $longArgument,
): string {
   // body
};

$shortArgs_longVars = function ($arg) use (
    $longVar1,
): string {
   // body
};

public function functionName(int $arg1, $arg2)
:
string
{
    return 'foo';
}

public function anotherFunction(
    int $baz
)  :  string {
    return 'foo';
}

$longArgs_noVars = function (
    $longArgument,
) :string {
   // body
};

$shortArgs_longVars = function ($arg) use (
    $longVar1,
)
:string {
   // body
};

public function functionName(int $arg1, $arg2) /* can't fix */ : string {}

public function functionName(int $arg1, $arg2) /* can't fix */
: // phpcs:ignore Standard.Category.Sniff
string {}