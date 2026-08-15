#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/NotifyEventHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__GenericSafeHandle_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyEventHandle)
namespace PlayEveryWare::EpicOnlineServices {
class NotifyEventHandle_RemoveDelegate;
}
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
namespace PlayEveryWare::EpicOnlineServices {
class NotifyEventHandle;
}
namespace PlayEveryWare::EpicOnlineServices {
class NotifyEventHandle_RemoveDelegate;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle*, "PlayEveryWare.EpicOnlineServices", "NotifyEventHandle");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*, "PlayEveryWare.EpicOnlineServices", "NotifyEventHandle/RemoveDelegate");
// Dependencies System.MulticastDelegate
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.NotifyEventHandle/RemoveDelegate
class CORDL_TYPE NotifyEventHandle_RemoveDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180546360, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  aHandle, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(uint64_t  aHandle) ;

static inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotifyEventHandle_RemoveDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotifyEventHandle_RemoveDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotifyEventHandle_RemoveDelegate(NotifyEventHandle_RemoveDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotifyEventHandle_RemoveDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotifyEventHandle_RemoveDelegate(NotifyEventHandle_RemoveDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.GenericSafeHandle`1<HandleType>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.NotifyEventHandle
class CORDL_TYPE NotifyEventHandle : public ::PlayEveryWare::EpicOnlineServices::GenericSafeHandle_1<uint64_t> {
public:
// Declarations
using RemoveDelegate = ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate;

/// @brief Field removeDelegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeDelegate, put=__cordl_internal_set_removeDelegate)) ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  removeDelegate;

/// @brief Method IsValid, addr 0x180541a80, size 0x10, virtual true, abstract: false, final false
inline bool IsValid() ;

static inline ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle* New_ctor(uint64_t  aLong, ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  aRemoveDelegate) ;

/// @brief Method ReleaseHandle, addr 0x180541a90, size 0x50, virtual true, abstract: false, final false
inline void ReleaseHandle() ;

constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate* const& __cordl_internal_get_removeDelegate() const;

constexpr ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*& __cordl_internal_get_removeDelegate() ;

constexpr void __cordl_internal_set_removeDelegate(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  value) ;

/// @brief Method .ctor, addr 0x180541ae0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(uint64_t  aLong, ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  aRemoveDelegate) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotifyEventHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotifyEventHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotifyEventHandle(NotifyEventHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotifyEventHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotifyEventHandle(NotifyEventHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18905};

/// @brief Field removeDelegate, offset: 0x20, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::NotifyEventHandle_RemoveDelegate*  ___removeDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle, ___removeDelegate) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::NotifyEventHandle) == 0x28, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
