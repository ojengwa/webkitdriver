WD_PATH  := org/openqa/selenium/webkit
SRC_DIR  := src/java
DST_DIR  := build

WD_JAVA  := $(wildcard $(SRC_DIR)/$(WD_PATH)/*.java)
WD_CLASS := $(patsubst $(SRC_DIR)%,$(DST_DIR)%,$(WD_JAVA:.java=.class))

all: wd
	$(MAKE) -C test

wd: $(WD_CLASS)

$(DST_DIR)/%.class: $(SRC_DIR)/%.java
	javac -sourcepath $(SRC_DIR) -classpath build:../WebDriver/build/common/common.jar:../third_party/java/guava/guava-r05.jar -d $(DST_DIR) $<

.PHONY: all wd
