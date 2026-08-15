#pragma once
// IWYU pragma private; include "System/Xml/XmlAttribute.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlName*, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlAttribute::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181cff260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_LocalNameHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_LocalNameHash)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cff380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"get_LocalNameHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW, ::StringW, ::StringW, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181cff220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_XmlName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlName* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_XmlName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"get_XmlName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_XmlName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlName*)>(&::System::Xml::XmlAttribute::set_XmlName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"set_XmlName", {}, {::i2c::type_of<::System::Xml::XmlName*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.CloneNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(bool)>(&::System::Xml::XmlAttribute::CloneNode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181cfeb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_ParentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_ParentNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cff3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_LocalName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cff390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_NamespaceURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cff3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_Prefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b26140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW)>(&::System::Xml::XmlAttribute::set_Prefix)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181cff5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_NodeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_NodeType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_OwnerDocument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_OwnerDocument)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cff3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181cff420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW)>(&::System::Xml::XmlAttribute::set_Value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181c47060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_SchemaInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_InnerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW)>(&::System::Xml::XmlAttribute::set_InnerText)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cff510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.PrepareOwnerElementInElementIdAttrMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::PrepareOwnerElementInElementIdAttrMap)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181cfed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"PrepareOwnerElementInElementIdAttrMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.ResetOwnerElementInElementIdAttrMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW)>(&::System::Xml::XmlAttribute::ResetOwnerElementInElementIdAttrMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181cfefc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"ResetOwnerElementInElementIdAttrMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_IsContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_IsContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.AppendChildForLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlDocument*)>(&::System::Xml::XmlAttribute::AppendChildForLoad)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181cfe920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_LastNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlLinkedNode* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_LastNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_LastNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlLinkedNode*)>(&::System::Xml::XmlAttribute::set_LastNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.IsValidChildType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNodeType)>(&::System::Xml::XmlAttribute::IsValidChildType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cfed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_Specified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_Specified)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.InsertBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::InsertBefore)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181cfeca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.InsertAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::InsertAfter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181cfec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.RemoveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::RemoveChild)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cfef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.PrependChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::PrependChild)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cfeec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.AppendChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::AppendChild)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cfeaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_OwnerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlElement* (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_OwnerElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181cff3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.set_InnerXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::StringW)>(&::System::Xml::XmlAttribute::set_InnerXml)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cff580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.WriteTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlAttribute::WriteTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181cff150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.WriteContentTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlWriter*)>(&::System::Xml::XmlAttribute::WriteContentTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cff0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_BaseURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_BaseURI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cff310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.SetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlAttribute::*)(::System::Xml::XmlNode*)>(&::System::Xml::XmlAttribute::SetParent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_XmlSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_XmlSpace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181cff4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlAttribute.get_XmlLang
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::XmlAttribute::*)()>(&::System::Xml::XmlAttribute::get_XmlLang)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181cff440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                    {::i2c::class_of<::System::Xml::XmlAttribute*>(), 54}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlName*& System::Xml::XmlAttribute::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::System::Xml::XmlName* const& System::Xml::XmlAttribute::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Xml::XmlAttribute::__cordl_internal_set_name(::System::Xml::XmlName*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::System::Xml::XmlLinkedNode*& System::Xml::XmlAttribute::__cordl_internal_get_lastChild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChild;
}
constexpr ::System::Xml::XmlLinkedNode* const& System::Xml::XmlAttribute::__cordl_internal_get_lastChild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChild;
}
constexpr void System::Xml::XmlAttribute::__cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastChild = value;
}
inline void System::Xml::XmlAttribute::_ctor(::System::Xml::XmlName*  name, ::System::Xml::XmlDocument*  doc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::XmlName*>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, doc);
}
inline int32_t System::Xml::XmlAttribute::get_LocalNameHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"get_LocalNameHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::_ctor(::StringW  prefix, ::StringW  localName, ::StringW  namespaceURI, ::System::Xml::XmlDocument*  doc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlDocument*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, localName, namespaceURI, doc);
}
inline ::System::Xml::XmlName* System::Xml::XmlAttribute::get_XmlName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"get_XmlName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName*>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_XmlName(::System::Xml::XmlName*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"set_XmlName", {}, {::i2c::type_of<::System::Xml::XmlName*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::CloneNode(bool  deep)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, deep);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::get_ParentNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_NamespaceURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_Prefix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_Prefix(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlAttribute::get_NodeType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlAttribute::get_OwnerDocument()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_Value(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlAttribute::get_SchemaInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_InnerText(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlAttribute::PrepareOwnerElementInElementIdAttrMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"PrepareOwnerElementInElementIdAttrMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::ResetOwnerElementInElementIdAttrMap(::StringW  oldInnerText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::XmlAttribute*>(),
                        {"ResetOwnerElementInElementIdAttrMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldInnerText);
}
inline bool System::Xml::XmlAttribute::get_IsContainer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::AppendChildForLoad(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlDocument*  doc)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild, doc);
}
inline ::System::Xml::XmlLinkedNode* System::Xml::XmlAttribute::get_LastNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlLinkedNode*>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_LastNode(::System::Xml::XmlLinkedNode*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::XmlAttribute::IsValidChildType(::System::Xml::XmlNodeType  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Xml::XmlAttribute::get_Specified()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::InsertBefore(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild, refChild);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::InsertAfter(::System::Xml::XmlNode*  newChild, ::System::Xml::XmlNode*  refChild)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild, refChild);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::RemoveChild(::System::Xml::XmlNode*  oldChild)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, oldChild);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::PrependChild(::System::Xml::XmlNode*  newChild)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild);
}
inline ::System::Xml::XmlNode* System::Xml::XmlAttribute::AppendChild(::System::Xml::XmlNode*  newChild)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, newChild);
}
inline ::System::Xml::XmlElement* System::Xml::XmlAttribute::get_OwnerElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::set_InnerXml(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlAttribute::WriteTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void System::Xml::XmlAttribute::WriteContentTo(::System::Xml::XmlWriter*  w)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline ::StringW System::Xml::XmlAttribute::get_BaseURI()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::XmlAttribute::SetParent(::System::Xml::XmlNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::System::Xml::XmlSpace System::Xml::XmlAttribute::get_XmlSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlAttribute::get_XmlLang()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::XmlAttribute*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttribute::New_ctor(::System::Xml::XmlName*  name, ::System::Xml::XmlDocument*  doc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAttribute*>(name, doc));
}
inline ::System::Xml::XmlAttribute* System::Xml::XmlAttribute::New_ctor(::StringW  prefix, ::StringW  localName, ::StringW  namespaceURI, ::System::Xml::XmlDocument*  doc)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlAttribute*>(prefix, localName, namespaceURI, doc));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlAttribute::XmlAttribute()   {
}
