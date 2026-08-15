#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IGettable_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IGettable_2)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices {
template<typename T,typename TEnum>
class IGettable_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::IGettable_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::IGettable_2, "Epic.OnlineServices", "IGettable`2");
// Dependencies 
namespace Epic::OnlineServices {
// cpp template
template<typename T,typename TEnum>
// Is value type: false
// CS Name: Epic.OnlineServices.IGettable`2<T,TEnum>
class CORDL_TYPE IGettable_2 {
public:
// Declarations
/// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Get(::by_ref<T>  other, TEnum  enumValue, ::System::Nullable_1<int32_t>  arrayLength) ;

// Ctor Parameters [CppParam { name: "", ty: "IGettable_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGettable_2(IGettable_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
