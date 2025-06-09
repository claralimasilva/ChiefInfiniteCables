CXX = clang++
override CXXFLAGS += -g -Wall -Werror -Iinclude

BIN_DIR = bin
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

all: $(BIN_DIR) bin/newton bin/modificado bin/secante bin/menu

menu: bin/menu

bin/newton: src/newtonRaphson.cpp tests/testesNR.cpp src/erro.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

bin/modificado: src/newtonModificado.cpp tests/testesModificado.cpp src/erro.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

bin/secante: src/secante.cpp tests/testesSecante.cpp src/erro.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

bin/menu: main.cpp src/newtonRaphson.cpp src/newtonModificado.cpp src/secante.cpp src/erro.cpp src/funcao.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

main-debug:
	$(CXX) $(CXXFLAGS) -O0 src/newtonRaphson.cpp tests/testesNR.cpp src/erro.cpp -o bin/main-debug

clean:
	rm -f bin/*
