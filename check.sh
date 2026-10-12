#!/bin/bash

if [ ! -f main.c ]; then
  echo "Error: main.c is missing"
  exit 1
fi

if grep -qE '<<<<<<<|=======|>>>>>>>' main.c; then
  echo "Error: Unhandled conflicts detected"
  exit 1
fi

if [ -f .git/MERGE_HEAD ]; then
  echo "Error: Uncommited merge detected"
  exit 1
fi

echo "Check Complete, task completed successfully!"
exit 0
