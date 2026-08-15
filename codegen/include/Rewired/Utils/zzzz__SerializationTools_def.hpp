#pragma once
// IWYU pragma private; include "Rewired/Utils/SerializationTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SerializationTools)
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
class SerializationTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::SerializationTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::SerializationTools*, "Rewired.Utils", "SerializationTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.SerializationTools
class CORDL_TYPE SerializationTools : public ::System::Object {
public:
// Declarations
/// @brief Method CleanInvalidXmlChars, addr 0x18190d370, size 0x90, virtual false, abstract: false, final false
static inline ::StringW CleanInvalidXmlChars(::StringW  text) ;

/// @brief Method ReadXmlElement, addr 0x18190d400, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW ReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name) ;

/// @brief Method ReadXmlElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name) ;

/// @brief Method SerializeObjectToXmlString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW SerializeObjectToXmlString(T  obj) ;

/// @brief Method TryReadXmlElement, addr 0x18190d4c0, size 0xe0, virtual false, abstract: false, final false
static inline bool TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<::StringW>  outValue) ;

/// @brief Method TryReadXmlElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<T>  outValue) ;

/// @brief Method TryReadXmlElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryReadXmlElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<T>  outValue, T  defaultValue) ;

/// @brief Method TryReadXmlEndElement, addr 0x18190d5a0, size 0x30, virtual false, abstract: false, final false
static inline bool TryReadXmlEndElement(::System::Xml::XmlReader*  reader) ;

/// @brief Method TryReadXmlStartElement, addr 0x18190d5d0, size 0x80, virtual false, abstract: false, final false
static inline bool TryReadXmlStartElement(::System::Xml::XmlReader*  reader, ::StringW  name, ::by_ref<bool>  isEmpty) ;

/// @brief Method WriteXmlElement, addr 0x18190d650, size 0x110, virtual false, abstract: false, final false
static inline void WriteXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  name, ::System::Object*  value) ;

/// @brief Method WriteXmlElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  name, T  value) ;

/// @brief Method bHnNZqWctQQXidmEGahldChuyKHO, addr 0x18190d760, size 0x1600, virtual false, abstract: false, final false
static inline void bHnNZqWctQQXidmEGahldChuyKHO(::System::Xml::XmlWriter*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationTools(SerializationTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationTools(SerializationTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::SerializationTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
