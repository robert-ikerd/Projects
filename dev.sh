#!/bin/zsh

autoload -Uz compinit && compinit

_get_root() {
    git rev-parse --show-toplevel 2>/dev/null || echo "."
}

arcade() {
    local ROOT=$(_get_root)
    local CMD=$1
    local GAME=$2

    case "$CMD" in
        build)
            cmake --build "$ROOT/build" --target "$GAME"
            ;;
        play)
            cmake --build "$ROOT/build" --target "$GAME" && \
            cmake --install "$ROOT/build" --component "$GAME" --prefix "$ROOT/bin" && \
            "$ROOT/bin/$GAME" 
            ;;
        *)
            echo "Usage: arcade {build|play} {game_name}"
            ;;
    esac
}

# Optional: Add autocompletion for game names
_arcade_autocomplete() {
    local ROOT=$(_get_root)
    if [[ -d "$ROOT/games" ]]; then
        compadd $(ls "$ROOT/games")
    fi
}
compdef _arcade_autocomplete arcade

echo "🕹️ Arcade Tools Loaded: Use 'arcade build' or 'arcade play'"