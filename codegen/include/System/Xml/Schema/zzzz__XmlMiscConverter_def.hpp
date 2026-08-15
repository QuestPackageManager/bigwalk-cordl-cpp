#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlMiscConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlMiscConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlMiscConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlMiscConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlMiscConverter*, "System.Xml.Schema", "XmlMiscConverter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlMiscConverter
class CORDL_TYPE XmlMiscConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0x181cb8a50, size 0x320, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cb8d70, size 0x9e0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0x181cb2da0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0x181cb2e70, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method Create, addr 0x181cb9750, size 0x40, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlMiscConverter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToString, addr 0x181cb9790, size 0x430, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method .ctor, addr 0x181cb6320, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlMiscConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlMiscConverter(XmlMiscConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlMiscConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlMiscConverter(XmlMiscConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlMiscConverter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema
