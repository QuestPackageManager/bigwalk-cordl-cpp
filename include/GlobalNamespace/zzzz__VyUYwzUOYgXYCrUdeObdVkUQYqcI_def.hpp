#pragma once
// IWYU pragma private; include "GlobalNamespace/VyUYwzUOYgXYCrUdeObdVkUQYqcI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(VyUYwzUOYgXYCrUdeObdVkUQYqcI)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class VyUYwzUOYgXYCrUdeObdVkUQYqcI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VyUYwzUOYgXYCrUdeObdVkUQYqcI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VyUYwzUOYgXYCrUdeObdVkUQYqcI*, "", "VyUYwzUOYgXYCrUdeObdVkUQYqcI");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: VyUYwzUOYgXYCrUdeObdVkUQYqcI
class CORDL_TYPE VyUYwzUOYgXYCrUdeObdVkUQYqcI : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::VyUYwzUOYgXYCrUdeObdVkUQYqcI* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VyUYwzUOYgXYCrUdeObdVkUQYqcI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VyUYwzUOYgXYCrUdeObdVkUQYqcI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VyUYwzUOYgXYCrUdeObdVkUQYqcI(VyUYwzUOYgXYCrUdeObdVkUQYqcI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VyUYwzUOYgXYCrUdeObdVkUQYqcI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VyUYwzUOYgXYCrUdeObdVkUQYqcI(VyUYwzUOYgXYCrUdeObdVkUQYqcI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VyUYwzUOYgXYCrUdeObdVkUQYqcI) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
