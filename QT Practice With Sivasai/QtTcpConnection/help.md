# Qt Application with TCP Socket and PComm Terminal Emulator

## Overview
In this project, I developed a Qt application that utilizes TCP sockets to send data to a PComm Terminal Emulator. The Qt application sends data over TCP to port 5004, and PComm listens on this port to receive and display the incoming data.

## Functionality

### Qt Application
The Qt application performs the following tasks:
- Sends data via TCP socket to port 5004.
- Utilizes CSS styling for enhanced visual presentation (e.g., QTabWidget, buttons).

### PComm Terminal Emulator
PComm Terminal Emulator acts as the receiver:
- Listens on port 5004 for incoming data.
- Once connected to the host, it retrieves and displays the received messages from the TCP socket.

## Screenshots
Screenshots of the application's output have been included to illustrate its functionality and design.

## Technical Details

### TCP Socket Communication
- **Qt Application:** Uses Qt's `QTcpSocket` class to establish a TCP connection and send data to the specified port.
- **PComm Terminal Emulator:** Listens on port 5004 using its terminal interface to display received messages from the connected Qt application.

### CSS Styling in Qt
- Applied CSS styling to enhance the user interface of Qt components like `QTabWidget` and buttons.
- CSS helps in customizing the look and feel of the GUI elements, providing a cohesive and visually appealing interface.

## Running the Project
To run the project:
1. Clone the repository from GitHub.
2. Open the project in Qt Creator.
3. Build and run the application.

## Conclusion
This project demonstrates the integration of TCP socket communication between a Qt application and PComm Terminal Emulator. The Qt application sends data to port 5004, which PComm listens to, retrieves, and displays. Additionally, CSS styling enhances the visual presentation of certain Qt components within the application.

---
<div align="center">

### Contact Information

[![Email](https://img.shields.io/badge/Email-your.email%40example.com-green)](mailto:sivasaiyarlagadda2001@gmail.com)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue)](https://www.linkedin.com/in/sivasai-yarlagadda)

</div>
