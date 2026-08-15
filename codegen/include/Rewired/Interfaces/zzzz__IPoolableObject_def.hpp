#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IPoolableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolableObject)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IPoolableObject;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IPoolableObject*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IPoolableObject*, "Rewired.Interfaces", "IPoolableObject");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IPoolableObject
class CORDL_TYPE IPoolableObject {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Return, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Return() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPoolableObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPoolableObject(IPoolableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
