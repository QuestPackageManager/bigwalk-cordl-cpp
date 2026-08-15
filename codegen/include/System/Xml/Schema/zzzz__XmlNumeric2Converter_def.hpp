#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlNumeric2Converter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XmlNumeric2Converter)
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
class XmlNumeric2Converter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlNumeric2Converter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlNumeric2Converter*, "System.Xml.Schema", "XmlNumeric2Converter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlNumeric2Converter
class CORDL_TYPE XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Method ChangeType, addr 0x181cbc1d0, size 0x200, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbc3d0, size 0x4d0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbc8a0, size 0x210, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(double_t  value, ::System::Type*  destinationType) ;

/// @brief Method Create, addr 0x181cbcab0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::XmlNumeric2Converter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToDouble, addr 0x181cbcd40, size 0x40, virtual true, abstract: false, final false
inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToDouble, addr 0x181cbcaf0, size 0x250, virtual true, abstract: false, final false
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x181cbcd80, size 0x40, virtual true, abstract: false, final false
inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x181cbcdd0, size 0x270, virtual true, abstract: false, final false
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x181cbcdc0, size 0x10, virtual true, abstract: false, final false
inline float_t ToSingle(double_t  value) ;

/// @brief Method ToString, addr 0x181cbd080, size 0x230, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0x181cbd040, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0x181cbd2b0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString(float_t  value) ;

/// @brief Method .ctor, addr 0x181cb6320, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlNumeric2Converter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNumeric2Converter(XmlNumeric2Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNumeric2Converter(XmlNumeric2Converter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10204};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlNumeric2Converter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema
