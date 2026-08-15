#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonConvert)
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Enum;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonConvert*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
// Declarations
/// @brief Field False, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_False, put=setStaticF_False)) ::StringW  False;

/// @brief Field NaN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NaN, put=setStaticF_NaN)) ::StringW  NaN;

/// @brief Field NegativeInfinity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NegativeInfinity, put=setStaticF_NegativeInfinity)) ::StringW  NegativeInfinity;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::StringW  Null;

/// @brief Field PositiveInfinity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PositiveInfinity, put=setStaticF_PositiveInfinity)) ::StringW  PositiveInfinity;

/// @brief Field True, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_True, put=setStaticF_True)) ::StringW  True;

/// @brief Field Undefined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Undefined, put=setStaticF_Undefined)) ::StringW  Undefined;

/// @brief Field <DefaultSettings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DefaultSettings_k__BackingField, put=setStaticF__DefaultSettings_k__BackingField)) ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  _DefaultSettings_k__BackingField;

/// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeAnonymousType(::StringW  value, T  anonymousTypeObject) ;

/// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeAnonymousType(::StringW  value, T  anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x18177db40, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value) ;

/// @brief Method DeserializeObject, addr 0x18177d9d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x18177db50, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type) ;

/// @brief Method DeserializeObject, addr 0x18177d910, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type, ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

/// @brief Method DeserializeObject, addr 0x18177d9e0, size 0x160, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value, ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeXNode, addr 0x18177de40, size 0x100, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value) ;

/// @brief Method DeserializeXNode, addr 0x18177dc50, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName) ;

/// @brief Method DeserializeXNode, addr 0x18177db60, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute) ;

/// @brief Method DeserializeXNode, addr 0x18177dd40, size 0x100, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute, bool  encodeSpecialCharacters) ;

/// @brief Method DeserializeXmlNode, addr 0x18177e130, size 0x100, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value) ;

/// @brief Method DeserializeXmlNode, addr 0x18177e230, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName) ;

/// @brief Method DeserializeXmlNode, addr 0x18177df40, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute) ;

/// @brief Method DeserializeXmlNode, addr 0x18177e030, size 0x100, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute, bool  encodeSpecialCharacters) ;

/// @brief Method EnsureDecimalPlace, addr 0x18177e3c0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(::StringW  text) ;

/// @brief Method EnsureDecimalPlace, addr 0x18177e320, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(double_t  value, ::StringW  text) ;

/// @brief Method EnsureFloatFormat, addr 0x18177e400, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW EnsureFloatFormat(double_t  value, ::StringW  text, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method PopulateObject, addr 0x18177e660, size 0x10, virtual false, abstract: false, final false
static inline void PopulateObject(::StringW  value, ::System::Object*  target) ;

/// @brief Method PopulateObject, addr 0x18177e4c0, size 0x1a0, virtual false, abstract: false, final false
static inline void PopulateObject(::StringW  value, ::System::Object*  target, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x18177e920, size 0x30, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value) ;

/// @brief Method SerializeObject, addr 0x18177e860, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

/// @brief Method SerializeObject, addr 0x18177e950, size 0x70, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeObject, addr 0x18177ea30, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*>  converters) ;

/// @brief Method SerializeObject, addr 0x18177e9c0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x18177eba0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x18177eb20, size 0x80, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x18177e820, size 0x40, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObjectInternal, addr 0x18177e670, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

/// @brief Method SerializeXNode, addr 0x18177ebd0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node) ;

/// @brief Method SerializeXNode, addr 0x18177ece0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeXNode, addr 0x18177ec50, size 0x90, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node, ::Newtonsoft::Json::Formatting  formatting, bool  omitRootObject) ;

/// @brief Method SerializeXmlNode, addr 0x18177ed60, size 0x70, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node) ;

/// @brief Method SerializeXmlNode, addr 0x18177edd0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeXmlNode, addr 0x18177ec50, size 0x90, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node, ::Newtonsoft::Json::Formatting  formatting, bool  omitRootObject) ;

/// @brief Method ToString, addr 0x18177fbd0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value) ;

/// @brief Method ToString, addr 0x18177f930, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter) ;

/// @brief Method ToString, addr 0x18177f8b0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method ToString, addr 0x181780080, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value) ;

/// @brief Method ToString, addr 0x18177fc80, size 0x150, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::Newtonsoft::Json::DateFormatHandling  format, ::Newtonsoft::Json::DateTimeZoneHandling  timeZoneHandling) ;

/// @brief Method ToString, addr 0x181780090, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0x18177fa60, size 0x170, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value, ::Newtonsoft::Json::DateFormatHandling  format) ;

/// @brief Method ToString, addr 0x18177ee80, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x181780220, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Enum*  value) ;

/// @brief Method ToString, addr 0x18177eee0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value) ;

/// @brief Method ToString, addr 0x1817800b0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x18177f000, size 0x8b0, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ToString, addr 0x18177fee0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value) ;

/// @brief Method ToString, addr 0x1817801a0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x18177fe60, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Uri*  value) ;

/// @brief Method ToString, addr 0x18177f9a0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Uri*  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x18177fc60, size 0x20, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x18177ef80, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0x181780030, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0x181780110, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method ToString, addr 0x18177fc10, size 0x50, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0x18177ff40, size 0x90, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method ToString, addr 0x18177fdd0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int16_t  value) ;

/// @brief Method ToString, addr 0x18177efd0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x181780000, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// @brief Method ToString, addr 0x18177ffd0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(int8_t  value) ;

/// @brief Method ToString, addr 0x18177fe00, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint16_t  value) ;

/// @brief Method ToString, addr 0x18177fe30, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint32_t  value) ;

/// @brief Method ToString, addr 0x18177ef50, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value) ;

/// @brief Method ToString, addr 0x18177fa30, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value) ;

/// @brief Method ToStringInternal, addr 0x18177ee50, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ToStringInternal(::System::Numerics::BigInteger  value) ;

static inline ::StringW getStaticF_False() ;

static inline ::StringW getStaticF_NaN() ;

static inline ::StringW getStaticF_NegativeInfinity() ;

static inline ::StringW getStaticF_Null() ;

static inline ::StringW getStaticF_PositiveInfinity() ;

static inline ::StringW getStaticF_True() ;

static inline ::StringW getStaticF_Undefined() ;

static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField() ;

/// @brief Method get_DefaultSettings, addr 0x1817803e0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings() ;

static inline void setStaticF_False(::StringW  value) ;

static inline void setStaticF_NaN(::StringW  value) ;

static inline void setStaticF_NegativeInfinity(::StringW  value) ;

static inline void setStaticF_Null(::StringW  value) ;

static inline void setStaticF_PositiveInfinity(::StringW  value) ;

static inline void setStaticF_True(::StringW  value) ;

static inline void setStaticF_Undefined(::StringW  value) ;

static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value) ;

/// @brief Method set_DefaultSettings, addr 0x181780400, size 0x30, virtual false, abstract: false, final false
static inline void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert(JsonConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert(JsonConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::JsonConvert) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json
