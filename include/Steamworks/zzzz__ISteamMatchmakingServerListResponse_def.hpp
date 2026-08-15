#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingServerListResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISteamMatchmakingServerListResponse)
namespace Steamworks {
struct EMatchMakingServerResponse;
}
namespace Steamworks {
struct HServerListRequest;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_RefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_ServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_ServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_VTable;
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
class ISteamMatchmakingServerListResponse;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_InternalServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_RefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_ServerFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_ServerResponded;
}
namespace Steamworks {
class ISteamMatchmakingServerListResponse_VTable;
}
// Write type traits
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingServerListResponse_VTable*);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse*, "Steamworks", "ISteamMatchmakingServerListResponse");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*, "Steamworks", "ISteamMatchmakingServerListResponse/InternalRefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*, "Steamworks", "ISteamMatchmakingServerListResponse/InternalServerFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*, "Steamworks", "ISteamMatchmakingServerListResponse/InternalServerResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*, "Steamworks", "ISteamMatchmakingServerListResponse/RefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*, "Steamworks", "ISteamMatchmakingServerListResponse/ServerFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*, "Steamworks", "ISteamMatchmakingServerListResponse/ServerResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingServerListResponse_VTable*, "Steamworks", "ISteamMatchmakingServerListResponse/VTable");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/ServerResponded
class CORDL_TYPE ISteamMatchmakingServerListResponse_ServerResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582880, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e940, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_ServerResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_ServerResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_ServerResponded(ISteamMatchmakingServerListResponse_ServerResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_ServerResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_ServerResponded(ISteamMatchmakingServerListResponse_ServerResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/ServerFailedToRespond
class CORDL_TYPE ISteamMatchmakingServerListResponse_ServerFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582880, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e940, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_ServerFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_ServerFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_ServerFailedToRespond(ISteamMatchmakingServerListResponse_ServerFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_ServerFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_ServerFailedToRespond(ISteamMatchmakingServerListResponse_ServerFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/RefreshComplete
class CORDL_TYPE ISteamMatchmakingServerListResponse_RefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e820, size 0x120, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e940, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_RefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_RefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_RefreshComplete(ISteamMatchmakingServerListResponse_RefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_RefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_RefreshComplete(ISteamMatchmakingServerListResponse_RefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/InternalServerResponded
class CORDL_TYPE ISteamMatchmakingServerListResponse_InternalServerResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552780, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552590, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_InternalServerResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalServerResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_InternalServerResponded(ISteamMatchmakingServerListResponse_InternalServerResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalServerResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_InternalServerResponded(ISteamMatchmakingServerListResponse_InternalServerResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/InternalServerFailedToRespond
class CORDL_TYPE ISteamMatchmakingServerListResponse_InternalServerFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552780, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552590, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_InternalServerFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalServerFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_InternalServerFailedToRespond(ISteamMatchmakingServerListResponse_InternalServerFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalServerFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_InternalServerFailedToRespond(ISteamMatchmakingServerListResponse_InternalServerFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/InternalRefreshComplete
class CORDL_TYPE ISteamMatchmakingServerListResponse_InternalRefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552440, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552590, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_InternalRefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalRefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_InternalRefreshComplete(ISteamMatchmakingServerListResponse_InternalRefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_InternalRefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_InternalRefreshComplete(ISteamMatchmakingServerListResponse_InternalRefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse/VTable
class CORDL_TYPE ISteamMatchmakingServerListResponse_VTable : public ::System::Object {
public:
// Declarations
/// @brief Field m_VTRefreshComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTRefreshComplete, put=__cordl_internal_set_m_VTRefreshComplete)) ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*  m_VTRefreshComplete;

/// @brief Field m_VTServerFailedToRespond, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTServerFailedToRespond, put=__cordl_internal_set_m_VTServerFailedToRespond)) ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*  m_VTServerFailedToRespond;

/// @brief Field m_VTServerResponded, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTServerResponded, put=__cordl_internal_set_m_VTServerResponded)) ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*  m_VTServerResponded;

static inline ::Steamworks::ISteamMatchmakingServerListResponse_VTable* New_ctor() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete* const& __cordl_internal_get_m_VTRefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*& __cordl_internal_get_m_VTRefreshComplete() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond* const& __cordl_internal_get_m_VTServerFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*& __cordl_internal_get_m_VTServerFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded* const& __cordl_internal_get_m_VTServerResponded() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*& __cordl_internal_get_m_VTServerResponded() ;

constexpr void __cordl_internal_set_m_VTRefreshComplete(::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*  value) ;

constexpr void __cordl_internal_set_m_VTServerFailedToRespond(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_VTServerResponded(::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse_VTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_VTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse_VTable(ISteamMatchmakingServerListResponse_VTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse_VTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse_VTable(ISteamMatchmakingServerListResponse_VTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15988};

/// @brief Field m_VTServerResponded, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded*  ___m_VTServerResponded;

/// @brief Field m_VTServerFailedToRespond, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond*  ___m_VTServerFailedToRespond;

/// @brief Field m_VTRefreshComplete, offset: 0x20, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete*  ___m_VTRefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse_VTable, ___m_VTServerResponded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse_VTable, ___m_VTServerFailedToRespond) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse_VTable, ___m_VTRefreshComplete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse_VTable) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.IntPtr, System.Object, System.Runtime.InteropServices.GCHandle
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingServerListResponse
class CORDL_TYPE ISteamMatchmakingServerListResponse : public ::System::Object {
public:
// Declarations
using InternalRefreshComplete = ::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete;

using InternalServerFailedToRespond = ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerFailedToRespond;

using InternalServerResponded = ::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded;

using RefreshComplete = ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete;

using ServerFailedToRespond = ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond;

using ServerResponded = ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded;

using VTable = ::Steamworks::ISteamMatchmakingServerListResponse_VTable;

/// @brief Field m_RefreshComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RefreshComplete, put=__cordl_internal_set_m_RefreshComplete)) ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  m_RefreshComplete;

/// @brief Field m_ServerFailedToRespond, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ServerFailedToRespond, put=__cordl_internal_set_m_ServerFailedToRespond)) ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  m_ServerFailedToRespond;

/// @brief Field m_ServerResponded, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ServerResponded, put=__cordl_internal_set_m_ServerResponded)) ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  m_ServerResponded;

/// @brief Field m_VTable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTable, put=__cordl_internal_set_m_VTable)) ::Steamworks::ISteamMatchmakingServerListResponse_VTable*  m_VTable;

/// @brief Field m_pGCHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pGCHandle, put=__cordl_internal_set_m_pGCHandle)) ::System::Runtime::InteropServices::GCHandle  m_pGCHandle;

/// @brief Field m_pVTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pVTable, put=__cordl_internal_set_m_pVTable)) ::System::IntPtr  m_pVTable;

/// @brief Method Finalize, addr 0x1805514d0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalOnRefreshComplete, addr 0x180551e40, size 0x50, virtual false, abstract: false, final false
inline void InternalOnRefreshComplete(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, ::Steamworks::EMatchMakingServerResponse  response) ;

/// @brief Method InternalOnServerFailedToRespond, addr 0x180551e90, size 0x50, virtual false, abstract: false, final false
inline void InternalOnServerFailedToRespond(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

/// @brief Method InternalOnServerResponded, addr 0x180551ee0, size 0x50, virtual false, abstract: false, final false
inline void InternalOnServerResponded(::System::IntPtr  thisptr, ::Steamworks::HServerListRequest  hRequest, int32_t  iServer) ;

static inline ::Steamworks::ISteamMatchmakingServerListResponse* New_ctor(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  onServerFailedToRespond, ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  onRefreshComplete) ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete* const& __cordl_internal_get_m_RefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*& __cordl_internal_get_m_RefreshComplete() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond* const& __cordl_internal_get_m_ServerFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*& __cordl_internal_get_m_ServerFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded* const& __cordl_internal_get_m_ServerResponded() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*& __cordl_internal_get_m_ServerResponded() ;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_VTable* const& __cordl_internal_get_m_VTable() const;

constexpr ::Steamworks::ISteamMatchmakingServerListResponse_VTable*& __cordl_internal_get_m_VTable() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_pGCHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_pGCHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pVTable() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pVTable() ;

constexpr void __cordl_internal_set_m_RefreshComplete(::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  value) ;

constexpr void __cordl_internal_set_m_ServerFailedToRespond(::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_ServerResponded(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  value) ;

constexpr void __cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingServerListResponse_VTable*  value) ;

constexpr void __cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_pVTable(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180551f30, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  onServerResponded, ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  onServerFailedToRespond, ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  onRefreshComplete) ;

/// @brief Method op_Explicit, addr 0x1805517a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingServerListResponse*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingServerListResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingServerListResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15989};

/// @brief Field m_VTable, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_VTable*  ___m_VTable;

/// @brief Field m_pVTable, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_pVTable;

/// @brief Field m_pGCHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_pGCHandle;

/// @brief Field m_ServerResponded, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_ServerResponded*  ___m_ServerResponded;

/// @brief Field m_ServerFailedToRespond, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond*  ___m_ServerFailedToRespond;

/// @brief Field m_RefreshComplete, offset: 0x38, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingServerListResponse_RefreshComplete*  ___m_RefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_VTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_pVTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_pGCHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_ServerResponded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_ServerFailedToRespond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingServerListResponse, ___m_RefreshComplete) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingServerListResponse) == 0x40, "Size mismatch!");

} // namespace end def Steamworks
