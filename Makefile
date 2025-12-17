# 簡單的 Makefile - 手動編譯版本

CC = gcc
CFLAGS = -Wall -Wextra
BUILDDIR = build

# 建立 build 目錄
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# 編譯 hello.c
hello: $(BUILDDIR)
	$(CC) $(CFLAGS) src/hello.c -o $(BUILDDIR)/hello

# 清理編譯產物
clean:
	rm -rf $(BUILDDIR)

.PHONY: hello clean