# Moony's Magnificent Additions

Moony's Magnificent Additions, or MMA, is an Arma 3 companion mod that collects small gameplay additions, quality-of-life tweaks, unit-specific helpers, and compatibility patches used by my modset.

Where MMM focuses on Eden and Zeus modules, MMA focuses on things that should simply be available during play: ACE interaction actions, custom Eden attributes, extra equipment, insignia, post-process presets, fortify presets, and optional compatibility patches for other mods.

## Features

- ACE interaction helpers:
  - Pull Western Sahara turbans up or down.
  - Hide dead bodies through ACE interactions.
  - Break the neck of unconscious targets while crouched.
  - Become Zeus or step down again when eligible.
- Eden attributes under `Moonys Magnificent Attributes`:
  - Mark a unit as eligible for the Zeus self-action.
  - Mark an object as an ACE fortify box.
- ACEX Fortify preset:
  - `STAF` fortification set with barriers, bag fences, bunkers, lights, gates, and H-barriers.
- Custom post-process templates:
  - Bright Snow
  - Film Noir
  - Surfer Clear
  - Surfer Blue
  - Green Hell
  - MMA 'Real is Brown' - No Film Grain
- Equipment additions:
  - Larger-capacity messenger bag variants.
  - Custom purple `Messenger Bag (Moony)`.
- Custom unit insignia:
  - Steve variants, Donald Duck, Hannie, Kill me now variants, and Schmirler.
- Optional compatibility additions:
  - Max Women civilian variants.
  - Aegis, RDS, and CSLA variants for Max Women units.
- Optional removal and cleanup patches:
  - Max Women cleanup.
  - MGSR cleanup.
  - WBK Melee cleanup.

## Requirements

Core MMA expects:

- Arma 3
- CBA
- ACE

Some features also rely on:

- ACEX Fortify
- Western Sahara content for turban actions

Optional addons use `skipWhenMissingDependencies`, so their patches only load when the relevant mods are present:

- Max Women
- Aegis
- RDS
- CSLA
- MGSR
- WBK Melee

## Usage

Most MMA features are available automatically when the mod is loaded:

- ACE self-interactions appear when their conditions are met.
- Eden attributes are available from an object's attribute window.
- Fortify presets and post-process templates appear in their usual Arma/ACE contexts.
- Added equipment and units are available through Arsenal, Eden, or Zeus depending on class scope and loaded dependencies.

## Building

This repository is structured as a HEMTT-based Arma 3 mod project.

Common commands:

```sh
hemtt check
hemtt build
hemtt release
```

Generated build output, releases, private keys, and packed PBO files are ignored by Git.

## Notes

MMA is intentionally personal and modset-specific. It is less a universal addon pack and more a tidy place for the small things that make a unit's missions feel smoother, funnier, or easier to run. Some optional patches are only meaningful if you use the same dependency stack.

## License

See [LICENSE](LICENSE).
