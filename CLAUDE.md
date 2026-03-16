# CLAUDE.md — QMK Firmware (ZSA fork)

## Project Overview

This is a ZSA fork of QMK firmware (`morrisnk/qmk_firmware`), supporting ZSA keyboards: Moonlander, ErgoDox EZ, and Planck EZ. The main branch is `firmware21`.

## Repository Structure

- `keyboards/moonlander/` — Moonlander keyboard definition and default keymaps
- `keyboards/ergodox_ez/` — ErgoDox EZ keyboard definition
- `keyboards/planck/` — Planck EZ keyboard definition
- `keyboards/*/keymaps/morrisnk/` — Custom user keymaps
- `users/morrisnk/` — Shared userspace code (layers, macros, tap dance, RGB, secrets)
- `quantum/` — QMK core (keycode processing, features, protocols)
- `tmk_core/` — Low-level keyboard protocol handling
- `platforms/` — MCU-specific platform code (AVR, ChibiOS, ARM ATSAM)
- `drivers/` — Hardware drivers (LEDs, sensors, OLED, etc.)
- `lib/` — Submodules and libraries (ChibiOS, LUFA, python tooling)

## Userspace Architecture (`users/morrisnk/`)

- `morrisnk.h` — Main header; defines layers enum (`_QWERTY`, `_QWERTY_MAC`, `_COLEMAK`, `_COLEMAK_MAC`, `_SYMBOLS`, `_MEDIA`, `_CODING`, `_MACROS`)
- `wrappers.h` — Key aliases and layout wrapper macros
- `process_records.c/h` — Custom keycode handling
- `tapdance.c/h` — Tap dance definitions
- `rgb.c/h` — RGB lighting configuration
- `secrets.c/h` — Secret macros (conditionally compiled, not committed)
- `rules.mk` — Build config; enables tap dance, includes source files

## Building

```bash
# Build Moonlander with morrisnk keymap
make moonlander:morrisnk

# Build with secrets disabled
make moonlander:morrisnk NO_SECRETS=yes
```

## Git Conventions

- Main branch: `firmware21`
- Commit style: mixed — some use conventional commits (`fix:`, `feat:`, `chore:`), some are plain descriptions
- PRs are numbered in commit messages (e.g., `(#358)`)

## Key Patterns

- Layout wrappers: `LAYOUT_moonlander_wrapper(...)` wraps `LAYOUT_moonlander(...)` to allow reusable key row definitions
- Userspace layers are shared across keyboards; keyboard-specific keymaps import from `users/morrisnk/`
- `secrets.c` is conditionally included and should never be committed
