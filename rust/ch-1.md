# 🦀 Rust Journey: Getting Started

## 1️⃣ Installing Rust

### 🐧 Linux/🍎 macOS
Use the terminal:
```bash
curl https://sh.rustup.rs -sSf | sh
source $HOME/.cargo/env
```
Add to `PATH` manually if needed:
```bash
export PATH="$HOME/.cargo/bin:$PATH"
```
Ensure a 🛠️ C compiler/linker is installed.

### 🪟 Windows
1️⃣ Go to [Rust Installation Page](https://www.rust-lang.org/install.html).
2️⃣ Install Build Tools for Visual Studio (2017+).

### ✅ Check Installation
```bash
rustc --version
```

### 🔄 Update Rust
```bash
rustup update
```

### ❌ Uninstall Rust
```bash
rustup self uninstall
```

---

## ✍️ Writing "Hello, World!"

### 📁 Create a Directory for Your Project
```bash
mkdir ~/projects
cd ~/projects
mkdir hello_world
cd hello_world
```

### ✏️ Create and Edit `main.rs`
Create a file named `main.rs` and add:
```rust
fn main() {
    println!("Hello, world!");
}
```

### ▶️ Compile and Run
#### 🐧/🍎 Linux/macOS
```bash
rustc main.rs
./main
```
#### 🪟 Windows
```cmd
rustc main.rs
.\main.exe
```

---

## 🧩 Anatomy of "Hello, World!"

### 🛠️ Function Declaration
```rust
fn main() {
}
```
- `fn` declares a 🛠️ function.
- `main` is the 🏁 entry point of a Rust program.
- `{}` encloses the function body.

### 🖨️ Print Line
```rust
println!("Hello, world!");
```
- `println!` is a 🔧 macro.
- Ends with a semicolon `;`.

---

## 🔄 Compiling and Running

Rust compiles programs 🕒 ahead of time:
```bash
rustc main.rs
./main
```
- Produces a 📦 binary executable (e.g., `main` or `main.exe`).

Unlike 📜 dynamic languages, Rust binaries can 🏃 without Rust installed.

---

## 📚 Documentation

### 📂 Open Local Docs
```bash
rustup doc
```

### 🗂️ Use the Standard Library API Docs
- Access offline 📖 documentation for reference.

---

## 🛠️ Troubleshooting

### ❓ Common Issues
- Check if Rust is added to `PATH`.

### 🌐 Resources
- [Rust Users Forum](https://users.rust-lang.org/)
- [Stack Overflow](http://stackoverflow.com/questions/tagged/rust)
- `#rust` IRC channel.

---

With "Hello, World!" successfully running, you're now a 🦀 Rustacean! 🎉

