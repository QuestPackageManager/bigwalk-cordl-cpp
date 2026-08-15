#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/Locker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Locker)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
struct Locker;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Utility::Locker);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::Locker, "Rewired.Utils.Classes.Utility", "Locker");
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Utility.Locker
struct CORDL_TYPE Locker {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181930270, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x1819302c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Locker() ;

// Ctor Parameters [CppParam { name: "rlLLBnZauRXPyFpTddKeTYyhdRpK", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr Locker(::System::Object*  rlLLBnZauRXPyFpTddKeTYyhdRpK) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field rlLLBnZauRXPyFpTddKeTYyhdRpK, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  rlLLBnZauRXPyFpTddKeTYyhdRpK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::Locker, rlLLBnZauRXPyFpTddKeTYyhdRpK) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::Locker) == 0x8, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
