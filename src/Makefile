
.PHONY: all
all:;
	make build && make run

.PHONY: setup
setup:;
	pip install -r requirements.txt

.PHONY: build
build:;
	clang++ \
		-O3 \
		-Wall \
		-shared \
		-std=c++14 \
		-fPIC \
		`python3 -m pybind11 --includes` \
		-o cpp_lib`python3-config --extension-suffix` \
		binding.cpp

.PHONY: run
run:;
	python main.py
