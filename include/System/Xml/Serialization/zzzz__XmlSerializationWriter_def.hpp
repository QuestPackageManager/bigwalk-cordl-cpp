#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlSerializationGeneratedCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationWriter)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlSerializationWriteCallback;
}
namespace System::Xml::Serialization {
class XmlSerializationWriter_WriteCallbackInfo;
}
namespace System::Xml::Serialization {
class XmlSerializerNamespaces;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializationWriter;
}
namespace System::Xml::Serialization {
class XmlSerializationWriter_WriteCallbackInfo;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlSerializationWriter*);
MARK_REF_T(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationWriter*, "System.Xml.Serialization", "XmlSerializationWriter");
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationWriter/WriteCallbackInfo");
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
class CORDL_TYPE XmlSerializationWriter_WriteCallbackInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callback, put=__cordl_internal_set_Callback)) ::System::Xml::Serialization::XmlSerializationWriteCallback*  Callback;

/// @brief Field Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::System::Type*  Type;

/// @brief Field TypeName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeName, put=__cordl_internal_set_TypeName)) ::StringW  TypeName;

/// @brief Field TypeNs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypeNs, put=__cordl_internal_set_TypeNs)) ::StringW  TypeNs;

static inline ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo* New_ctor() ;

constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback* const& __cordl_internal_get_Callback() const;

constexpr ::System::Xml::Serialization::XmlSerializationWriteCallback*& __cordl_internal_get_Callback() ;

constexpr ::System::Type* const& __cordl_internal_get_Type() const;

constexpr ::System::Type*& __cordl_internal_get_Type() ;

constexpr ::StringW const& __cordl_internal_get_TypeName() const;

constexpr ::StringW& __cordl_internal_get_TypeName() ;

constexpr ::StringW const& __cordl_internal_get_TypeNs() const;

constexpr ::StringW& __cordl_internal_get_TypeNs() ;

constexpr void __cordl_internal_set_Callback(::System::Xml::Serialization::XmlSerializationWriteCallback*  value) ;

constexpr void __cordl_internal_set_Type(::System::Type*  value) ;

constexpr void __cordl_internal_set_TypeName(::StringW  value) ;

