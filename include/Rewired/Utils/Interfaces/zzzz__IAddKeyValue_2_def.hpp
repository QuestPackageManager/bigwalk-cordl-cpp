#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IAddKeyValue_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAddKeyValue_2)
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename TKey,typename TValue>
class IAddKeyValue_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IAddKeyValue_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IAddKeyValue_2, "Rewired.Utils.Interfaces", "IAddKeyValue`2");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IAddKeyValue`2<TKey,TValue>
class CORDL_TYPE IAddKeyValue_2 {
public:
// Declarations
/// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Add(TKey  key, TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAddKeyValue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAddKeyValue_2(IAddKeyValue_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3080};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
