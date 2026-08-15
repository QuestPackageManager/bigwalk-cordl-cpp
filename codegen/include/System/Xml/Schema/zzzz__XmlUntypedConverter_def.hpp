#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlUntypedConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUntypedConverter)
namespace System::Xml::Schema {
class XmlValueConverter;
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
class XmlUntypedConverter;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlUntypedConverter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlUntypedConverter*, "System.Xml.Schema", "XmlUntypedConverter");
// Dependencies System.Xml.Schema.XmlListConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlUntypedConverter
class CORDL_TYPE XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter {
public:
// Declarations
/// @brief Field Untyped, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Untyped, put=setStaticF_Untyped)) ::System::Xml::Schema::XmlValueConverter*  Untyped;

/// @brief Field UntypedList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UntypedList, put=setStaticF_UntypedList)) ::System::Xml::Schema::XmlValueConverter*  UntypedList;

/// @brief Field allowListToList, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowListToList, put=__cordl_internal_set_allowListToList)) bool  allowListToList;

/// @brief Method ChangeListType, addr 0x181cbdd30, size 0x240, virtual true, abstract: false, final false
inline ::System::Object* ChangeListType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbe310, size 0x640, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbe950, size 0xe0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::DateTime  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbeb10, size 0xf0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Decimal  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbec00, size 0xd40, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType, addr 0x181cbe230, size 0xe0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(bool  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbe150, size 0xe0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(double_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbea30, size 0xe0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int32_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeType, addr 0x181cbe070, size 0xe0, virtual true, abstract: false, final false
inline ::System::Object* ChangeType(int64_t  value, ::System::Type*  destinationType) ;

/// @brief Method ChangeTypeWildcardDestination, addr 0x181cb2da0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardDestination(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeTypeWildcardSource, addr 0x181cbdf70, size 0x100, virtual false, abstract: false, final false
inline ::System::Object* ChangeTypeWildcardSource(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor() ;

static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList) ;

/// @brief Method SupportsType, addr 0x181cbf940, size 0x2d0, virtual false, abstract: false, final false
inline bool SupportsType(::System::Type*  clrType) ;

/// @brief Method ToBoolean, addr 0x181cb6130, size 0x30, virtual true, abstract: false, final false
inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x181cbfc10, size 0x180, virtual true, abstract: false, final false
inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToDateTime, addr 0x181cbff80, size 0x30, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(::StringW  value) ;

/// @brief Method ToDateTime, addr 0x181cbffb0, size 0x180, virtual true, abstract: false, final false
inline ::System::DateTime ToDateTime(::System::Object*  value) ;

/// @brief Method ToDateTimeOffset, addr 0x181cbff40, size 0x40, virtual true, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset(::StringW  value) ;

/// @brief Method ToDateTimeOffset, addr 0x181cbfd90, size 0x1b0, virtual true, abstract: false, final false
inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object*  value) ;

/// @brief Method ToDecimal, addr 0x181cc0130, size 0x40, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::StringW  value) ;

/// @brief Method ToDecimal, addr 0x181cc0170, size 0x1a0, virtual true, abstract: false, final false
inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x181cc0490, size 0x30, virtual true, abstract: false, final false
inline double_t ToDouble(::StringW  value) ;

/// @brief Method ToDouble, addr 0x181cc0310, size 0x180, virtual true, abstract: false, final false
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x181cc04c0, size 0x30, virtual true, abstract: false, final false
inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x181cc04f0, size 0x170, virtual true, abstract: false, final false
inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x181cc07d0, size 0x30, virtual true, abstract: false, final false
inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x181cc0660, size 0x170, virtual true, abstract: false, final false
inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x181cc0980, size 0x30, virtual true, abstract: false, final false
inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x181cc0800, size 0x180, virtual true, abstract: false, final false
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToString, addr 0x181cc1240, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(::System::DateTime  value) ;

/// @brief Method ToString, addr 0x181cc1250, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0x181cc09b0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x181cc09d0, size 0x850, virtual true, abstract: false, final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ToString, addr 0x181cb6310, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x181cc1220, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0x181cc1230, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0x181cbc180, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x181cbbf00, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString(int64_t  value) ;

constexpr bool const& __cordl_internal_get_allowListToList() const;

constexpr bool& __cordl_internal_get_allowListToList() ;

constexpr void __cordl_internal_set_allowListToList(bool  value) ;

/// @brief Method .ctor, addr 0x181cc1490, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181cc1420, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::XmlUntypedConverter*  atomicConverter, bool  allowListToList) ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Untyped() ;

static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_UntypedList() ;

static inline void setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter*  value) ;

static inline void setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlUntypedConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlUntypedConverter(XmlUntypedConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlUntypedConverter(XmlUntypedConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10209};

/// @brief Field allowListToList, offset: 0x30, size: 0x1, def value: None
 bool  ___allowListToList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlUntypedConverter, ___allowListToList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XmlUntypedConverter) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Schema