constexpr void __cordl_internal_set_TypeNs(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSerializationWriter_WriteCallbackInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter_WriteCallbackInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSerializationWriter_WriteCallbackInfo(XmlSerializationWriter_WriteCallbackInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter_WriteCallbackInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSerializationWriter_WriteCallbackInfo(XmlSerializationWriter_WriteCallbackInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9905};

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___Type;

/// @brief Field TypeName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___TypeName;

/// @brief Field TypeNs, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TypeNs;

/// @brief Field Callback, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Serialization::XmlSerializationWriteCallback*  ___Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___TypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___TypeNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo, ___Callback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def System::Xml::Serialization
// Dependencies System.Xml.Serialization.XmlSerializationGeneratedCode
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializationWriter
class CORDL_TYPE XmlSerializationWriter : public ::System::Xml::Serialization::XmlSerializationGeneratedCode {
public:
// Declarations
using WriteCallbackInfo = ::System::Xml::Serialization::XmlSerializationWriter_WriteCallbackInfo;

 __declspec(property(get=get_Writer)) ::System::Xml::XmlWriter*  Writer;

/// @brief Field callbacks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Hashtable*  callbacks;

/// @brief Field idGenerator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_idGenerator, put=__cordl_internal_set_idGenerator)) ::System::Runtime::Serialization::ObjectIDGenerator*  idGenerator;

/// @brief Field namespaces, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_namespaces, put=__cordl_internal_set_namespaces)) ::System::Collections::ArrayList*  namespaces;

/// @brief Field qnameCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_qnameCount, put=__cordl_internal_set_qnameCount)) int32_t  qnameCount;

/// @brief Field referencedElements, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_referencedElements, put=__cordl_internal_set_referencedElements)) ::System::Collections::Queue*  referencedElements;

/// @brief Field serializedObjects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedObjects, put=__cordl_internal_set_serializedObjects)) ::System::Collections::Hashtable*  serializedObjects;

/// @brief Field topLevelElement, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_topLevelElement, put=__cordl_internal_set_topLevelElement)) bool  topLevelElement;

/// @brief Field writer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::Xml::XmlWriter*  writer;

/// @brief Method AddWriteCallback, addr 0x181d4be20, size 0xe0, virtual false, abstract: false, final false
inline void AddWriteCallback(::System::Type*  type, ::StringW  typeName, ::StringW  typeNs, ::System::Xml::Serialization::XmlSerializationWriteCallback*  callback) ;

/// @brief Method AlreadyQueued, addr 0x181d4bf00, size 0x40, virtual false, abstract: false, final false
inline bool AlreadyQueued(::System::Object*  ob) ;

/// @brief Method CheckReferenceQueue, addr 0x181d4bf40, size 0x60, virtual false, abstract: false, final false
inline void CheckReferenceQueue() ;

/// @brief Method CreateUnknownAnyElementException, addr 0x181d4bfa0, size 0x50, virtual false, abstract: false, final false
inline ::System::Exception* CreateUnknownAnyElementException(::StringW  name, ::StringW  ns) ;

/// @brief Method CreateUnknownTypeException, addr 0x181d4bff0, size 0x60, virtual false, abstract: false, final false
inline ::System::Exception* CreateUnknownTypeException(::System::Object*  o) ;

/// @brief Method CreateUnknownTypeException, addr 0x181d4c050, size 0x50, virtual false, abstract: false, final false
inline ::System::Exception* CreateUnknownTypeException(::System::Type*  type) ;

/// @brief Method FromXmlQualifiedName, addr 0x181d4c0a0, size 0x90, virtual false, abstract: false, final false
inline ::StringW FromXmlQualifiedName(::System::Xml::XmlQualifiedName*  xmlQualifiedName) ;

/// @brief Method GetId, addr 0x181d4c130, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetId(::System::Object*  o, bool  addToReferencesList) ;

/// @brief Method GetNamespacePrefix, addr 0x181d4c1f0, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetNamespacePrefix(::StringW  ns) ;

/// @brief Method GetQualifiedName, addr 0x181d4c2a0, size 0x120, virtual false, abstract: false, final false
inline ::StringW GetQualifiedName(::StringW  name, ::StringW  ns) ;

/// @brief Method InitCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitCallbacks() ;

/// @brief Method Initialize, addr 0x181d4c3c0, size 0x100, virtual false, abstract: false, final false
inline void Initialize(::System::Xml::XmlWriter*  writer, ::System::Xml::Serialization::XmlSerializerNamespaces*  nss) ;

/// @brief Method IsPrimitiveArray, addr 0x181d4c4c0, size 0x90, virtual false, abstract: false, final false
inline bool IsPrimitiveArray(::System::Xml::Serialization::TypeData*  td) ;

static inline ::System::Xml::Serialization::XmlSerializationWriter* New_ctor() ;

/// @brief Method TopLevelElement, addr 0x181d4c550, size 0x10, virtual false, abstract: false, final false
inline void TopLevelElement() ;

/// @brief Method WriteArray, addr 0x181d4c560, size 0x220, virtual false, abstract: false, final false
inline void WriteArray(::System::Object*  o, ::System::Xml::Serialization::TypeData*  td) ;

/// @brief Method WriteAttribute, addr 0x181d4c7a0, size 0x30, virtual false, abstract: false, final false
inline void WriteAttribute(::StringW  localName, ::StringW  ns, ::StringW  value) ;

/// @brief Method WriteAttribute, addr 0x181d4c780, size 0x20, virtual false, abstract: false, final false
inline void WriteAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns, ::StringW  value) ;

/// @brief Method WriteElementEncoded, addr 0x181d4c7d0, size 0x1e0, virtual false, abstract: false, final false
inline void WriteElementEncoded(::System::Xml::XmlNode*  node, ::StringW  name, ::StringW  ns, bool  isNullable, bool  any) ;

/// @brief Method WriteElementLiteral, addr 0x181d4c9b0, size 0x1e0, virtual false, abstract: false, final false
inline void WriteElementLiteral(::System::Xml::XmlNode*  node, ::StringW  name, ::StringW  ns, bool  isNullable, bool  any) ;

/// @brief Method WriteElementQualifiedName, addr 0x181d4ccd0, size 0x20, virtual false, abstract: false, final false
inline void WriteElementQualifiedName(::StringW  localName, ::StringW  ns, ::System::Xml::XmlQualifiedName*  value) ;

/// @brief Method WriteElementQualifiedName, addr 0x181d4cb90, size 0x140, virtual false, abstract: false, final false
inline void WriteElementQualifiedName(::StringW  localName, ::StringW  ns, ::System::Xml::XmlQualifiedName*  value, ::System::Xml::XmlQualifiedName*  xsiType) ;

/// @brief Method WriteElementString, addr 0x181d4ccf0, size 0x20, virtual false, abstract: false, final false
inline void WriteElementString(::StringW  localName, ::StringW  ns, ::StringW  value) ;

/// @brief Method WriteElementString, addr 0x181d4cd10, size 0x170, virtual false, abstract: false, final false
inline void WriteElementString(::StringW  localName, ::StringW  ns, ::StringW  value, ::System::Xml::XmlQualifiedName*  xsiType) ;

/// @brief Method WriteEndElement, addr 0x181d4ced0, size 0x20, virtual false, abstract: false, final false
inline void WriteEndElement() ;

/// @brief Method WriteEndElement, addr 0x181d4ce80, size 0x50, virtual false, abstract: false, final false
inline void WriteEndElement(::System::Object*  o) ;

/// @brief Method WriteNamespaceDeclarations, addr 0x181d4cef0, size 0x300, virtual false, abstract: false, final false
inline void WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces*  xmlns) ;

/// @brief Method WriteNullTagEncoded, addr 0x181d4d1f0, size 0x60, virtual false, abstract: false, final false
inline void WriteNullTagEncoded(::StringW  name, ::StringW  ns) ;

/// @brief Method WriteNullTagLiteral, addr 0x181d4d250, size 0x70, virtual false, abstract: false, final false
inline void WriteNullTagLiteral(::StringW  name, ::StringW  ns) ;

/// @brief Method WriteNullableQualifiedNameEncoded, addr 0x181d4d2c0, size 0xc0, virtual false, abstract: false, final false
inline void WriteNullableQualifiedNameEncoded(::StringW  name, ::StringW  ns, ::System::Xml::XmlQualifiedName*  value, ::System::Xml::XmlQualifiedName*  xsiType) ;

/// @brief Method WriteNullableQualifiedNameLiteral, addr 0x181d4d380, size 0xd0, virtual false, abstract: false, final false
inline void WriteNullableQualifiedNameLiteral(::StringW  name, ::StringW  ns, ::System::Xml::XmlQualifiedName*  value) ;

/// @brief Method WriteNullableStringEncoded, addr 0x181d4d450, size 0x70, virtual false, abstract: false, final false
inline void WriteNullableStringEncoded(::StringW  name, ::StringW  ns, ::StringW  value, ::System::Xml::XmlQualifiedName*  xsiType) ;

/// @brief Method WriteNullableStringLiteral, addr 0x181d4d4c0, size 0x90, virtual false, abstract: false, final false
inline void WriteNullableStringLiteral(::StringW  name, ::StringW  ns, ::StringW  value) ;

/// @brief Method WritePotentiallyReferencingElement, addr 0x181d4d550, size 0x4a0, virtual false, abstract: false, final false
inline void WritePotentiallyReferencingElement(::StringW  n, ::StringW  ns, ::System::Object*  o, ::System::Type*  ambientType, bool  suppressReference, bool  isNullable) ;

/// @brief Method WriteReferencedElements, addr 0x181d4d9f0, size 0x280, virtual false, abstract: false, final false
inline void WriteReferencedElements() ;

/// @brief Method WriteReferencingElement, addr 0x181d4dc70, size 0x1a0, virtual false, abstract: false, final false
inline void WriteReferencingElement(::StringW  n, ::StringW  ns, ::System::Object*  o, bool  isNullable) ;

/// @brief Method WriteSerializable, addr 0x181d4df20, size 0x100, virtual false, abstract: false, final false
inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable*  serializable, ::StringW  name, ::StringW  ns, bool  isNullable) ;

