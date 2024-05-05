# Tiny Filesystem

A tiny open-source filesystem implementation in C, providing basic file I/O operations and extensibility.

## Features

- Create, open, and close files
- Read from and write to files
- Append data to existing files
- Extensible design for adding new features and functionality

## Getting Started

### Prerequisites

- C compiler (GCC or Clang)
- Git (for cloning the repository)

### Installation

1. Clone the repository:
git clone https://github.com/Prajna1999/tiny-filesystem.git

2. Navigate to the project directory:
cd tiny-filesystem

3. Compile the source code:
gcc tiny-filesystem.c -o tiny-filesystem

### Usage

1. Run the compiled program:
 ./tiny-filesystem  

2. Follow the on-screen instructions to perform file I/O operations.

## File I/O Operations

- `open_file(file_path, mode)`: Open a file in the specified mode ("r" for read, "w" for write, "a" for append).
- `close_file(file)`: Close an open file.
- `read_line(file)`: Read a line from a file.
- `write_line(file, line)`: Write a line to a file.

## Extending the Filesystem

The project is designed to be extensible, allowing you to add new features and functionality. Here are some ideas for extension:

- Implement directory support (create, delete, list directories)
- Add support for file metadata (file size, timestamps, permissions)
- Implement file searching and filtering capabilities
- Introduce file locking mechanisms for concurrent access
- Develop a command-line interface for interacting with the filesystem

To extend the filesystem, follow these steps:

1. Create a new branch for your feature:
git checkout -b feature/your-feature-name

2. Implement your changes and enhancements in the codebase.

3. Test your changes thoroughly.

4. Commit your changes with descriptive commit messages:
git commit -m "Add your commit message here"

5. Push your branch to the remote repository:
git push origin feature/your-feature-name

6. Open a pull request on GitHub describing your changes and enhancements.

## Contributing

Contributions are welcome! If you find any bugs, have suggestions, or want to contribute new features, please open an issue or submit a pull request. Make sure to follow the project's coding style and guidelines.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- [C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [File I/O in C](https://www.geeksforgeeks.org/basics-file-handling-c/)

## Contact

For any questions or inquiries, please contact [gituprajna20@gmail.com](mailto:gituprajna20@gmail.com).