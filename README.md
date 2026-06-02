# Moony's Magnificent Base

Moony's Magnificent Base, or MMB, is the shared core mod for Moony's Magnificent Additions, Computers, Modules, and future companion mods.

MMB contains common systems and helpers that should not belong to one feature mod only:

- shared string and classname-list helpers
- the infection and toxic-area system
- infection items, ACE medical treatments, sounds, and module category
- shared ACE carry and drag weight settings

Other mods in the suite depend on MMB through `mmb_main` and call shared functions with the `MMB_fnc_*` prefix.

Common commands:

```bat
hemtt check
hemtt build
hemtt release
```