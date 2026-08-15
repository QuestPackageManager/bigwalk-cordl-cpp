#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IReadOnlyList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyList_1)
namespace Rewired::Utils::Interfaces {
class IReadOnlyList;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename T>
class IReadOnlyList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IReadOnlyList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IReadOnlyList_1, "Rewired.Utils.Interfaces", "IReadOnlyList`1");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IReadOnlyList`1<T>
class CORDL_TYPE IReadOnlyList_1 {
public:
// Declarations
 __declspec(property(get=get_Item)) T  Item[];

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyList"
constexpr operator  ::Rewired::Utils::Interfaces::IReadOnlyList*() noexcept;

/// @brief Method Contains, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Contains(T  value) ;

/// @brief Method IndexOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IndexOf(T  value) ;

/// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyList"
constexpr ::Rewired::Utils::Interfaces::IReadOnlyList* i___Rewired__Utils__Interfaces__IReadOnlyList() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyList_1(IReadOnlyList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3074};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
