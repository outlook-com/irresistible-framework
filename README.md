# Irresistible Gaming Framework

This framework gives you the tools to easily collaborate on Irresistible Gaming SA-MP gameservers.

Avoid making any changes to these includes. If you need to, open a pull request and I will review your changes.

**IMPORTANT: You need the [YSI library](https://github.com/pawn-lang/YSI) or you will have errors!**

### Instructions

1. Place the whole `irresistible\` directory into your `pawno\include\` directory.
2. If you are intending to use MySQL in your work, edit `irresistible\settings.inc` appropriately
3. Place ```c #include <irresistible\main>``` under all the other includes you are using for your script.
4. That's it, just work on your code!


## What's inside

### `_blank.inc`

Nothing in here, just copy and paste this each time you make an include.

If you require multiple files for your project, make a directory inside of `irresistible` ... like `irresistible\features\duel_system\`

### `main.inc`

Avoid making changes to this file unless your project requires you to use an additional directory.

### `settings.inc`

If you are intending to use MySQL in your project, edit this file but only the parts with the curly braces.

### `colors.inc`

All colors used in our servers are in this include. It has never been a secret since you can get them through your chatlogs.txt

### `helpers.inc`

I will just make mention of the important functions here with an example:

1. `SendUsage( playerid, "/command [PARAMETER]" );`
2. `SendError( playerid, "You do not have authorization to use this feature." );`
3. `SendServerMessage( playerid, "You have sent Lorenc a cookie." );`
4. `SendClientMessageFormatted( playerid, -1, "The time in unix is %d", gettime( ) );`

Some other things... **Reuse the string variables appriopriately.**

1. Messages between 0 - 32 characters? Use `szSmallString`
2. Messages between 0 - 144 characters? Use `szNormalString`
3. Messages between 0 - 256 characters? Use `szBigString`
4. Messages between 0 - 1024 characters? Use `szLargeString`
5. Messages between 0 - 2048 characters? Use `szHugeString`
6. You can use `tmpVariable` if you just want to store an integer temporarily. Not neccessary.

Just don't instantiate too many string variables if you can just reuse those! :D