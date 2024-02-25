THEOS_PACKAGE_SCHEME = rootless
TARGET := iphone:clang:latest:7.0
INSTALL_TARGET_PROCESSES = Instagram


include $(THEOS)/makefiles/common.mk

TWEAK_NAME = InstagramDeReel

InstagramDeReel_FILES = Tweak.x
InstagramDeReel_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk


