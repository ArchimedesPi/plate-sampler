NANOPB_DIR=lib/nanopb
PROTOC=protoc
PROTOC_OPTS = --plugin=protoc-gen-nanopb=$(NANOPB_DIR)/generator/protoc-gen-nanopb

all: plate_sampler.proto.c

plate_sampler.proto.c:
	echo $(PROTOC_OPTS)
	cp ../plate_sampler.proto .
	$(PROTOC) $(PROTOC_OPTS) --nanopb_out=. plate_sampler.proto
