
/* file generated by tabgen.sh; do not edit */

extern int sys__sysmesg();
extern int sys__iopl();
extern int sys__sync1();
extern int sys__blk_add();
extern int sys__shutdown();
extern int sys__dmesg();
extern int sys__panic();
extern int sys__debug();
extern int sys__get_errno();
extern int sys__set_errno();
extern int sys__get_errno_ptr();
extern int sys__set_errno_ptr();
extern int sys__set_signal_entry();
extern int sys_fork();
extern int sys__exit();
extern int sys__exec();
extern int sys__newtask();
extern int sys_kill();
extern int sys_signal();
extern int sys___xwait();
extern int sys_nice();
extern int sys_getpid();
extern int sys_getppid();
extern int sys_getuid();
extern int sys_geteuid();
extern int sys_getgid();
extern int sys_getegid();
extern int sys_setuid();
extern int sys_setgid();
extern int sys_ualarm();
extern int sys_alarm();
extern int sys_pause();
extern int sys__pg_alloc();
extern int sys__pg_free();
extern int sys__csync();
extern int sys_getcwd();
extern int sys__chdir();
extern int sys__mkdir();
extern int sys_rmdir();
extern int sys_access();
extern int sys__open();
extern int sys_close();
extern int sys__read();
extern int sys__write();
extern int sys_lseek();
extern int sys_fcntl();
extern int sys__mknod();
extern int sys_unlink();
extern int sys_link();
extern int sys_rename();
extern int sys_fstat();
extern int sys_fchmod();
extern int sys_fchown();
extern int sys_pipe();
extern int sys_ttyname_r();
extern int sys__mount();
extern int sys__umount();
extern int sys__readdir();
extern int sys_ioctl();
extern int sys__statfs();
extern int sys__mtab();
extern int sys__poll();
extern int sys__ctty();
extern int sys_revoke();
extern int sys__rfsactive();
extern int sys__mod_insert();
extern int sys__mod_unload();
extern int sys_gettimeofday();
extern int sys_settimeofday();
extern int sys_win_newdesktop();
extern int sys_win_killdesktop();
extern int sys_win_attach();
extern int sys_win_detach();
extern int sys_win_owner();
extern int sys_win_get_ptr_pos();
extern int sys_win_advise_pos();
extern int sys_win_creat();
extern int sys_win_change();
extern int sys_win_raise();
extern int sys_win_focus();
extern int sys_win_ufocus();
extern int sys_win_close();
extern int sys_win_get_title();
extern int sys_win_set_title();
extern int sys_win_is_visible();
extern int sys_win_redraw_all();
extern int sys_win_paint();
extern int sys_win_end_paint();
extern int sys_win_rgba2color();
extern int sys_win_rgb2color();
extern int sys_win_clip();
extern int sys_win_pixel();
extern int sys_win_hline();
extern int sys_win_vline();
extern int sys_win_rect();
extern int sys_win_copy();
extern int sys_win_text();
extern int sys_win_btext();
extern int sys_win_text_size();
extern int sys_win_chr();
extern int sys_win_bchr();
extern int sys_win_chr_size();
extern int sys_win_bitmap();
extern int sys_win_bconv();
extern int sys_win_desktop_size();
extern int sys_win_ws_getrect();
extern int sys_win_ws_setrect();
extern int sys_win_rect_preview();
extern int sys_win_load_font();
extern int sys_win_find_font();
extern int sys_win_set_font();
extern int sys_win_dispflags();
extern int sys_win_modeinfo();
extern int sys_win_setmode();
extern int sys_win_getmode();
extern int sys_win_setcte();
extern int sys_win_getcte();
extern int sys_win_update();
extern int sys_win_insert_ptr();
extern int sys_win_set_ptr_speed();
extern int sys_win_get_ptr_speed();
extern int sys_win_map_buttons();
extern int sys_win_reset();
extern int sys_win_taskbar();
extern int sys_win_chk_taskbar();
extern int sys_win_sec_unlock();
extern int sys_win_deflayer();
extern int sys_win_setlayer();
extern int sys_win_setptr();
extern int sys_win_soft_keydown();
extern int sys_win_soft_keyup();
extern int sys_win_blink();
extern int sys_win_dragdrop();
extern int sys_win_gdrop();
extern int sys__systat();
extern int sys__taskinfo();
extern int sys__taskmax();
extern int sys__boot_flags();
extern int sys_evt_count();
extern int sys__evt_wait();
extern int sys_evt_signal();
extern int sys__bdev_stat();
extern int sys__bdev_max();

