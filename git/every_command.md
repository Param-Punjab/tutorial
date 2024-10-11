# GitHub Command Reference by ChatGPT AI

## Index

1. [Introduction](#1-introduction)
2. [Setting Up Your Environment](#2-setting-up-your-environment)
   - [Install Git](#install-git)
   - [Configure Git](#configure-git)
3. [Starting a Repository](#3-starting-a-repository)
   - [Initialize a Repository](#initialize-a-repository)
   - [Cloning a Repository](#cloning-a-repository)
4. [Basic Git Commands](#4-basic-git-commands)
   - [Checking Status](#checking-status)
   - [Adding Files](#adding-files)
   - [Committing Changes](#committing-changes)
   - [Viewing Commit History](#viewing-commit-history)
5. [Working with Branches](#5-working-with-branches)
   - [Creating a Branch](#creating-a-branch)
   - [Switching Branches](#switching-branches)
   - [Merging Branches](#merging-branches)
6. [Remote Repositories](#6-remote-repositories)
   - [Adding a Remote Repository](#adding-a-remote-repository)
   - [Pushing Changes](#pushing-changes)
   - [Pulling Changes](#pulling-changes)
   - [Fetching Changes](#fetching-changes)
7. [Tagging](#7-tagging)
8. [Undoing Changes](#8-undoing-changes)
   - [Unstaging Files](#unstaging-files)
   - [Reverting Commits](#reverting-commits)
   - [Resetting Changes](#resetting-changes)
9. [Git Configuration](#9-git-configuration)
10. [Git Stashing](#10-git-stashing)
11. [Git Cherry-Picking](#11-git-cherry-picking)
12. [Advanced Git Commands](#12-advanced-git-commands)
13. [Conclusion](#13-conclusion)

---

## 1. Introduction

Git is a distributed version control system that allows multiple developers to work on a project simultaneously. GitHub is a platform that hosts Git repositories and provides collaborative features.

## 2. Setting Up Your Environment

### Install Git
To use Git, you need to install it on your system. You can download it from [the official Git website](https://git-scm.com/downloads).

### Configure Git
After installation, configure Git with your user information:

```bash
git config --global user.name "Your Name"
git config --global user.email "youremail@example.com"
```

You can check your configuration with:

```bash
git config --list
```

## 3. Starting a Repository

### Initialize a Repository
To create a new Git repository in a directory:

```bash
git init
```

### Cloning a Repository
To clone an existing repository from GitHub:

```bash
git clone <repository-url>
```

## 4. Basic Git Commands

### Checking Status
To see the status of your working directory and staging area:

```bash
git status
```

### Adding Files
To add files to the staging area:

```bash
git add <file-name>
```

To add all changes:

```bash
git add .
```

### Committing Changes
To commit changes in the staging area:

```bash
git commit -m "Commit message"
```

### Viewing Commit History
To view the commit history:

```bash
git log
```

For a more compact view:

```bash
git log --oneline
```

## 5. Working with Branches

### Creating a Branch
To create a new branch:

```bash
git branch <branch-name>
```

### Switching Branches
To switch to a different branch:

```bash
git checkout <branch-name>
```

You can also create and switch to a branch in one command:

```bash
git checkout -b <branch-name>
```

### Merging Branches
To merge changes from another branch into the current branch:

```bash
git merge <branch-name>
```

## 6. Remote Repositories

### Adding a Remote Repository
To add a remote repository:

```bash
git remote add <remote-name> <repository-url>
```

### Pushing Changes
To push local changes to a remote repository:

```bash
git push <remote-name> <branch-name>
```

### Pulling Changes
To fetch and merge changes from a remote repository:

```bash
git pull <remote-name> <branch-name>
```

### Fetching Changes
To fetch changes from a remote repository without merging:

```bash
git fetch <remote-name>
```

## 7. Tagging [ [Detail](https://param-punjab.github.io/tutorial/git/sub/git_tag) ]

To create a tag:

```bash
git tag <tag-name>
```

To tag a specific commit:

```bash
git tag <tag-name> <commit-hash>
```

## 8. Undoing Changes

### Unstaging Files
To unstage a file:

```bash
git reset <file-name>
```

### Reverting Commits
To revert the last commit (keeping changes):

```bash
git revert HEAD
```

### Resetting Changes
To reset the staging area and working directory:

```bash
git reset --hard <commit-hash>
```

## 9. Git Configuration

Configuration settings can be managed globally or at the repository level. For local repository configuration:

```bash
git config user.email "yourname@example.com"
```

## 10. Git Stashing [ [Detail](https://param-punjab.github.io/tutorial/git/sub/git_stashing) ]

To stash your changes (temporary storage):

```bash
git stash
```

To apply the stashed changes:

```bash
git stash apply
```

To view a list of stashed changes:

```bash
git stash list
```

To remove a stashed change:

```bash
git stash drop stash@{<index>}
```

## 11. Git Cherry-Picking

To apply a commit from another branch onto your current branch:

```bash
git cherry-pick <commit-hash>
```

## 12. Advanced Git Commands

### Rebase
To reapply commits on top of another base:

```bash
git rebase <branch-name>
```

### Squash
Squash multiple commits into one:

```bash
git rebase -i HEAD~<number-of-commits>
```

### Bisect
To find a specific commit that introduced a bug (binary search):

```bash
git bisect start
git bisect bad <current-commit>
git bisect good <previous-good-commit>
```

## 13. Conclusion

This guide provides a comprehensive overview of the essential Git commands. Understanding and effectively using these commands will help you collaborate better on GitHub and manage your projects efficiently.

Feel free to explore each command in detail and adapt your workflow accordingly!
