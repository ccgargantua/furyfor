# Determine the platform
UNAME := $(shell uname)

# Variables
export CC = clang
export CFLAGS = -std=c11 -Wall -Wextra -Iinclude

# Default target (Linux)
.DEFAULT_GOAL := linux

# Check if the platform is Linux
ifeq ($(UNAME), Linux)
	EXECUTABLE = my_program
	RM = rm -f
else
	# Placeholder rule for Windows builds
	windows:
		@echo "Building on Windows is not supported yet."
		@exit 1
endif

SRC_DIR = src
BUILD_DIR = build

# List of subdirectories
SUBDIRS = $(BUILD_DIR)

# Targets
.PHONY: all clean linux

debug: CFLAGS += -g -DDEBUG
debug: all

release: CFLAGS += -O3
release: all

all: $(SUBDIRS)
	@echo "Building the project..."

$(SUBDIRS):
	@$(MAKE) -C $@

clean:
	@echo "Cleaning up..."
	@$(RM) $(BUILD_DIR)/*.o
	@$(RM) $(BUILD_DIR)/$(EXECUTABLE)

# Linux-specific build
linux:
	@$(MAKE) -C $(SRC_DIR)

