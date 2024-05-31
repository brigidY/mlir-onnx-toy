#pragma once

#include <onnx/onnx_pb.h>
#include <fstream>

namespace toy{
namespace frontend{

class ONNXImporter {
public: 
    explicit ONNXImporter(const std::string& model_path);
    
    ::ONNX_NAMESPACE::ModelProto parse_from_file(const std::string& file_path);

private:
    const std::string m_model_path;
};

::ONNX_NAMESPACE::ModelProto parse_from_istream(std::istream& model_stream);

}
}
