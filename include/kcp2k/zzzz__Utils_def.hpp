#pragma once
// IWYU pragma private; include "kcp2k/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
// Forward declare root types
namespace kcp2k {
class Utils;
}
// Write type traits
MARK_REF_T(::kcp2k::Utils*);
DEFINE_IL2CPP_CLASS(::kcp2k::Utils*, "kcp2k", "Utils");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Method Clamp, addr 0x1814535b0, size 0x20, virtual false, abstract: false, final false
static inline int32_t Clamp(int32_t  value, int32_t  min, int32_t  max) ;

/// @brief Method Decode16U, addr 0x1814535d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t Decode16U(::ArrayW<uint8_t>  p, int32_t  offset, ::by_ref<uint16_t>  value) ;

/// @brief Method Decode32U, addr 0x181453610, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode32U(::ArrayW<uint8_t>  p, int32_t  offset, ::by_ref<uint32_t>  value) ;

/// @brief Method Decode8u, addr 0x181453660, size 0x30, virtual false, abstract: false, final false
static inline int32_t Decode8u(::ArrayW<uint8_t>  p, int32_t  offset, ::by_ref<uint8_t>  value) ;

/// @brief Method Encode16U, addr 0x181453690, size 0x30, virtual false, abstract: false, final false
static inline int32_t Encode16U(::ArrayW<uint8_t>  p, int32_t  offset, uint16_t  value) ;

/// @brief Method Encode32U, addr 0x1814536c0, size 0x50, virtual false, abstract: false, final false
static inline int32_t Encode32U(::ArrayW<uint8_t>  p, int32_t  offset, uint32_t  value) ;

/// @brief Method Encode8u, addr 0x181453710, size 0x30, virtual false, abstract: false, final false
static inline int32_t Encode8u(::ArrayW<uint8_t>  p, int32_t  offset, uint8_t  value) ;

/// @brief Method TimeDiff, addr 0x181453740, size 0x10, virtual false, abstract: false, final false
static inline int32_t TimeDiff(uint32_t  later, uint32_t  earlier) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::kcp2k::Utils) == 0x10, "Size mismatch!");

} // namespace end def kcp2k
