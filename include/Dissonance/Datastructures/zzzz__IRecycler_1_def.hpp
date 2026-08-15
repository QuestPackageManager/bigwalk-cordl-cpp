#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/IRecycler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRecycler_1)
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class IRecycler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::IRecycler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::IRecycler_1, "Dissonance.Datastructures", "IRecycler`1");
// Dependencies 
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.IRecycler`1<T>
class CORDL_TYPE IRecycler_1 {
public:
// Declarations
/// @brief Method Recycle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Recycle(T  item) ;

// Ctor Parameters [CppParam { name: "", ty: "IRecycler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRecycler_1(IRecycler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures
