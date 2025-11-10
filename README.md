# PlatformIO Template for Arduino Nano Every
This is a PlatformIO project template specifically configured for the Arduino Nano Every board. It includes multiple environments to easily switch between different source files and configurations.

## How to use this template

1. Install [PlatformIO IDE](https://platformio.org/install/ide?install=vscode) in Visual Studio Code.
2. Clone or download this repository to your local machine.
3. Open the project folder in Visual Studio Code.
4. Select the desired environment from the PlatformIO toolbar or `platformio.ini` file.
   1. Hint: Open the file `platformio.ini` file and save (Ctrl+S) to refresh the environment picker and libraries.
5. Source files are located in the `src/` directory. Each environment corresponds to a different source file.
6. Build and upload the code to your Arduino Nano Every board: Press `F1`, type `PlatformIO: Upload`, and hit `Enter`.
7. Open the Serial Monitor to view output from the board.
8. Modify the source files as needed for your project.
9.  Add Libraries via PlatformIO `platformio.ini`


## Additional Hints and Tips
- Make sure you have the necessary drivers installed for the Arduino Nano Every board.
- Optional installations:
  - Install the `Serial Monitor` extension for enhanced serial monitoring features (VSCode Extensions Marketplace).

- What if I am using the board in Ubuntu (Linux) first time, and have not yet installed the necessary drivers?
  - Follow the instructions on the [Arduino website](https://www.arduino.cc/en/Guide/Linux) to install the required drivers for Linux.
  - Make sure your user has permission to access the serial ports. You may need to add your user to the `dialout` group:
    ```bash
    sudo usermod -aG dialout $USER
    ```

- You can actually explore inside any library by clicking on the library name in the `platformio.ini` file or any source files while holding the `Ctrl` key (or `Cmd` key on macOS).



## Project Structure
- `platformio.ini`: Project configuration file where you can define environments, libraries, and build options.
- `src/`: Directory containing the main source code files for different environments.
- `lib/`: Directory for custom libraries (if any).
- `include/`: Directory for header files (if any).
- `.pio/`: Directory where PlatformIO stores build files and compiled binaries (auto-generated).
- `.vscode/`: Directory for Visual Studio Code workspace settings (auto-generated).


## Guide for creating custom libraries and including them
To create and include custom libraries in your PlatformIO project, follow these steps:
1. Create a new directory for your library inside the `lib/` folder of your project. For example, `lib/MyLibrary/`.
2. Inside this directory, create the necessary source (`.cpp`) and header (`.h`) files for your library (example: `MyLibrary.cpp` and `MyLibrary.h`) - you can actually see the template `BoardSupport` library inside the `lib/` folder already.
3. In your source files inside `src/`, include the library header using the following syntax:
   ```cpp
   #include <MyLibrary.h>
   ```
4. PlatformIO will automatically detect and include libraries located in the `lib/` directory during the build process.
5. You can also manage library dependencies using the `platformio.ini` file by specifying libraries under the `[env]` section. For example:
   ```ini
   [env]
   platform = atmelmegaavr
   board = nano_every
   framework = arduino
   lib_deps =
       MyLibrary
   ```

