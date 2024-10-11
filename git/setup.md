### Configuring Git for Visual Studio Code (VS Code)

This guide walks you through configuring Git for use in VS Code, starting from downloading Git to pushing code changes to GitHub.

#### 1. **Download and Install Git**
- Download Git from the official [Git website](https://git-scm.com/).
- During installation, when prompted to select the default branch name, change it from `master` to `main`. This is a newer convention adopted by GitHub and other platforms.

#### 2. **Create a New Directory for Your Project**
- Open **Git Bash** (you can search for it in your Start Menu).
- Create a new directory for your project and navigate to it:
  
  ```bash
  mkdir SIH
  cd SIH
  ```

#### 3. **Generate an SSH Key**
- Generate a new SSH key using the `ed25519` algorithm. This key will be used to securely connect to GitHub:

  ```bash
  ssh-keygen -t ed25519 -C "your-email"
  ```

  Replace `"your-email"` with the email address associated with your GitHub account.

- Follow the on-screen prompts to save the key in the default location (`C:\Users\your-username\.ssh\id_ed25519`). You can leave the passphrase empty if you don't want to protect the key with an additional password.

#### 4. **Enable the SSH Agent**
- To allow your computer to use the SSH key without repeatedly asking for your passphrase, enable the **ssh-agent** service. Run **PowerShell** as an administrator and execute the following commands:

  ```bash
  Get-Service -Name ssh-agent | Set-Service -StartupType Manual
  Start-Service ssh-agent
  ```

- Add your SSH key to the ssh-agent. Make sure to replace `anmol` with your username or PC name:

  ```bash
  ssh-add C:\Users\anmol\.ssh\id_ed25519
  ```

#### 5. **Copy the SSH Key**
- Display your SSH public key:

  ```bash
  cat ~/.ssh/id_ed25519.pub
  ```

- Copy the key from the terminal output. You'll need to add it to your GitHub account.

#### 6. **Add SSH Key to GitHub**
- Log in to [GitHub](https://github.com/).
- Go to your profile photo and select **Settings**.
- In the settings menu, navigate to **Access** > **SSH and GPG keys**.
- Click **New SSH key**, fill out the form (Title: meaningful label, Key: paste your copied SSH key), and submit.

#### 7. **Configure Git in VS Code**
- Open **VS Code**.
- Open the terminal in VS Code (you can use `Ctrl + ` (backtick) or go to **Terminal** > **New Terminal** from the top menu).
- Configure your global Git settings with the following commands:

  ```bash
  git config --global user.email "your-email-linked-with-github"
  git config --global user.name "your-github-username"
  ```

  Replace `"your-email-linked-with-github"` with the email you use for GitHub and `"your-github-username"` with your GitHub username.

#### 8. **Initialize a Git Repository**
- In your project folder (`SIH`), initialize a Git repository:

  ```bash
  git init
  ```

#### 9. **Add a Remote GitHub Repository**
- Add the URL of your GitHub repository as the `origin` remote. Replace the URL with your repository URL:

  ```bash
  git remote add origin git@github.com:singhanmolpreet/match_maestro.git
  ```

  This sets the connection between your local repository and the GitHub repository.

#### 10. **Set the Default Branch to `main`**
- Rename the default branch to `main` (if not already set):

  ```bash
  git branch -M main
  ```

#### 11. **Fetch and Pull Repository Data**
- To ensure you have the latest updates from the remote repository, run:

  ```bash
  git fetch
  git pull origin main
  ```

  This fetches the data and pulls in any changes from the `main` branch.

#### 12. **Add, Commit, and Push Changes**
- To track and save your changes to the GitHub repository:

  1. **Add all files** to the staging area:

     ```bash
     git add .
     ```

  2. **Commit the changes** with a message describing the update:

     ```bash
     git commit -m "Your commit message"
     ```

  3. **Push the changes** to GitHub:

     ```bash
     git push -u origin main
     ```

This process will push your changes to the `main` branch of the remote repository on GitHub.
