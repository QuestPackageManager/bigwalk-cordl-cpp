#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IGetSetValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGetSetValue_1)
namespace Rewired::Utils::Interfaces {
template<typename T>
class IGetValue_1;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class ISetValue_1;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
template<typename T>
class IGetSetValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Interfaces::IGetSetValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Interfaces::IGetSetValue_1, "Rewired.Utils.Interfaces", "IGetSetValue`1");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IGetSetValue`1<T>
class CORDL_TYPE IGetSetValue_1 {
public:
// Declarations
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::IGetValue_1<T>*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
constexpr operator  ::Rewired::Utils::Interfaces::ISetValue_1<T>*() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IGetValue_1<T>"
constexpr ::Rewired::Utils::Interfaces::IGetValue_1<T>* i___Rewired__Utils__Interfaces__IGetValue_1_T_() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::ISetValue_1<T>"
constexpr ::Rewired::Utils::Interfaces::ISetValue_1<T>* i___Rewired__Utils__Interfaces__ISetValue_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGetSetValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGetSetValue_1(IGetSetValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3083};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
