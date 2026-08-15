#pragma once
// IWYU pragma private; include "System/Xml/Schema/DurationFacetsChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(DurationFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class DurationFacetsChecker;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::DurationFacetsChecker*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::DurationFacetsChecker*, "System.Xml.Schema", "DurationFacetsChecker");
// Dependencies System.Xml.Schema.FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.DurationFacetsChecker
class CORDL_TYPE DurationFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief Method CheckValueFacets, addr 0x181d72aa0, size 0xd0, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Object*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x181d727d0, size 0x2d0, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::TimeSpan  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method MatchEnumeration, addr 0x181d72b70, size 0x60, virtual true, abstract: false, final false
inline bool MatchEnumeration(::System::Object*  value, ::System::Collections::ArrayList*  enumeration, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method MatchEnumeration, addr 0x181d72bd0, size 0xd0, virtual false, abstract: false, final false
inline bool MatchEnumeration(::System::TimeSpan  value, ::System::Collections::ArrayList*  enumeration) ;

static inline ::System::Xml::Schema::DurationFacetsChecker* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DurationFacetsChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DurationFacetsChecker(DurationFacetsChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DurationFacetsChecker(DurationFacetsChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::DurationFacetsChecker) == 0x10, "Size mismatch!");

} // namespace end def System::Xml::Schema
