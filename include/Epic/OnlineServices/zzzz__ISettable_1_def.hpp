#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ISettable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISettable_1)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Epic::OnlineServices::ISettable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Epic::OnlineServices::ISettable_1, "Epic.OnlineServices", "ISettable`1");
// Dependencies 
namespace Epic::OnlineServices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Epic.OnlineServices.ISettable`1<T>
class CORDL_TYPE ISettable_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Set, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Set(::by_ref<T>  other) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISettable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISettable_1(ISettable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
