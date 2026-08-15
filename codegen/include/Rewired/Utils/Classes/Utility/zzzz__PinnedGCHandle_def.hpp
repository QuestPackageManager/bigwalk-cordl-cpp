#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/PinnedGCHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PinnedGCHandle)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
struct PinnedGCHandle;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Utility::PinnedGCHandle);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::PinnedGCHandle, "Rewired.Utils.Classes.Utility", "PinnedGCHandle");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace Rewired::Utils::Classes::Utility {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Utility.PinnedGCHandle
struct CORDL_TYPE PinnedGCHandle {
public:
// Declarations
 __declspec(property(get=get_Pointer)) ::System::IntPtr  Pointer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181930d60, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x181930d90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Pointer, addr 0x181930dd0, size 0x40, virtual false, abstract: false, final false
inline ::System::IntPtr get_Pointer() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x181930e10, size 0x30, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Utility::PinnedGCHandle  handle) ;

// Ctor Parameters []
// @brief default ctor
constexpr PinnedGCHandle() ;

// Ctor Parameters [CppParam { name: "JsAFzVYDzEMjIXkzTYJJWopfYjDN", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr PinnedGCHandle(::System::Runtime::InteropServices::GCHandle  JsAFzVYDzEMjIXkzTYJJWopfYjDN) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field JsAFzVYDzEMjIXkzTYJJWopfYjDN, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  JsAFzVYDzEMjIXkzTYJJWopfYjDN;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::PinnedGCHandle, JsAFzVYDzEMjIXkzTYJJWopfYjDN) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::PinnedGCHandle) == 0x8, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
