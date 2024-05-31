#include <onnx/onnx_pb.h>
#include <onnx/shape_inference/implementation.h>

#include "importer.hpp"

using namespace ::ONNX_NAMESPACE;

namespace toy {
namespace frontend {

ONNXImporter::ONNXImporter(const std::string& file_path)
    : m_model_path(file_path) {}

ModelProto ONNXImporter::parse_from_file(const std::string& file_path) {
    std::ifstream file_stream{file_path.c_str(), std::ios::in | std::ios::binary};

    if (!file_stream.is_open()) {
        ONNX_THROW("Could not open the file: " + file_path);
    };

    auto model_proto = parse_from_istream(file_stream);
    file_stream.close();
    return model_proto;
}

ModelProto parse_from_istream(std::istream& model_stream) {
    if (!model_stream.good()) {
        model_stream.clear();
        model_stream.seekg(0);
        if (!model_stream.good()) {
            ONNX_THROW("Provided input stream has incorrect state.");
        }
    }

    ModelProto model_proto;
    if (!model_proto.ParseFromIstream(&model_stream)) {
        ONNX_THROW("Error during import of ONNX model provided as input stream "
                       " with binary protobuf message.");
    }

    return model_proto;
}

}
}