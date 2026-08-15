#pragma once
// IWYU pragma private; include "GlobalNamespace/Shuffler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Shuffler)
// Forward declare root types
namespace GlobalNamespace {
class Shuffler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Shuffler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Shuffler*, "", "Shuffler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Shuffler
class CORDL_TYPE Shuffler : public ::System::Object {
public:
// Declarations
/// @brief Method Shuffle, addr 0x1803eff80, size 0x70, virtual false, abstract: false, final false
static inline void Shuffle(::ArrayW<int32_t>  targetArray) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Shuffler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Shuffler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Shuffler(Shuffler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Shuffler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Shuffler(Shuffler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4967};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Shuffler) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