/// @brief Method WriteSerializable, addr 0x181d4de10, size 0x110, virtual false, abstract: false, final false
inline void WriteSerializable(::System::Xml::Serialization::IXmlSerializable*  serializable, ::StringW  name, ::StringW  ns, bool  isNullable, bool  wrapped) ;

/// @brief Method WriteStartDocument, addr 0x181d4e020, size 0x50, virtual false, abstract: false, final false
inline void WriteStartDocument() ;

/// @brief Method WriteStartElement, addr 0x181d4e0a0, size 0x30, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  name, ::StringW  ns) ;

/// @brief Method WriteStartElement, addr 0x181d4e5b0, size 0x30, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  name, ::StringW  ns, ::System::Object*  o) ;

/// @brief Method WriteStartElement, addr 0x181d4e580, size 0x30, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  name, ::StringW  ns, ::System::Object*  o, bool  writePrefixed) ;

/// @brief Method WriteStartElement, addr 0x181d4e0d0, size 0x4b0, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  name, ::StringW  ns, ::System::Object*  o, bool  writePrefixed, ::System::Collections::ICollection*  namespaces) ;

/// @brief Method WriteStartElement, addr 0x181d4e070, size 0x30, virtual false, abstract: false, final false
inline void WriteStartElement(::StringW  name, ::StringW  ns, bool  writePrefixed) ;

