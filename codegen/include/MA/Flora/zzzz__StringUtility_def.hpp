#pragma once
// IWYU pragma private; include "MA/Flora/StringUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtility)
// Forward declare root types
namespace MA::Flora {
class StringUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::StringUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::StringUtility*, "MA.Flora", "StringUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.StringUtility
class CORDL_TYPE StringUtility : public ::System::Object {
public:
// Declarations
/// @brief Method FormatBytes, addr 0x18150d5d0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW FormatBytes(int64_t  bytes) ;

/// @brief Method FormatLargeNumber, addr 0x18150d6d0, size 0x100, virtual false, abstract: false, final false
static inline ::StringW FormatLargeNumber(int64_t  num) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringUtility(StringUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringUtility(StringUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::StringUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
