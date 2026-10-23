/*
 * beryllium: paste into xnuloader/loader.c next to platform_redwood and add &platform_beryllium to platforms[].
 * Every value is explained in docs/PORTING.md ("The loader").
 */
static const struct platform platform_beryllium = {
	.name = "beryllium",
	.io_base = 0x00400000, .io_size = 0x3FC00000,   /* TODO: one window over the SoC's peripherals, non-zero base */
	.gic_dist = 0x17a00000, .gic_redist = 0x17a60000,
	.uart = 0,                                      /* phones: no PL011 */
	.log_other_cpu = 1,
	.cores = 8, .core_shift = 8,
	.small_cores = 0x0,                          /* TODO: a bit per "small" core (capacity-dmips-mhz in the DT) */
	.fb_base = 0x0,                                 /* TODO: the framebuffer base the UEFI prints ("display ... at") */
};
