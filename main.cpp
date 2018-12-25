#include "pxt.h"

namespace robobloq {
     /**
     * Read a line of text from the serial port and return the buffer when the delimiter is met.
     * @param delimiter text delimiter that separates each text chunk
     */
    //% help=serial/read-until
    //% blockId=xxserial_read_until block="XXserial|read until %delimiter=serial_delimiter_conv"
    //% weight=19
    String readUntil(String delimiter) {
      return PSTR(uBit.serial.readUntil(MSTR(delimiter)));
    }
}