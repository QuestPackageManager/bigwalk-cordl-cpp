#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAnyConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAnyConverter)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System::Xml {
class IXmlNamespaceResolver;
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
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlAnyConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlAnyConverter*, "System.Xml.Schema", "XmlAnyConverter");
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlAnyConverter
class CORDL_TYPE XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief Field AnyAtomic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AnyAtomic, put=setStaticF_AnyAtomic)) ::System::Xml::Schema::XmlValueConverter*  AnyAtomic;

/// @brief Field Item, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Item, put=setStaticF_Item)) ::System::Xml::Schema::XmlValueConverter*  Item;

/// @brief Method ChangeType, addr 0x181cb31b0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cb33d0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::DateTime  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cb2f60, size 0x140, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Decimal  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cb35f0, size 0xfc0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cb32c0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(bool  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cb45b0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(double_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cb34e0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int32_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cb30a0, size 0x110, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int64_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0x181cb2da0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0x181cb2e70, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

static inline ::System::Xml::Schema::XmlAnyConverter* New_ctor(::System::Xml::Schema::XmlTypeCode  typeCode) ;

/// @brief Method ToBoolean, addr 0x181cb46c0, size 0x180, virtual true, abstract: false, final false
inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToDateTime, addr 0x181cb4a10, size 0x180, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(::System::Object*  value) ;

/// @brief Method ToDateTimeOffset, addr 0x181cb4840, size 0x1d0, virtual true, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object*  value) ;

/// @brief Method ToDecimal, addr 0x181cb4b90, size 0x1c0, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x181cb4d50, size 0x190, virtual true, abstract: false, final false
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x181cb4ee0, size 0x180, virtual true, abstract: false, final false
inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x181cb5060, size 0x180, virtual true, abstract: false, final false
inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToNavigator, addr 0x181cb51e0, size 0x70, virtual false, abstract: false, final false
inline ::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator*  nav) ;

/// @brief Method ToSingle, addr 0x181cb5250, size 0x1b0, virtual true, abstract: false, final false
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x181cb54b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlTypeCode  typeCode) ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_AnyAtomic() ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Item() ;

static inline void setStaticF_AnyAtomic(::System::Xml::Schema::XmlValueConverter*  value) ;

static inline void setStaticF_Item(::System::Xml::Schema::XmlValueConverter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlAnyConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAnyConverter(XmlAnyConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAnyConverter(XmlAnyConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlAnyConverter) == 0x28, "Size mismatch!");

} // namespace end def System::Xml::Schema