struct syscall
{
	void *	proc;
	int	uidz;
} syscall_tab[143] = 
{
	[0]	= { sys__sysmesg,		1 },
	[1]	= { sys__iopl,			1 },
	[2]	= { sys__sync1,			1 },
	[3]	= { sys__blk_add,		1 },
	[4]	= { sys__shutdown,		1 },
	[5]	= { sys__dmesg,			1 },
	[6]	= { sys__panic,			1 },
	[7]	= { sys__debug,			1 },
	[8]	= { sys__get_errno,		0 },
	[9]	= { sys__set_errno,		0 },
	[10]	= { sys__get_errno_ptr,		0 },
	[11]	= { sys__set_errno_ptr,		0 },
	[12]	= { sys__set_signal_entry,	0 },
	[13]	= { sys_fork,			0 },
	[14]	= { sys__exit,			0 },
	[15]	= { sys__exec,			0 },
	[16]	= { sys__newtask,		0 },
	[17]	= { sys_kill,			0 },
	[18]	= { sys_signal,			0 },
	[19]	= { sys___xwait,		0 },
	[20]	= { sys_nice,			0 },
	[21]	= { sys_getpid,			0 },
	[22]	= { sys_getppid,		0 },
	[23]	= { sys_getuid,			0 },
	[24]	= { sys_geteuid,		0 },
	[25]	= { sys_getgid,			0 },
	[26]	= { sys_getegid,		0 },
	[27]	= { sys_setuid,			0 },
	[28]	= { sys_setgid,			0 },
	[29]	= { sys_ualarm,			0 },
	[30]	= { sys_alarm,			0 },
	[31]	= { sys_pause,			0 },
	[32]	= { sys__pg_alloc,		0 },
	[33]	= { sys__pg_free,		0 },
	[34]	= { sys__csync,			0 },
	[35]	= { sys_getcwd,			0 },
	[36]	= { sys__chdir,			0 },
	[37]	= { sys__mkdir,			0 },
	[38]	= { sys_rmdir,			0 },
	[39]	= { sys_access,			0 },
	[40]	= { sys__open,			0 },
	[41]	= { sys_close,			0 },
	[42]	= { sys__read,			0 },
	[43]	= { sys__write,			0 },
	[44]	= { sys_lseek,			0 },
	[45]	= { sys_fcntl,			0 },
	[46]	= { sys__mknod,			0 },
	[47]	= { sys_unlink,			0 },
	[48]	= { sys_link,			0 },
	[49]	= { sys_rename,			0 },
	[50]	= { sys_fstat,			0 },
	[51]	= { sys_fchmod,			0 },
	[52]	= { sys_fchown,			0 },
	[53]	= { sys_pipe,			0 },
	[54]	= { sys_ttyname_r,		0 },
	[55]	= { sys__mount,			1 },
	[56]	= { sys__umount,		1 },
	[57]	= { sys__readdir,		0 },
	[58]	= { sys_ioctl,			0 },
	[59]	= { sys__statfs,		1 },
	[60]	= { sys__mtab,			1 },
	[61]	= { sys__poll,			0 },
	[62]	= { sys__ctty,			0 },
	[63]	= { sys_revoke,			0 },
	[64]	= { sys__rfsactive,		0 },
	[65]	= { sys__mod_insert,		1 },
	[66]	= { sys__mod_unload,		1 },
	[67]	= { sys_gettimeofday,		0 },
	[68]	= { sys_settimeofday,		1 },
	[69]	= { sys_win_newdesktop,		1 },
	[70]	= { sys_win_killdesktop,	0 },
	[71]	= { sys_win_attach,		0 },
	[72]	= { sys_win_detach,		0 },
	[73]	= { sys_win_owner,		1 },
	[74]	= { sys_win_get_ptr_pos,	0 },
	[75]	= { sys_win_advise_pos,		0 },
	[76]	= { sys_win_creat,		0 },
	[77]	= { sys_win_change,		0 },
	[78]	= { sys_win_raise,		0 },
	[79]	= { sys_win_focus,		0 },
	[80]	= { sys_win_ufocus,		0 },
	[81]	= { sys_win_close,		0 },
	[82]	= { sys_win_get_title,		0 },
	[83]	= { sys_win_set_title,		0 },
	[84]	= { sys_win_is_visible,		0 },
	[85]	= { sys_win_redraw_all,		0 },
	[86]	= { sys_win_paint,		0 },
	[87]	= { sys_win_end_paint,		0 },
	[88]	= { sys_win_rgba2color,		0 },
	[89]	= { sys_win_rgb2color,		0 },
	[90]	= { sys_win_clip,		0 },
	[91]	= { sys_win_pixel,		0 },
	[92]	= { sys_win_hline,		0 },
	[93]	= { sys_win_vline,		0 },
	[94]	= { sys_win_rect,		0 },
	[95]	= { sys_win_copy,		0 },
	[96]	= { sys_win_text,		0 },
	[97]	= { sys_win_btext,		0 },
	[98]	= { sys_win_text_size,		0 },
	[99]	= { sys_win_chr,		0 },
	[100]	= { sys_win_bchr,		0 },
	[101]	= { sys_win_chr_size,		0 },
	[102]	= { sys_win_bitmap,		0 },
	[103]	= { sys_win_bconv,		0 },
	[104]	= { sys_win_desktop_size,	0 },
	[105]	= { sys_win_ws_getrect,		0 },
	[106]	= { sys_win_ws_setrect,		0 },
	[107]	= { sys_win_rect_preview,	0 },
	[108]	= { sys_win_load_font,		1 },
	[109]	= { sys_win_find_font,		0 },
	[110]	= { sys_win_set_font,		0 },
	[111]	= { sys_win_dispflags,		0 },
	[112]	= { sys_win_modeinfo,		0 },
	[113]	= { sys_win_setmode,		1 },
	[114]	= { sys_win_getmode,		0 },
	[115]	= { sys_win_setcte,		0 },
	[116]	= { sys_win_getcte,		0 },
	[117]	= { sys_win_update,		0 },
	[118]	= { sys_win_insert_ptr,		0 },
	[119]	= { sys_win_set_ptr_speed,	0 },
	[120]	= { sys_win_get_ptr_speed,	0 },
	[121]	= { sys_win_map_buttons,	0 },
	[122]	= { sys_win_reset,		0 },
	[123]	= { sys_win_taskbar,		0 },
	[124]	= { sys_win_chk_taskbar,	0 },
	[125]	= { sys_win_sec_unlock,		1 },
	[126]	= { sys_win_deflayer,		0 },
	[127]	= { sys_win_setlayer,		0 },
	[128]	= { sys_win_setptr,		0 },
	[129]	= { sys_win_soft_keydown,	0 },
	[130]	= { sys_win_soft_keyup,		0 },
	[131]	= { sys_win_blink,		0 },
	[132]	= { sys_win_dragdrop,		0 },
	[133]	= { sys_win_gdrop,		0 },
	[134]	= { sys__systat,		0 },
	[135]	= { sys__taskinfo,		0 },
	[136]	= { sys__taskmax,		0 },
	[137]	= { sys__boot_flags,		1 },
	[138]	= { sys_evt_count,		0 },
	[139]	= { sys__evt_wait,		0 },
	[140]	= { sys_evt_signal,		0 },
	[141]	= { sys__bdev_stat,		1 },
	[142]	= { sys__bdev_max,		1 },
};
