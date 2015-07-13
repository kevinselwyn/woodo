#woodo

Allows sudoers to summon Pokémon #185 from the command line

##Installation

```bash
make && sudo make install
```

If you would like to trick foolish users into opening up a shell listener with `nc` at port 25723, use the EVIL macro:

```bash
gcc -o woodo woodo.c -DEVIL
```

##Usage

This will not summon Sudowoodo:

```bash
woodo
```

This will:

```bash
sudo woodo
```

##Acknowledgements

All credit to Game Freak for their Pokémon.

Inspired by [this](http://www.reddit.com/r/linux/comments/1yy1c4/sudo_woodo/) comment on [/r/linux](http://www.reddit.com/r/linux).