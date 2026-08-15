#pragma once
// IWYU pragma private; include "System/FixedBufferExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBufferExtensions)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class FixedBufferExtensions;
}
// Write type traits
MARK_REF_T(::System::FixedBufferExtensions*);
DEFINE_IL2CPP_CLASS(::System::FixedBufferExtensions*, "System", "FixedBufferExtensions");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.FixedBufferExtensions
class CORDL_TYPE FixedBufferExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method FixedBufferEqualsString, addr 0x181720fc0, size 0xa0, virtual false, abstract: false, final false
static inline bool FixedBufferEqualsString(::System::ReadOnlySpan_1<char16_t>  span, ::StringW  value) ;

/// @brief Method GetFixedBufferStringLength, addr 0x181721060, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetFixedBufferStringLength(::System::ReadOnlySpan_1<char16_t>  span) ;

/// @brief Method GetStringFromFixedBuffer, addr 0x181721090, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetStringFromFixedBuffer(::System::ReadOnlySpan_1<char16_t>  span) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedBufferExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedBufferExtensions(FixedBufferExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedBufferExtensions(FixedBufferExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::FixedBufferExtensions) == 0x10, "Size mismatch!");

} // namespace end def System
