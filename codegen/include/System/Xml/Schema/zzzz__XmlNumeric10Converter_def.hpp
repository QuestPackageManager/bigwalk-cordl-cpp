#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlNumeric10Converter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNumeric10Converter)
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
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric10Converter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlNumeric10Converter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlNumeric10Converter
class CORDL_TYPE XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0x181cbae50, size 0x250, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbb2d0, size 0x2c0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Decimal  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cba150, size 0xac0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbb0a0, size 0x230, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int32_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbac10, size 0x240, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int64_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0x181cb9bc0, size 0x300, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0x181cb9ec0, size 0x290, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method Create, addr 0x181cbb590, size 0x40, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToDecimal, addr 0x181cbb890, size 0x50, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::StringW  value) ;

/// @brief Method ToDecimal, addr 0x181cbb5d0, size 0x2c0, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x181cbb8f0, size 0x60, virtual true, abstract: false, final false
inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x181cbb950, size 0x2a0, virtual true, abstract: false, final false
inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x181cbb8e0, size 0x10, virtual true, abstract: false, final false
inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt64, addr 0x181cbbbf0, size 0x60, virtual true, abstract: false, final false
inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x181cbbc50, size 0x2a0, virtual true, abstract: false, final false
inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x181cbbef0, size 0x10, virtual true, abstract: false, final false
inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToString, addr 0x181cbc190, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x181cbbf10, size 0x270, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0x181cbc180, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x181cbbf00, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(int64_t  value) ;

/// @brief Method .ctor, addr 0x181cb6320, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlNumeric10Converter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNumeric10Converter(XmlNumeric10Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNumeric10Converter(XmlNumeric10Converter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10203};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlNumeric10Converter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema
