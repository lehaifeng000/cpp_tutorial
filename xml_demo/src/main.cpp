//
// Created by lhf on 2023/10/25.
//
#include "pugixml.hpp"
#include <iostream>
int main(){
    //创建
    pugi::xml_document doc;
    // add root node
    pugi::xml_node root = doc.append_child("root");
    pugi::xml_node child1 = root.append_child("child");
    child1.append_attribute("name") = "Child 1";
    child1.text().set("This is child 1 text");

    pugi::xml_node child2 = root.append_child("child");
    child2.append_attribute("name") = "Child 2";
    child2.text().set("This is child 2 text");
    //保存
    doc.save_file("test.xml");

    //读取
    pugi::xml_document doc_read;
    pugi::xml_parse_result result = doc_read.load_file("test.xml");
    pugi::xml_node root_node = doc.child("root");
    for (pugi::xml_node child = root_node.first_child(); child; child = child.next_sibling())
    {
        // Print the name of the node and its first attribute
        std::cout << "Node name: " << child.name() << "\n";
        std::cout << "First attribute: " << child.first_attribute().name() << " = " << child.first_attribute().value() << "\n";

//        // Print the text content of the node
//        std::cout << "Node text: " << child.text().get() << "\n\n";
    }

    return 0;
}