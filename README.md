# Educational-Wiper
<br>
<br>

**Summary:**
Educational Proof of Concept (PoC) in C simulating wiper malware behavior. Demonstrates file system interaction, standard I/O file handling, basic data sanitization (byte overwriting), and unlinking via stdio.h for security research purposes
<br>
<br>

# For
* **Security Professionals & Researchers:** Blue/Red Team operators looking to understand basic wiper mechanics and file system interactions
* **Students & Enthusiasts:** Anyone interested in learning low-level file handling and security concepts in C
<br>
<br>

# Disclaimer
> **WARNING** This project is created strictly for educational and security research purposes to demonstrate OS-level file handling and basic data sanitization techniques. The author is not responsible for any misuse, damage, or illegal activities conducted with this software

# Install
* **First:** Install this repository with git clone
 ```bash
git clone https://github.com/Mentolado/Educational-Wiper.git
```
* **Second:** Enter the project
```bash
cd Educational-Wiper
```
* **Third:** Create secrets.txt and write user:password, simulating employees credentials
* **Fourth:** Compile with gcc
> Notice that we do not specify an executable extension (.exe); GCC automatically handles it depending on your operating system
```bash
gcc wiper.c -o wiper
```


