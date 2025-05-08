# Pixel Pet

## Overview
Pixel Pet is a simple virtual pet game written in C. Interact with your pet by feeding, playing, and letting it rest. This project demonstrates basic C programming concepts such as structures, functions, and user input.

## Features
- Name your pet
- Feed, play, and rest actions
- View your pet's hunger, happiness, and energy levels

## Folder Structure
```
ARandomProject-1/
├── include/
│   └── pet.h
├── src/
│   ├── main.c
│   └── pet.c
├── README.md
├── Makefile
```

## Setup Instructions

1. **Install a C compiler**  
   Make sure you have GCC or another C compiler installed.

2. **Clone the repository**  
   ```
   git clone https://github.com/<your-username>/<repo-name>.git
   cd ARandomProject-1
   ```

3. **Build the project**  
   Using GCC directly:
   ```
   gcc -Iinclude src/main.c src/pet.c -o pixel-pet.exe
   ```
   Or, if you have `make`:
   ```
   make
   ```

4. **Run the program**
   ```
   ./pixel-pet.exe
   ```

## Usage

Follow the on-screen prompts to interact with your pet. You can feed, play, rest, or check your pet's status.

## Contributing

Pull requests are welcome! For major changes, please open an issue first to discuss what you would like to change.

## License

This project is open source and available under the [MIT License](LICENSE).