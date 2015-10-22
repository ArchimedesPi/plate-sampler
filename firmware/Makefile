all: build

build: build-protobuf-files
	ano build

upload: build
	ano upload

build-protobuf-files: plate_sampler.proto
	protoc --plugin=protoc-gen-nanopb=lib/nanopb/generator/protoc-gen-nanopb --nanopb_out=src/ $^

clean:
	rm -rf .build_ano
	rm src/plate_sampler.pb.*
