#pragma once
// IWYU pragma private; include "Animancer/ICopyable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICopyable_1)
// Forward declare root types
namespace Animancer {
template<typename T>
class ICopyable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::ICopyable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::ICopyable_1, "Animancer", "ICopyable`1");
// Dependencies 
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.ICopyable`1<T>
class CORDL_TYPE ICopyable_1 {
public:
// Declarations
/// @brief Method CopyFrom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(T  copyFrom) ;

// Ctor Parameters [CppParam { name: "", ty: "ICopyable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICopyable_1(ICopyable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
