import os
import binascii
import sys

def generate_embedded_file(input_dir, output_file):
    """
    将输入目录下的所有 .js 文件转换为嵌入式二进制数据，生成 C++ 头文件。
    """
    with open(output_file, "w", encoding="utf-8") as out:
        out.write("// 自动生成的嵌入式文件头\n\n")
        out.write("#ifndef JAVASCRIPT_H\n#define JAVASCRIPT_H\n\n")
        out.write("#include <cstdint>\n\n")

        # 遍历文件夹，处理所有 .js 文件
        for root, _, files in os.walk(input_dir):
            for file in files:
                if file.endswith(".js"):
                    file_path = os.path.join(root, file)
                    var_name = file.replace(".", "_").replace("-", "_").replace(" ", "_")

                    with open(file_path, "rb") as f:
                        data = f.read()

                    out.write(f"// {file_path}\n")
                    out.write(f"static const uint8_t {var_name}[] = {{\n")
                    # 转换二进制数据为 C++ 格式
                    hex_data = ", ".join(f"0x{binascii.hexlify(bytes([b])).decode()}" for b in data)
                    out.write(f"    {hex_data}\n")
                    out.write(f"}};\n\n")

        out.write("#endif // JAVASCRIPT_H\n")
    print(f"嵌入文件头已生成：{output_file}")


if __name__ == "__main__":
    # 检查是否有文件夹拖入或命令行传入
    if len(sys.argv) != 2:
        print("用法: 将JS文件夹拖入此脚本或传入文件夹路径")
        sys.exit(1)

    input_dir = sys.argv[1]
    if not os.path.isdir(input_dir):
        print(f"错误: {input_dir} 不是有效的文件夹")
        sys.exit(1)

    # 输出的头文件名
    output_file = "JavaScript.h"

    # 生成嵌入头文件
    generate_embedded_file(input_dir, output_file)
