// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by: Brian Musembi
// Created on: June 2021
// This program is the "Hello, World!" program for the Gameboy


#include <stdio.h>
#include <gb/gb.h>
#include "simplebackground.c"
#include "simplebackgroundmap.c"
#include <gb/font.h>


void main(){
	font_t min font;
	
	font_init();
	min_font = font_load(font_min); // 36 tile
	font_set(min_font);
	
	set_bkg_data(37, 7, backgroundtiles);
	set_bkg_tiles(0, 0, 40, 18, backgroundmap);
	
	
	
	SHOW_BKG;
	DISPLAY_ON;
	
//	while(1){
//		scroll_bkg(1, 0);
//		delay(100);
//	}
}
