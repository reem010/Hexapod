# Hexapod
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hexapod Project</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 20px;
        }
        h1, h2, h3 {
            color: #333;
        }
        pre {
            background-color: #f4f4f4;
            border: 1px solid #ddd;
            padding: 10px;
            overflow-x: auto;
        }
        ul {
            margin: 0;
            padding: 0;
            list-style-type: none;
        }
        li {
            margin-bottom: 10px;
        }
        a {
            color: #1a73e8;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>

    <h1>Hexapod Project</h1>

    <p>Welcome to the Hexapod Project! This project features a hexapod robot controlled by an ESP32 microcontroller and a PCA9685 servo driver. This README will guide you through the components used, their setup, and basic usage.</p>

    <h2>Components</h2>

    <ul>
        <li>
            <strong>ESP32</strong>
            <ul>
                <li><strong>Description:</strong> A versatile microcontroller with Wi-Fi and Bluetooth capabilities. It serves as the brain of the hexapod, handling the control logic and communication.</li>
                <li><strong>Quantity:</strong> 1</li>
            </ul>
        </li>
        <li>
            <strong>SG90 Mini Servos</strong>
            <ul>
                <li><strong>Description:</strong> Small, lightweight servos ideal for precise movements and control of the hexapod's legs.</li>
                <li><strong>Quantity:</strong> 12</li>
            </ul>
        </li>
        <li>
            <strong>Servo Motor 16 Channel Driver (PCA9685)</strong>
            <ul>
                <li><strong>Description:</strong> A 16-channel servo driver module used to control multiple servos with ease. It communicates with the ESP32 via I2C.</li>
                <li><strong>Quantity:</strong> 1</li>
            </ul>
        </li>
        <li>
            <strong>DC Adapter 5V 2A with Double Jack</strong>
            <ul>
                <li><strong>Description:</strong> Provides the necessary power for the ESP32 and the servos. Ensures stable and reliable operation of the hexapod.</li>
                <li><strong>Quantity:</strong> 1</li>
            </ul>
        </li>
        <li>
            <strong>Wires (20 cm Male To Male Pins)</strong>
            <ul>
                <li><strong>Description:</strong> Used for connecting the ESP32 to the PCA9685 driver and other components. Essential for establishing electrical connections.</li>
                <li><strong>Quantity:</strong> As needed</li>
            </ul>
        </li>
    </ul>

    <h2>Setup</h2>

    <ol>
        <li><strong>Connect the PCA9685 Driver to the ESP32:</strong>
            <ul>
                <li>Use the male-to-male jumper wires to connect the SDA and SCL pins of the PCA9685 to the corresponding pins on the ESP32.</li>
                <li>Connect the VCC and GND of the PCA9685 to the 5V and GND pins on the ESP32.</li>
            </ul>
        </li>
        <li><strong>Connect the Servos:</strong>
            <ul>
                <li>Attach each SG90 mini servo to one of the 16 channels on the PCA9685.</li>
                <li>Ensure the power and ground connections are properly made to avoid any issues.</li>
            </ul>
        </li>
        <li><strong>Power the System:</strong>
            <ul>
                <li>Use the 5V 2A DC adapter to power the PCA9685 and ESP32. Connect the adapter's output to the power input of the PCA9685 and ESP32.</li>
            </ul>
        </li>
        <li><strong>Upload the Code:</strong>
            <ul>
                <li>Program the ESP32 with the provided code to control the hexapod. The code will manage the servo movements and overall behavior of the hexapod.</li>
            </ul>
        </li>
    </ol>

    <h2>Usage</h2>

    <ul>
        <li><strong>Control:</strong> The hexapod can be controlled via the ESP32's wireless capabilities, allowing for remote operation and adjustments.</li>
        <li><strong>Customization:</strong> Adjust the servo angles and timing in the code to tailor the hexapod's movements to your specific needs.</li>
    </ul>

    <h2>Documentation</h2>

    <p>For detailed documentation, including wiring diagrams and code examples, please refer to the <a href="link-to-wiki">Wiki</a> or check the <code>docs</code> folder in this repository.</p>

    <h2>License</h2>

    <p>This project is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for more details.</p>

    <h2>Acknowledgements</h2>

    <ul>
        <li><a href="https://www.espressif.com/en/products/socs/esp32">ESP32 Documentation</a></li>
        <li><a href="https://www.nxp.com/docs/en/data-sheet/PCA9685.pdf">PCA9685 Documentation</a></li>
        <li><a href="https://www.sgpixel.com/sg90-mini-servo-motor">SG90 Mini Servo Information</a></li>
    </ul>

</body>
</html>

