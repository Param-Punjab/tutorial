# What is a Git Stashing?
**Git stashing** allows you to temporarily save changes in your working directory that you aren’t ready to commit. It stores your uncommitted modifications (tracked files, staged files, and optionally untracked files) so you can switch branches or work on something else without losing your progress.

### Common Git Stash Commands:

1. **Stash changes**:
   ```bash
   git stash
   ```
   Saves your uncommitted changes and returns your working directory to a clean state.

2. **View stash list**:
   ```bash
   git stash list
   ```
   Shows a list of all stashes.

3. **Apply the latest stash**:
   ```bash
   git stash apply
   ```
   Applies the most recent stash without removing it from the stash list.

4. **Apply and drop stash**:
   ```bash
   git stash pop
   ```
   Applies the latest stash and removes it from the stash list.

5. **Stash untracked files**:
   ```bash
   git stash -u
   ```
   Stashes both tracked and untracked files.

Git stashing is helpful when you need to quickly switch contexts without losing your current work.
