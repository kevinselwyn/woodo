# woodo

Allows sudoers to summon Pokémon #185 from the command line

## Installation

```bash
cargo build --release
cargo install --path .
```

## Usage

This will not summon Sudowoodo:

```bash
woodo
```

This will:

```bash
sudo woodo
```

## Acknowledgements

All credit to Game Freak for their Pokémon.

Inspired by [this](http://www.reddit.com/r/linux/comments/1yy1c4/sudo_woodo/) comment on [/r/linux](http://www.reddit.com/r/linux).
