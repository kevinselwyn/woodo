use nix::unistd::*;

static ROOT_FALSE: &str = "It's a weird tree.";
static ROOT_TRUE: &str = "    _              __
   / `\\  (~._    ./  )
   \\__/ __`-_\\__/ ./
  _ \\ \\/  \\   \\ |_   __
(   )  \\__/ -^    \\ /  \\
 \\_/ \"  \\  | o  o  |.. /  __
      \\. --' ====  /  || /  \\
        \\   .  .  |---__.\\__/
        /  :     /   |   |
        /   :   /     \\_/
     --/ ::    (
    (  |     (  (____
  .--  .. ----**.____)
  \\___/";

pub struct Woodo {
    msg: String,
}

impl Woodo {
    pub fn new() -> Woodo {
        let sudo = getuid();

        if !sudo.is_root() {
            return Woodo {
                msg: ROOT_FALSE.to_string(),
            };
        }

        Woodo {
            msg: ROOT_TRUE.to_string(),
        }
    }

    pub fn get_message(&self) -> String {
        self.msg.to_string()
    }
}
