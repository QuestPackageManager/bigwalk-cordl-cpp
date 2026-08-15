#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/IPoolableObject_Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolableObject_Internal)
namespace Rewired::Interfaces {
class IPoolableObject;
}
namespace Rewired::Utils::Classes::Utility {
class IObjectPool;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class IPoolableObject_Internal;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::IPoolableObject_Internal*, "Rewired.Utils.Classes.Utility", "IPoolableObject_Internal");
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.IPoolableObject_Internal
class CORDL_TYPE IPoolableObject_Internal {
public:
// Declarations
 __declspec(property(get=get_pool, put=set_pool)) ::Rewired::Utils::Classes::Utility::IObjectPool*  pool;

/// @brief Convert operator to "::Rewired::Interfaces::IPoolableObject"
constexpr operator  ::Rewired::Interfaces::IPoolableObject*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method get_pool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::IObjectPool* get_pool() ;

/// @brief Convert to "::Rewired::Interfaces::IPoolableObject"
constexpr ::Rewired::Interfaces::IPoolableObject* i___Rewired__Interfaces__IPoolableObject() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_pool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_pool(::Rewired::Utils::Classes::Utility::IObjectPool*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPoolableObject_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPoolableObject_Internal(IPoolableObject_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility
