import os
import sys


def main():
    try:
        with open("main.c", "r") as f:
            lines = f.readlines()
    except OSError:
        print("Error: main.c is missing")
        return 1

    markers = ("<<<<<<<", "=======", ">>>>>>>")
    for line in lines:
        if any(marker in line for marker in markers):
            print("Error: Unhandled conflicts detected")
            return 1

    if os.path.exists(os.path.join(".git", "MERGE_HEAD")):
        print("Error: Uncommited merge detected")
        return 1

    print("Check Complete, task completed successfully!")
    return 0


if __name__ == "__main__":
    sys.exit(main())
