#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingPingResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ISteamMatchmakingPingResponse)
namespace Steamworks {
class ISteamMatchmakingPingResponse_InternalServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_InternalServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_ServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_ServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_VTable;
}
namespace Steamworks {
class gameserveritem_t;
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
namespace Steamworks {
class ISteamMatchmakingPingResponse;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_InternalServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_InternalServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_ServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_ServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingPingResponse_VTable;
}
// Write type traits
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPingResponse_VTable*);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse*, "Steamworks", "ISteamMatchmakingPingResponse");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*, "Steamworks", "ISteamMatchmakingPingResponse/InternalServerFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*, "Steamworks", "ISteamMatchmakingPingResponse/InternalServerResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*, "Steamworks", "ISteamMatchmakingPingResponse/ServerFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*, "Steamworks", "ISteamMatchmakingPingResponse/ServerResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPingResponse_VTable*, "Steamworks", "ISteamMatchmakingPingResponse/VTable");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse/ServerResponded
class CORDL_TYPE ISteamMatchmakingPingResponse_ServerResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Steamworks::gameserveritem_t*  server, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Steamworks::gameserveritem_t*  server) ;

static inline ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805829b0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse_ServerResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_ServerResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse_ServerResponded(ISteamMatchmakingPingResponse_ServerResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_ServerResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse_ServerResponded(ISteamMatchmakingPingResponse_ServerResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse/ServerFailedToRespond
class CORDL_TYPE ISteamMatchmakingPingResponse_ServerFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse_ServerFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_ServerFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse_ServerFailedToRespond(ISteamMatchmakingPingResponse_ServerFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_ServerFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse_ServerFailedToRespond(ISteamMatchmakingPingResponse_ServerFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse/InternalServerResponded
class CORDL_TYPE ISteamMatchmakingPingResponse_InternalServerResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552810, size 0xf0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server) ;

static inline ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552900, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse_InternalServerResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_InternalServerResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse_InternalServerResponded(ISteamMatchmakingPingResponse_InternalServerResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_InternalServerResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse_InternalServerResponded(ISteamMatchmakingPingResponse_InternalServerResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse/InternalServerFailedToRespond
class CORDL_TYPE ISteamMatchmakingPingResponse_InternalServerFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse_InternalServerFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_InternalServerFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse_InternalServerFailedToRespond(ISteamMatchmakingPingResponse_InternalServerFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_InternalServerFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse_InternalServerFailedToRespond(ISteamMatchmakingPingResponse_InternalServerFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse/VTable
class CORDL_TYPE ISteamMatchmakingPingResponse_VTable : public ::System::Object {
public:
// Declarations
/// @brief Field m_VTServerFailedToRespond, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTServerFailedToRespond, put=__cordl_internal_set_m_VTServerFailedToRespond)) ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*  m_VTServerFailedToRespond;

/// @brief Field m_VTServerResponded, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTServerResponded, put=__cordl_internal_set_m_VTServerResponded)) ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*  m_VTServerResponded;

static inline ::Steamworks::ISteamMatchmakingPingResponse_VTable* New_ctor() ;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond* const& __cordl_internal_get_m_VTServerFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*& __cordl_internal_get_m_VTServerFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded* const& __cordl_internal_get_m_VTServerResponded() const;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*& __cordl_internal_get_m_VTServerResponded() ;

constexpr void __cordl_internal_set_m_VTServerFailedToRespond(::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_VTServerResponded(::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse_VTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_VTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse_VTable(ISteamMatchmakingPingResponse_VTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse_VTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse_VTable(ISteamMatchmakingPingResponse_VTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15994};

/// @brief Field m_VTServerResponded, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded*  ___m_VTServerResponded;

/// @brief Field m_VTServerFailedToRespond, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond*  ___m_VTServerFailedToRespond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse_VTable, ___m_VTServerResponded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse_VTable, ___m_VTServerFailedToRespond) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse_VTable) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.IntPtr, System.Object, System.Runtime.InteropServices.GCHandle
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPingResponse
class CORDL_TYPE ISteamMatchmakingPingResponse : public ::System::Object {
public:
// Declarations
using InternalServerFailedToRespond = ::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond;

using InternalServerResponded = ::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded;

using ServerFailedToRespond = ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond;

using ServerResponded = ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded;

using VTable = ::Steamworks::ISteamMatchmakingPingResponse_VTable;

/// @brief Field m_ServerFailedToRespond, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ServerFailedToRespond, put=__cordl_internal_set_m_ServerFailedToRespond)) ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  m_ServerFailedToRespond;

/// @brief Field m_ServerResponded, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ServerResponded, put=__cordl_internal_set_m_ServerResponded)) ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  m_ServerResponded;

/// @brief Field m_VTable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTable, put=__cordl_internal_set_m_VTable)) ::Steamworks::ISteamMatchmakingPingResponse_VTable*  m_VTable;

/// @brief Field m_pGCHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pGCHandle, put=__cordl_internal_set_m_pGCHandle)) ::System::Runtime::InteropServices::GCHandle  m_pGCHandle;

/// @brief Field m_pVTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pVTable, put=__cordl_internal_set_m_pVTable)) ::System::IntPtr  m_pVTable;

/// @brief Method Finalize, addr 0x1805514d0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalOnServerFailedToRespond, addr 0x180551510, size 0x30, virtual false, abstract: false, final false
inline void InternalOnServerFailedToRespond(::System::IntPtr  thisptr) ;

/// @brief Method InternalOnServerResponded, addr 0x180551540, size 0x30, virtual false, abstract: false, final false
inline void InternalOnServerResponded(::System::IntPtr  thisptr, ::Steamworks::gameserveritem_t*  server) ;

static inline ::Steamworks::ISteamMatchmakingPingResponse* New_ctor(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  onServerFailedToRespond) ;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond* const& __cordl_internal_get_m_ServerFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*& __cordl_internal_get_m_ServerFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded* const& __cordl_internal_get_m_ServerResponded() const;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*& __cordl_internal_get_m_ServerResponded() ;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_VTable* const& __cordl_internal_get_m_VTable() const;

constexpr ::Steamworks::ISteamMatchmakingPingResponse_VTable*& __cordl_internal_get_m_VTable() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_pGCHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_pGCHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pVTable() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pVTable() ;

constexpr void __cordl_internal_set_m_ServerFailedToRespond(::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_ServerResponded(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  value) ;

constexpr void __cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingPingResponse_VTable*  value) ;

constexpr void __cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_pVTable(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180551570, size 0x230, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  onServerFailedToRespond) ;

/// @brief Method op_Explicit, addr 0x1805517a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingPingResponse*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPingResponse(ISteamMatchmakingPingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPingResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPingResponse(ISteamMatchmakingPingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15995};

/// @brief Field m_VTable, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPingResponse_VTable*  ___m_VTable;

/// @brief Field m_pVTable, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_pVTable;

/// @brief Field m_pGCHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_pGCHandle;

/// @brief Field m_ServerResponded, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPingResponse_ServerResponded*  ___m_ServerResponded;

/// @brief Field m_ServerFailedToRespond, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond*  ___m_ServerFailedToRespond;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse, ___m_VTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse, ___m_pVTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse, ___m_pGCHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse, ___m_ServerResponded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPingResponse, ___m_ServerFailedToRespond) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingPingResponse) == 0x38, "Size mismatch!");

} // namespace end def Steamworks
