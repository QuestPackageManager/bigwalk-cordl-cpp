#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IReadOnlyDictionaryEnumerator_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReadOnlyDictionaryEnumerator_2)
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename TKey,typename TValue>
class IReadOnlyDictionaryEnumerator_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IReadOnlyDictionaryEnumerator_2, "Rewired.Utils.Interfaces", "IReadOnlyDictionaryEnumerator`2");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IReadOnlyDictionaryEnumerator`2<TKey,TValue>
class CORDL_TYPE IReadOnlyDictionaryEnumerator_2 {
public:
// Declarations
 __declspec(property(get=get_Item)) TValue  Item[];

/// @brief Method ContainsKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

/// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue get_Item(TKey  key) ;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyDictionaryEnumerator_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyDictionaryEnumerator_2(IReadOnlyDictionaryEnumerator_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
