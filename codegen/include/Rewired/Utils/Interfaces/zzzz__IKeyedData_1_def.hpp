#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IKeyedData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyedData_1)
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename TKey>
class IKeyedData_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IKeyedData_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IKeyedData_1, "Rewired.Utils.Interfaces", "IKeyedData`1");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename TKey>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IKeyedData`1<TKey>
class CORDL_TYPE IKeyedData_1 {
public:
// Declarations
/// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline bool TryGetValue(TKey  key, ::by_ref<T>  value) ;

/// @brief Method TrySetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline bool TrySetValue(TKey  key, T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IKeyedData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKeyedData_1(IKeyedData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3072};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
