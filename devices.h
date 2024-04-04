/*
// ECE243 2024 S FINAL PROJECT
// DEVICES.H

// Author: Tristan Seto
// Date: 2024-03-22
// This file will initialize all the device ports connected to the DE1-SoC board used in this project.

*/

// global variables
volatile unsigned int * const LEDs = ((volatile unsigned int *) 0xFF200000);

volatile unsigned int * const buttons = ((volatile unsigned int *) 0xFF200050);

// HEX DECODER
#define HEX_0 0x3F
#define HEX_1 0x06
#define HEX_2 0x5B
#define HEX_3 0x4F
#define HEX_4 0x66
#define HEX_5 0x6D
#define HEX_6 0x7D
#define HEX_7 0x07
#define HEX_8 0x7F
#define HEX_9 0x6F

struct hex_display {
    // access for HEX[3:0]
    volatile unsigned char hex[4];
};

struct hex_display * const HEXs = ((struct hex_display *) 0xFF200020);

// the audio device
struct audio_t { 
      volatile unsigned int control;
      volatile unsigned char rarc;
      volatile unsigned char ralc;
      volatile unsigned char wsrc;
      volatile unsigned char wslc;
      volatile unsigned int ldata;
      volatile unsigned int rdata;
};

struct audio_t * const audio_p = ((struct audio_t *) 0xFF203040);

// VGA:
// frame buffer
struct fb_t {
	// 240 rows, 512 (320 + padding) columns
	volatile unsigned short pixels[256][512];
};

// frame buffer declarations (front & back)
struct fb_t buffer1; 
struct fb_t buffer2;

// video out device struct
struct videoout_t {
       volatile struct fb_t * fbp; // front frame buffer (Buffer)
       volatile struct fb_t * bfbp; // back frame buffer (BackBuffer)
       volatile unsigned int resolution; // resolution 2 fields 16b each, packed into a 32b word
       volatile unsigned int StatusControl;
};

