#
# Copyright (c) 2016, Piotr Durlej
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#

form(-1,-1,300,188,"Desktop Prefs");
flag(FORM_FXS_APPFLAGS);

chkbox("moving",4,57,		"Display contents in moving windows");
chkbox("zoom",4,73,		"Smart placement and zoom");
chkbox("large",4,89,		"Use large fonts");

label(NULL,6,111,		"Double click distance:");
input("dc_dist",120,108,20,17,1);
label(NULL,143,111,		"pixels");

label(NULL,6,129,		"Window frame width:");
input("frame_width",120,126,20,17,1);
label(NULL,143,129,		"pixels");

label(NULL,6,147,		"Scroll bar width:");
input("sb_width",120,144,20,17,1);
label(NULL,143,147,		"pixels");

frame(NULL,0,0,300,55,		"Backdrop");
label("bd_path",10,15,		"");
chkbox("tile",10,32,		"Tile wallpaper");

button(NULL,204,13,42,16,	"Change",1);
button(NULL,248,13,42,16,	"Remove",2);

button(NULL,2,170,60,16,	"OK",3);
button(NULL,64,170,60,16,	"Cancel",-1);

frame(NULL,2,104,296,2,NULL);
frame(NULL,2,164,296,2,NULL);
