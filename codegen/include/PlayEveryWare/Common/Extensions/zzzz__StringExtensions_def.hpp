#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/StringExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringExtensions)
// Forward declare root types
namespace PlayEveryWare::Common::Extensions {
class StringExtensions;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::Common::Extensions::StringExtensions*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::Common::Extensions::StringExtensions*, "PlayEveryWare.Common.Extensions", "StringExtensions");
// Dependencies System.Object
namespace PlayEveryWare::Common::Extensions {
// Is value type: false
// CS Name: PlayEveryWare.Common.Extensions.StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ToUlong, addr 0x180546940, size 0x30, virtual false, abstract: false, final false
static inline uint64_t ToUlong(::StringW  value, uint64_t  defaultValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExtensions(StringExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExtensions(StringExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::Common::Extensions::StringExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::Common::Extensions
