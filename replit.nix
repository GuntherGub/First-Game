{ pkgs }: {
	deps = [
   pkgs.raylib
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}