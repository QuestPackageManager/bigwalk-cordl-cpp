#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IAddValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAddValue_1)
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename TValue>
class IAddValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IAddValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IAddValue_1, "Rewired.Utils.Interfaces", "IAddValue`1");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IAddValue`1<TValue>
class CORDL_TYPE IAddValue_1 {
public:
// Declarations
/// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Add(TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAddValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAddValue_1(IAddValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3079};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
