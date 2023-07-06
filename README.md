# ROT13 Decoder
The ROT13 (Rotate by 13) is a simple encryption technique that involves rotating the letters of the alphabet by 13 positions. This encryption method can be easily decoded by applying the same rotation again.

## Description
This project provides a script to decode ROT13 encrypted messages. The script takes an input string or file containing ROT13 encoded text and converts it back to its original form.

## Usage
To use the ROT13 decoder script, follow these steps:

Clone the repository:

bash
Copy code
git clone https://github.com/NuIled/MY-ROT13.git
Navigate to the project directory:

bash
Copy code
cd MY-ROT13
Run the script with an input string:

bash
Copy code
python rot13_decoder.py "Gur Frperg Punatrf Nethzrag vf hfrq gb qvibepr gur gryrcubar bs gur nycunorg."
Output:

vbnet
Copy code
The Secret Challenges Argument is used to differentiate the letter of the alphabet.
Example
Here's an example of using the ROT13 decoder script to decode a ROT13 encrypted file:

bash
Copy code
python rot13_decoder.py -f encoded.txt
The decoded content will be saved in a new file named decoded.txt.

Contributions
Contributions to this project are welcome. If you have any suggestions or improvements, feel free to create a pull request.
