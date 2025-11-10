# PlatformIO Template for Arduino Nano Every
This is a PlatformIO project template specifically configured for the Arduino Nano Every board. It includes multiple environments to easily switch between different source files and configurations.

## How to use this template

1. Install [PlatformIO IDE](https://platformio.org/install/ide?install=vscode) in Visual Studio Code.
2. Clone or download this repository to your local machine.
3. Open the project folder in Visual Studio Code.
4. Select the desired environment from the PlatformIO toolbar or `platformio.ini` file.
5. Source files are located in the `src/` directory. Each environment corresponds to a different source file.
6. Build and upload the code to your Arduino Nano Every board.
7. Open the Serial Monitor to view output from the board.
8. Modify the source files as needed for your project.
9. Add Libraries via PlatformIO `platformio.ini`

Optional installations:
- Install the `Serial Monitor` extension for enhanced serial monitoring features (VSCode Extensions Marketplace).


## Project Structure
- `platformio.ini`: Project configuration file where you can define environments, libraries, and build options.
- `src/`: Directory containing the main source code files for different environments.
- `lib/`: Directory for custom libraries (if any).
- `include/`: Directory for header files (if any).
- `.pio/`: Directory where PlatformIO stores build files and compiled binaries (auto-generated).
- `.vscode/`: Directory for Visual Studio Code workspace settings (auto-generated).
