# Flashing guide (USB) for ESP32-S3-WROOM-1-N* custom board

This guide is for the custom Meshtastic board setup that uses an **ESP32-S3-WROOM-1-N\*** module (for example N4 or N16 variants).

## 1) Prerequisites

- USB data cable (not charge-only)
- ESP-IDF installed and initialized (`idf.py` available in your shell)
- Python serial helper tool (optional, but useful):
  ```bash
  pip install pyserial
  ```

## 2) Connect the board and find the serial port

Plug the board in over USB, then identify the serial device:

```bash
python -m serial.tools.list_ports
```

Typical ports:

- Linux: `/dev/ttyACM0` or `/dev/ttyUSB0`
- macOS: `/dev/cu.usbmodem*` or `/dev/cu.usbserial*`
- Windows: `COMx`

In the commands below, replace `PORT` with your actual port.

## 3) Put the board in download (bootloader) mode (if needed)

Many ESP32-S3 boards auto-enter flash mode. If flashing fails, do this manually:

1. Hold **BOOT**
2. Press and release **RESET**
3. Release **BOOT**

## 4) Build and flash

From your ESP-IDF project directory (the one that contains your custom board files), run:

```bash
idf.py -p PORT flash
```

If you also want to force a full rebuild first:

```bash
idf.py fullclean
idf.py build
idf.py -p PORT flash
```

If your board needs an explicit baud rate, use:

```bash
idf.py -p PORT -b 921600 flash
```

## 5) View boot logs / verify firmware is running

```bash
idf.py -p PORT monitor
```

Exit monitor with:

- `Ctrl+]` (ESP-IDF default)

## 6) Common issues

- **Permission denied on Linux**: add your user to `dialout`, then log out/in.
  ```bash
  sudo usermod -aG dialout $USER
  ```
- **No serial port appears**: try a different USB cable/port; many cables are power-only.
- **Timed out waiting for packet header**: manually enter bootloader mode (step 3).
- **Wrong flash/PSRAM config**: verify your custom board config matches your module (for example N4 vs N16 and PSRAM settings).
