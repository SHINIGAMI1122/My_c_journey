This repository is a personal collection of small, single-file C exercises and examples. The guidance below is tuned to the project's structure and common workflows so an AI coding agent can be immediately productive.

- Project layout
  - Root contains many standalone C files named like `eg1.c`, `eg36.c`, `A1P1.c` and date-stamped folders (e.g. `18.03.2026/eg36.c`). Treat each `.c` as an independent exercise unless the file explicitly includes a shared header.
  - No central build system (no Makefile / CMake). Compilation is per-file with clang and binaries/dSYM artifacts are often produced alongside sources.

- Build & run (macOS)
  - Preferred compile command (matches the VS Code task):
    /usr/bin/clang -fcolor-diagnostics -fansi-escape-codes -g <source.c> -o <sourceBasename>
    Example: compile `18.03.2026/eg36.c` with
    `/usr/bin/clang -g 18.03.2026/eg36.c -o 18.03.2026/eg36`
  - Run the produced binary from its folder: `./eg36`
  - Debugging: use `lldb ./<binary>` on macOS. You may see `.dSYM` sidecar folders (e.g. `eg22.dSYM`) created by the toolchain.
  - VS Code: there is a workspace build task named "C/C++: clang build active file" which compiles the active editor file with the clang command above.

- Code patterns & conventions (discoverable in repo)
  - Files are small, single-purpose programs: a single `main` with local variables and stdio (`printf`/`scanf`), no complex dependency graph.
  - Naming: example files use `egNN.c` or `A1P*.c`. Keep new examples in the same flat structure or in a date-stamped folder when mirroring the existing layout.
  - Style: simple procedural C, short variable names, and minimal helper functions. Preserve this minimal style when editing; prefer local fixes to global refactors.

- What an AI agent should do first
  - Work on a single file at a time. Run the clang compile command above, then execute the binary to reproduce the issue or verify behavior.
  - If changing more than one file, confirm a cross-file dependency via `#include` first. There are no discoverable shared build rules.

- Safety and commits
  - Do not commit binaries or `.dSYM` folders. If you add a build artifact or helper binary locally, exclude it from commits.
  - Keep changes minimal and well-scoped: small fixes, one conceptual change per commit.

- Example prompts for this repo
  - "Fix the logic bug in `18.03.2026/eg36.c` so it initializes and reads array elements safely, then show the compile and run steps used to verify." 
  - "Refactor `A1P2.c` to extract a helper function `read_ints()` without changing program output; provide compilation verification and a short rationale."

- Notes for maintainers
  - There are no automated tests or CI. Prefer manual compile/run verification and include the exact clang command used in PR descriptions.
  - This instruction file is intentionally short and actionable — if you add a project-level build system or shared headers, update this document to reflect the new workflow.

If anything here is unclear or you want more detail (e.g., a recommended .gitignore for binaries/.dSYM, or an example Makefile), tell me which part to expand.
