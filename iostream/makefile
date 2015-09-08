dirs := $(shell ls -d */)
exp_iostream:
	$(foreach N,$(dirs),make -C $(N) &)