/// @brief Method WriteTypedPrimitive, addr 0x181d4e5e0, size 0x2a0, virtual false, abstract: false, final false
inline void WriteTypedPrimitive(::StringW  name, ::StringW  ns, ::System::Object*  o, bool  xsiType) ;

/// @brief Method WriteValue, addr 0x181d4e880, size 0x20, virtual false, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteXmlAttribute, addr 0x181d4e8a0, size 0x260, virtual false, abstract: false, final false
inline void WriteXmlAttribute(::System::Xml::XmlNode*  node, ::System::Object*  container) ;

/// @brief Method WriteXmlNode, addr 0x181d4eb00, size 0xa0, virtual false, abstract: false, final false
inline void WriteXmlNode(::System::Xml::XmlNode*  node) ;

/// @brief Method WriteXsiType, addr 0x181d4eba0, size 0xa0, virtual false, abstract: false, final false
inline void WriteXsiType(::StringW  name, ::StringW  ns) ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_callbacks() ;

constexpr ::System::Runtime::Serialization::ObjectIDGenerator* const& __cordl_internal_get_idGenerator() const;

constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& __cordl_internal_get_idGenerator() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_namespaces() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_namespaces() ;

constexpr int32_t const& __cordl_internal_get_qnameCount() const;

constexpr int32_t& __cordl_internal_get_qnameCount() ;

constexpr ::System::Collections::Queue* const& __cordl_internal_get_referencedElements() const;

constexpr ::System::Collections::Queue*& __cordl_internal_get_referencedElements() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_serializedObjects() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_serializedObjects() ;

constexpr bool const& __cordl_internal_get_topLevelElement() const;

constexpr bool& __cordl_internal_get_topLevelElement() ;

constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::Xml::XmlWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator*  value) ;

constexpr void __cordl_internal_set_namespaces(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_qnameCount(int32_t  value) ;

constexpr void __cordl_internal_set_referencedElements(::System::Collections::Queue*  value) ;

constexpr void __cordl_internal_set_serializedObjects(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_topLevelElement(bool  value) ;

constexpr void __cordl_internal_set_writer(::System::Xml::XmlWriter*  value) ;

/// @brief Method .ctor, addr 0x181d4ec40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Writer, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Xml::XmlWriter* get_Writer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSerializationWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSerializationWriter(XmlSerializationWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSerializationWriter(XmlSerializationWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9906};

/// @brief Field idGenerator, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::Serialization::ObjectIDGenerator*  ___idGenerator;

/// @brief Field qnameCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___qnameCount;

/// @brief Field topLevelElement, offset: 0x1c, size: 0x1, def value: None
 bool  ___topLevelElement;

/// @brief Field namespaces, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___namespaces;

/// @brief Field writer, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::XmlWriter*  ___writer;

/// @brief Field referencedElements, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Queue*  ___referencedElements;

/// @brief Field callbacks, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___callbacks;

/// @brief Field serializedObjects, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___serializedObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___idGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___qnameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___topLevelElement) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___namespaces) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___writer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___referencedElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___callbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriter, ___serializedObjects) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlSerializationWriter) == 0x48, "Size mismatch!");

} // namespace end def System::Xml::Serialization
