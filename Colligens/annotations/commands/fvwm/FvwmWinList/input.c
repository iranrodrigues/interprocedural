int main (){

	SetMessageMask(Fvwm_fd,
	#ifdef MINI_ICONS
			 M_MINI_ICON |
	#endif
			 M_CONFIGURE_WINDOW | M_ADD_WINDOW | M_DESTROY_WINDOW | M_WINDOW_NAME | M_ICON_NAME | M_DEICONIFY | M_ICONIFY | M_END_WINDOWLIST | M_NEW_DESK | M_FOCUS_CHANGE | M_CONFIG_INFO | M_SENDCONFIG);


}
