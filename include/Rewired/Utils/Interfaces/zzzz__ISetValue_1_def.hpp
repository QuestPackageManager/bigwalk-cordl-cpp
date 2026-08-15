#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/ISetValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISetValue_1)
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename T>
class ISetValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::ISetValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::ISetValue_1, "Rewired.Utils.Interfaces", "ISetValue`1");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.ISetValue`1<T>
class CORDL_TYPE ISetValue_1 {
public:
// Declarations
/// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetValue(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISetValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISetValue_1(ISetValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
