# Moony's Magnificent Base

Moony's Magnificent Base, or MMB, is the shared core mod for Moony's Magnificent Additions, Computers, Modules, and future companion mods.

MMB contains common systems and helpers that should not belong to one feature mod only.

## Features

- Shared utility helpers for strings, class-name lists, arrays, hash maps, and lightweight tracking markers.
- Shared reusable dynamic dialog framework used by Zeus/module tooling in companion mods.
- Scrollable dynamic dialog controls for multiline text, combo boxes, toggles, checkboxes, sliders, and compact checkbox selection lists.
- Dynamic dialog import/export helpers for copying dialog values.
- Shared CBA settings for debug logging.
- Shared ACE carry and drag weight settings.

Other mods in the suite depend on MMB through `mmb_main` and call shared functions with the `MMB_fnc_*` prefix.

## Requirements

- Arma 3
- CBA
- ACE

## Building

This repository is structured as a HEMTT-based Arma 3 mod project.

Common commands:

```bat
hemtt check
hemtt build
hemtt release
```

Generated build output, releases, private keys, and packed PBO files are ignored by Git.

## License

See [LICENSE](LICENSE).
