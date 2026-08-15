#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingPlayersResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ISteamMatchmakingPlayersResponse)
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_AddPlayerToList;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalAddPlayerToList;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_VTable;
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
class ISteamMatchmakingPlayersResponse;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_AddPlayerToList;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalAddPlayerToList;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingPlayersResponse_VTable;
}
// Write type traits
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingPlayersResponse_VTable*);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse*, "Steamworks", "ISteamMatchmakingPlayersResponse");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*, "Steamworks", "ISteamMatchmakingPlayersResponse/AddPlayerToList");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*, "Steamworks", "ISteamMatchmakingPlayersResponse/InternalAddPlayerToList");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*, "Steamworks", "ISteamMatchmakingPlayersResponse/InternalPlayersFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*, "Steamworks", "ISteamMatchmakingPlayersResponse/InternalPlayersRefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*, "Steamworks", "ISteamMatchmakingPlayersResponse/PlayersFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*, "Steamworks", "ISteamMatchmakingPlayersResponse/PlayersRefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingPlayersResponse_VTable*, "Steamworks", "ISteamMatchmakingPlayersResponse/VTable");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/AddPlayerToList
class CORDL_TYPE ISteamMatchmakingPlayersResponse_AddPlayerToList : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18054ad70, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchName, int32_t  nScore, float_t  flTimePlayed, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x18054adf0, size 0x100, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchName, int32_t  nScore, float_t  flTimePlayed) ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18054aef0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_AddPlayerToList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_AddPlayerToList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_AddPlayerToList(ISteamMatchmakingPlayersResponse_AddPlayerToList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_AddPlayerToList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_AddPlayerToList(ISteamMatchmakingPlayersResponse_AddPlayerToList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/PlayersFailedToRespond
class CORDL_TYPE ISteamMatchmakingPlayersResponse_PlayersFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_PlayersFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_PlayersFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(ISteamMatchmakingPlayersResponse_PlayersFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_PlayersFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(ISteamMatchmakingPlayersResponse_PlayersFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/PlayersRefreshComplete
class CORDL_TYPE ISteamMatchmakingPlayersResponse_PlayersRefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_PlayersRefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_PlayersRefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(ISteamMatchmakingPlayersResponse_PlayersRefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_PlayersRefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(ISteamMatchmakingPlayersResponse_PlayersRefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/InternalAddPlayerToList
class CORDL_TYPE ISteamMatchmakingPlayersResponse_InternalAddPlayerToList : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552200, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed) ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180552390, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_InternalAddPlayerToList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalAddPlayerToList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_InternalAddPlayerToList(ISteamMatchmakingPlayersResponse_InternalAddPlayerToList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalAddPlayerToList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_InternalAddPlayerToList(ISteamMatchmakingPlayersResponse_InternalAddPlayerToList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/InternalPlayersFailedToRespond
class CORDL_TYPE ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond(ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond(ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/InternalPlayersRefreshComplete
class CORDL_TYPE ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete(ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete(ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse/VTable
class CORDL_TYPE ISteamMatchmakingPlayersResponse_VTable : public ::System::Object {
public:
// Declarations
/// @brief Field m_VTAddPlayerToList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTAddPlayerToList, put=__cordl_internal_set_m_VTAddPlayerToList)) ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*  m_VTAddPlayerToList;

/// @brief Field m_VTPlayersFailedToRespond, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTPlayersFailedToRespond, put=__cordl_internal_set_m_VTPlayersFailedToRespond)) ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*  m_VTPlayersFailedToRespond;

/// @brief Field m_VTPlayersRefreshComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTPlayersRefreshComplete, put=__cordl_internal_set_m_VTPlayersRefreshComplete)) ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*  m_VTPlayersRefreshComplete;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse_VTable* New_ctor() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* const& __cordl_internal_get_m_VTAddPlayerToList() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*& __cordl_internal_get_m_VTAddPlayerToList() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* const& __cordl_internal_get_m_VTPlayersFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*& __cordl_internal_get_m_VTPlayersFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete* const& __cordl_internal_get_m_VTPlayersRefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*& __cordl_internal_get_m_VTPlayersRefreshComplete() ;

constexpr void __cordl_internal_set_m_VTAddPlayerToList(::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*  value) ;

constexpr void __cordl_internal_set_m_VTPlayersFailedToRespond(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_VTPlayersRefreshComplete(::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse_VTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_VTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse_VTable(ISteamMatchmakingPlayersResponse_VTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse_VTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse_VTable(ISteamMatchmakingPlayersResponse_VTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16002};

/// @brief Field m_VTAddPlayerToList, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList*  ___m_VTAddPlayerToList;

/// @brief Field m_VTPlayersFailedToRespond, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond*  ___m_VTPlayersFailedToRespond;

/// @brief Field m_VTPlayersRefreshComplete, offset: 0x20, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete*  ___m_VTPlayersRefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse_VTable, ___m_VTAddPlayerToList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse_VTable, ___m_VTPlayersFailedToRespond) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse_VTable, ___m_VTPlayersRefreshComplete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse_VTable) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.IntPtr, System.Object, System.Runtime.InteropServices.GCHandle
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingPlayersResponse
class CORDL_TYPE ISteamMatchmakingPlayersResponse : public ::System::Object {
public:
// Declarations
using AddPlayerToList = ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList;

using InternalAddPlayerToList = ::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList;

using InternalPlayersFailedToRespond = ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond;

using InternalPlayersRefreshComplete = ::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete;

using PlayersFailedToRespond = ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;

using PlayersRefreshComplete = ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;

using VTable = ::Steamworks::ISteamMatchmakingPlayersResponse_VTable;

/// @brief Field m_AddPlayerToList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AddPlayerToList, put=__cordl_internal_set_m_AddPlayerToList)) ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  m_AddPlayerToList;

/// @brief Field m_PlayersFailedToRespond, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayersFailedToRespond, put=__cordl_internal_set_m_PlayersFailedToRespond)) ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  m_PlayersFailedToRespond;

/// @brief Field m_PlayersRefreshComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayersRefreshComplete, put=__cordl_internal_set_m_PlayersRefreshComplete)) ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  m_PlayersRefreshComplete;

/// @brief Field m_VTable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTable, put=__cordl_internal_set_m_VTable)) ::Steamworks::ISteamMatchmakingPlayersResponse_VTable*  m_VTable;

/// @brief Field m_pGCHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pGCHandle, put=__cordl_internal_set_m_pGCHandle)) ::System::Runtime::InteropServices::GCHandle  m_pGCHandle;

/// @brief Field m_pVTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pVTable, put=__cordl_internal_set_m_pVTable)) ::System::IntPtr  m_pVTable;

/// @brief Method Finalize, addr 0x1805514d0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalOnAddPlayerToList, addr 0x1805517c0, size 0x50, virtual false, abstract: false, final false
inline void InternalOnAddPlayerToList(::System::IntPtr  thisptr, ::System::IntPtr  pchName, int32_t  nScore, float_t  flTimePlayed) ;

/// @brief Method InternalOnPlayersFailedToRespond, addr 0x180551510, size 0x30, virtual false, abstract: false, final false
inline void InternalOnPlayersFailedToRespond(::System::IntPtr  thisptr) ;

/// @brief Method InternalOnPlayersRefreshComplete, addr 0x180551810, size 0x30, virtual false, abstract: false, final false
inline void InternalOnPlayersRefreshComplete(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingPlayersResponse* New_ctor(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  onAddPlayerToList, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  onPlayersFailedToRespond, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  onPlayersRefreshComplete) ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList* const& __cordl_internal_get_m_AddPlayerToList() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*& __cordl_internal_get_m_AddPlayerToList() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* const& __cordl_internal_get_m_PlayersFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*& __cordl_internal_get_m_PlayersFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete* const& __cordl_internal_get_m_PlayersRefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*& __cordl_internal_get_m_PlayersRefreshComplete() ;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_VTable* const& __cordl_internal_get_m_VTable() const;

constexpr ::Steamworks::ISteamMatchmakingPlayersResponse_VTable*& __cordl_internal_get_m_VTable() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_pGCHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_pGCHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pVTable() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pVTable() ;

constexpr void __cordl_internal_set_m_AddPlayerToList(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  value) ;

constexpr void __cordl_internal_set_m_PlayersFailedToRespond(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_PlayersRefreshComplete(::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  value) ;

constexpr void __cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingPlayersResponse_VTable*  value) ;

constexpr void __cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_pVTable(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180551840, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  onAddPlayerToList, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  onPlayersFailedToRespond, ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  onPlayersRefreshComplete) ;

/// @brief Method op_Explicit, addr 0x1805517a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingPlayersResponse*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingPlayersResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingPlayersResponse(ISteamMatchmakingPlayersResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingPlayersResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingPlayersResponse(ISteamMatchmakingPlayersResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16003};

/// @brief Field m_VTable, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_VTable*  ___m_VTable;

/// @brief Field m_pVTable, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_pVTable;

/// @brief Field m_pGCHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_pGCHandle;

/// @brief Field m_AddPlayerToList, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList*  ___m_AddPlayerToList;

/// @brief Field m_PlayersFailedToRespond, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond*  ___m_PlayersFailedToRespond;

/// @brief Field m_PlayersRefreshComplete, offset: 0x38, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete*  ___m_PlayersRefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_VTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_pVTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_pGCHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_AddPlayerToList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_PlayersFailedToRespond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingPlayersResponse, ___m_PlayersRefreshComplete) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingPlayersResponse) == 0x40, "Size mismatch!");

} // namespace end def Steamworks
