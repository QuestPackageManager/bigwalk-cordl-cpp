#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IGettable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGettable_1)
// Forward declare root types
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::IGettable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::IGettable_1, "Epic.OnlineServices", "IGettable`1");
// Dependencies 
namespace Epic::OnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Epic.OnlineServices.IGettable`1<T>
class CORDL_TYPE IGettable_1 {
public:
// Declarations
/// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Get(::by_ref<T>  other) ;

// Ctor Parameters [CppParam { name: "", ty: "IGettable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGettable_1(IGettable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
