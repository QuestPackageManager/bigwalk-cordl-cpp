#pragma once
// IWYU pragma private; include "GlobalNamespace/ConstantTimeRandom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantTimeRandom)
// Forward declare root types
namespace GlobalNamespace {
class ConstantTimeRandom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConstantTimeRandom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConstantTimeRandom*, "", "ConstantTimeRandom");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConstantTimeRandom
class CORDL_TYPE ConstantTimeRandom : public ::System::Object {
public:
// Declarations
/// @brief Method GetRandomInt, addr 0x18049d850, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetRandomInt(int32_t  index, int32_t  seed, int32_t  min, int32_t  max) ;

/// @brief Method GetRandomNumber, addr 0x18049d8e0, size 0x90, virtual false, abstract: false, final false
static inline double_t GetRandomNumber(int32_t  index, int32_t  seed) ;

/// @brief Method Hash, addr 0x18049d970, size 0x50, virtual false, abstract: false, final false
static inline uint64_t Hash(uint64_t  index, uint64_t  seed) ;

static inline ::GlobalNamespace::ConstantTimeRandom* New_ctor() ;

/// @brief Method SplitMix64, addr 0x18049d9c0, size 0x50, virtual false, abstract: false, final false
static inline uint64_t SplitMix64(uint64_t  z) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantTimeRandom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantTimeRandom", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantTimeRandom(ConstantTimeRandom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantTimeRandom", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantTimeRandom(ConstantTimeRandom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17587};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConstantTimeRandom) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
