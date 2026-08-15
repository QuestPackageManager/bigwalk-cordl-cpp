#pragma once
// IWYU pragma private; include "Telepathy/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
// Forward declare root types
namespace Telepathy {
class Utils;
}
// Write type traits
MARK_REF_T(::Telepathy::Utils*);
DEFINE_IL2CPP_CLASS(::Telepathy::Utils*, "Telepathy", "Utils");
// Dependencies System.Object
namespace Telepathy {
// Is value type: false
// CS Name: Telepathy.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Method BytesToIntBigEndian, addr 0x181e5b4f0, size 0x40, virtual false, abstract: false, final false
static inline int32_t BytesToIntBigEndian(::ArrayW<uint8_t>  bytes) ;

/// @brief Method IntToBytesBigEndianNonAlloc, addr 0x181e5b530, size 0x9a0, virtual false, abstract: false, final false
static inline void IntToBytesBigEndianNonAlloc(int32_t  value, ::ArrayW<uint8_t>  bytes, int32_t  offset) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Telepathy::Utils) == 0x10, "Size mismatch!");

} // namespace end def Telepathy
