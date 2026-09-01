#!/usr/bin/env bash
set -e
judge="$1"
id="$2"
dir="problems/$judge/$id"
mkdir -p "$dir"
cp templates/template.cpp "$dir/sol.cpp"
touch "$dir/in1.txt" "$dir/out1.txt"
cat > "$dir/notes.md" << NOTES
# $judge $id

technique:
complexity:
approach:
NOTES
echo "created $dir"
