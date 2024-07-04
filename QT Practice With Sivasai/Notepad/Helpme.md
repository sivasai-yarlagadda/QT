# Simple Notepad Using QT

## Project Overview

This project is a simple text editor application developed using the Qt framework. It provides basic functionalities akin to a traditional notepad, including file handling and text editing capabilities.

### Functionalities

1. **Opening File**
   - Allows users to open existing text files from their local system into the editor.
   - Utilizes `QFileDialog` to prompt the user to select a file for opening.

2. **Save**
   - Enables users to save the current content of the editor into the file from which it was opened or a specified file if it's a new file.
   - Implements file saving using standard file handling mechanisms in Qt.

3. **Save As**
   - Provides the option to save the content of the editor into a new file or overwrite an existing file with a different name.
   - Ensures flexibility in file saving operations by allowing users to specify the file name and location.

4. **Cut**
   - Facilitates cutting selected text from the editor and copying it to the clipboard.
   - Utilizes clipboard functionality provided by Qt to store the cut content temporarily for later use.

5. **Copy**
   - Allows users to copy selected text from the editor to the clipboard without removing it from the editor.
   - Uses Qt's clipboard functionality to store the copied content for pasting elsewhere.

6. **Paste**
   - Enables users to insert content from the clipboard into the editor at the current cursor position.
   - Utilizes Qt's clipboard functionality to retrieve the content and insert it seamlessly into the editor.

7. **Undo**
   - Provides the ability to revert the last action performed in the editor, restoring the previous state.
   - Implements an undo stack using Qt's `QUndoStack` to manage and execute undo operations.

8. **Redo**
   - Allows users to redo actions that were undone, restoring the editor to subsequent states.
   - Works in conjunction with the undo stack to manage and execute redo operations effectively.

9. **Close Option**
   - Offers a straightforward option to close the application, ensuring user-friendly navigation.
   - Implements a close button or menu item that terminates the application when selected.

10. **Clear Option to Clear the Screen**
    - Provides a feature to clear all content from the editor, effectively resetting the workspace.
    - Implements a clear function that removes all text from the editor's display area.

## Conclusion

This "Simple Notepad Using QT" project provides essential text editing functionalities in a user-friendly Qt-based application. Developed with C++, it offers a familiar notepad-like experience with features for opening, saving, editing, and managing text files. The project leverages Qt's robust framework to ensure cross-platform compatibility and efficient handling of text and file operations.

---
# Running the Project

To run the project, follow these steps:

1. **Clone the repository from GitHub**:
   - Open a terminal or command prompt.
   - Execute the following command to clone the repository:

     ```bash
     git clone https://github.com/sivasai-yarlagadda/SimpleNotepad_QT.git
     ```

   

2. **Open the project in Qt Creator**:
   - Launch Qt Creator.
   - Click on **File > Open File or Project**.
   - Navigate to the directory where you cloned the repository and select the project file (`*.pro`).

3. **Build and Run the Application**:
   - Configure the build settings (e.g., Debug or Release mode).
   - Set the build target to your desired platform (e.g., Desktop).
   - Click on the green play button (or press `Ctrl+R`) to build and run the project.


   ## Conclusion

This Qt-based application showcases fundamental file handling functionalities within a graphical user interface (GUI) environment. Developed in C++ using the Qt framework, it offers the following key features:

- **File Creation and Management**: Users can create new text files, write content to them, and manage existing files.
- **File Selection and Display**: The application enables users to select files using a file dialog, read their content, and display it in the UI.
- **Cross-Platform Compatibility**: Leveraging Qt's capabilities, the application ensures seamless operation across different operating systems, making it a versatile solution for GUI development.

By demonstrating these file handling capabilities, this project underscores Qt's robustness in developing user-friendly applications with essential functionalities for managing and interacting with files.

---
<div align="center">

### Contact Information

[![Email](https://img.shields.io/badge/Email-sivasaiyarlagadda2001@gmail.com-green?style=flat-square&logo=gmail)](mailto:sivasaiyarlagadda2001@gmail.com)

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Sivasai_Yarlagadda-blue?style=flat-square&logo=linkedin)](https://www.linkedin.com/in/sivasai-yarlagadda)


</div>
