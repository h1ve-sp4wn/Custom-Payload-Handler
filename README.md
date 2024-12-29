Terminal Execution:

Dependencies:

To compile and run a C++ program, you'll need the following:

A C++ compiler (like g++ from the GNU Compiler Collection).
    
Basic tools for building C++ programs.

Here are the specific tools:

    g++ (C++ compiler)
    make (optional, for advanced build processes)

Steps to Run in Terminal:

Install the Required Dependencies: If you're using a Debian-based system (Ubuntu, etc.), you can install the necessary tools using the following command:

    sudo apt-get update

    sudo apt-get install build-essential

This will install g++, make, and other development tools.

Save the C++ Code: Save the provided code into a file, for example, custom_payload_handler.cpp.

Compile the C++ Program: Compile the program using g++:

    g++ -o attack attack.cpp

This will create an executable called attack.

Run the Program: To run the compiled program, provide the payload as an argument:

    ./custom_payload_handler "inject react specific payload"

You can test with different payloads, for example:

    ./custom_payload_handler "inject angular specific payload"

Check Output: The program will print the relevant message based on the payload you provide. If no payload is given, it will display an error message.

Running in Docker:

Build the Docker Image: In the directory where your Dockerfile and attack.cpp are located, run the following command to build the Docker image:

    docker build -t custom-payload-handler-image .

Run the Docker Container: After building the image, run the container with the following command:

    docker run --name custom-payload-handler-container attack-image

If you want to pass different payloads, you can override the default payload by providing an argument during runtime. For example:

    docker run --name attack-container attack-image "inject angular specific payload"

Check Output: The output will be shown in your terminal. You should see one of the following messages:

"React specific attack initiated."

"Angular specific attack initiated."

"Default attack initiated."


