#pragma once
// IWYU pragma private; include "Steamworks/SteamAPI_CheckCallbackRegistered_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAPI_CheckCallbackRegistered_t)
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
namespace Steamworks {
class SteamAPI_CheckCallbackRegistered_t;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamAPI_CheckCallbackRegistered_t*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAPI_CheckCallbackRegistered_t*, "Steamworks", "SteamAPI_CheckCallbackRegistered_t");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamAPI_CheckCallbackRegistered_t
class CORDL_TYPE SteamAPI_CheckCallbackRegistered_t : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1805aae60, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  iCallbackNum, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(int32_t  iCallbackNum) ;

static inline ::Steamworks::SteamAPI_CheckCallbackRegistered_t* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAPI_CheckCallbackRegistered_t() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI_CheckCallbackRegistered_t", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAPI_CheckCallbackRegistered_t(SteamAPI_CheckCallbackRegistered_t && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI_CheckCallbackRegistered_t", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAPI_CheckCallbackRegistered_t(SteamAPI_CheckCallbackRegistered_t const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamAPI_CheckCallbackRegistered_t) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
