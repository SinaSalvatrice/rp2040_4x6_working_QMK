rows: 0,1,2,3,4,5,
cols: 6,7,8,10
encoder ab 11 und 12
btn 13
rgb 14

USB:
  VID 0xFEED = standard QMK testing/development VID (used for handwired/custom keyboards)
  PID 0x4E50 = "NP" (NumPad) in ASCII; chosen to be unique within the 0xFEED VID space
               and avoid Windows driver-cache conflicts with the previous generic PID 0x0002