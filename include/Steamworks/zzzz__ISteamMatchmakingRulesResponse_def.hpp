#pragma once
// IWYU pragma private; include "Steamworks/ISteamMatchmakingRulesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISteamMatchmakingRulesResponse)
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesResponded;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesResponded;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_VTable;
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
class ISteamMatchmakingRulesResponse;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_InternalRulesResponded;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesFailedToRespond;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesRefreshComplete;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_RulesResponded;
}
namespace Steamworks {
class ISteamMatchmakingRulesResponse_VTable;
}
// Write type traits
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*);
MARK_REF_T(::Steamworks::ISteamMatchmakingRulesResponse_VTable*);
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse*, "Steamworks", "ISteamMatchmakingRulesResponse");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*, "Steamworks", "ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*, "Steamworks", "ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*, "Steamworks", "ISteamMatchmakingRulesResponse/InternalRulesResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*, "Steamworks", "ISteamMatchmakingRulesResponse/RulesFailedToRespond");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*, "Steamworks", "ISteamMatchmakingRulesResponse/RulesRefreshComplete");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*, "Steamworks", "ISteamMatchmakingRulesResponse/RulesResponded");
DEFINE_IL2CPP_CLASS(::Steamworks::ISteamMatchmakingRulesResponse_VTable*, "Steamworks", "ISteamMatchmakingRulesResponse/VTable");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/RulesResponded
class CORDL_TYPE ISteamMatchmakingRulesResponse_RulesResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582750, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchRule, ::StringW  pchValue, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::StringW  pchRule, ::StringW  pchValue) ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805827c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_RulesResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_RulesResponded(ISteamMatchmakingRulesResponse_RulesResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_RulesResponded(ISteamMatchmakingRulesResponse_RulesResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/RulesFailedToRespond
class CORDL_TYPE ISteamMatchmakingRulesResponse_RulesFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_RulesFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_RulesFailedToRespond(ISteamMatchmakingRulesResponse_RulesFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_RulesFailedToRespond(ISteamMatchmakingRulesResponse_RulesFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/RulesRefreshComplete
class CORDL_TYPE ISteamMatchmakingRulesResponse_RulesRefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_RulesRefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesRefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_RulesRefreshComplete(ISteamMatchmakingRulesResponse_RulesRefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_RulesRefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_RulesRefreshComplete(ISteamMatchmakingRulesResponse_RulesRefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/InternalRulesResponded
class CORDL_TYPE ISteamMatchmakingRulesResponse_InternalRulesResponded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180552640, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803828b0, size 0x390, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue) ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805526d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_InternalRulesResponded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesResponded", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_InternalRulesResponded(ISteamMatchmakingRulesResponse_InternalRulesResponded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesResponded", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_InternalRulesResponded(ISteamMatchmakingRulesResponse_InternalRulesResponded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/InternalRulesFailedToRespond
class CORDL_TYPE ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond(ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond(ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.MulticastDelegate
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/InternalRulesRefreshComplete
class CORDL_TYPE ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180502370, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  thisptr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  thisptr) ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805023d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete(ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete(ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete) == 0x80, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse/VTable
class CORDL_TYPE ISteamMatchmakingRulesResponse_VTable : public ::System::Object {
public:
// Declarations
/// @brief Field m_VTRulesFailedToRespond, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTRulesFailedToRespond, put=__cordl_internal_set_m_VTRulesFailedToRespond)) ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*  m_VTRulesFailedToRespond;

/// @brief Field m_VTRulesRefreshComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTRulesRefreshComplete, put=__cordl_internal_set_m_VTRulesRefreshComplete)) ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*  m_VTRulesRefreshComplete;

/// @brief Field m_VTRulesResponded, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTRulesResponded, put=__cordl_internal_set_m_VTRulesResponded)) ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*  m_VTRulesResponded;

static inline ::Steamworks::ISteamMatchmakingRulesResponse_VTable* New_ctor() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* const& __cordl_internal_get_m_VTRulesFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*& __cordl_internal_get_m_VTRulesFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete* const& __cordl_internal_get_m_VTRulesRefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*& __cordl_internal_get_m_VTRulesRefreshComplete() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded* const& __cordl_internal_get_m_VTRulesResponded() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*& __cordl_internal_get_m_VTRulesResponded() ;

constexpr void __cordl_internal_set_m_VTRulesFailedToRespond(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_VTRulesRefreshComplete(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*  value) ;

constexpr void __cordl_internal_set_m_VTRulesResponded(::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse_VTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_VTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse_VTable(ISteamMatchmakingRulesResponse_VTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse_VTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse_VTable(ISteamMatchmakingRulesResponse_VTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16010};

/// @brief Field m_VTRulesResponded, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded*  ___m_VTRulesResponded;

/// @brief Field m_VTRulesFailedToRespond, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond*  ___m_VTRulesFailedToRespond;

/// @brief Field m_VTRulesRefreshComplete, offset: 0x20, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete*  ___m_VTRulesRefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse_VTable, ___m_VTRulesResponded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse_VTable, ___m_VTRulesFailedToRespond) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse_VTable, ___m_VTRulesRefreshComplete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse_VTable) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.IntPtr, System.Object, System.Runtime.InteropServices.GCHandle
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.ISteamMatchmakingRulesResponse
class CORDL_TYPE ISteamMatchmakingRulesResponse : public ::System::Object {
public:
// Declarations
using InternalRulesFailedToRespond = ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond;

using InternalRulesRefreshComplete = ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete;

using InternalRulesResponded = ::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded;

using RulesFailedToRespond = ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond;

using RulesRefreshComplete = ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete;

using RulesResponded = ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded;

using VTable = ::Steamworks::ISteamMatchmakingRulesResponse_VTable;

/// @brief Field m_RulesFailedToRespond, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RulesFailedToRespond, put=__cordl_internal_set_m_RulesFailedToRespond)) ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  m_RulesFailedToRespond;

/// @brief Field m_RulesRefreshComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RulesRefreshComplete, put=__cordl_internal_set_m_RulesRefreshComplete)) ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  m_RulesRefreshComplete;

/// @brief Field m_RulesResponded, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RulesResponded, put=__cordl_internal_set_m_RulesResponded)) ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  m_RulesResponded;

/// @brief Field m_VTable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VTable, put=__cordl_internal_set_m_VTable)) ::Steamworks::ISteamMatchmakingRulesResponse_VTable*  m_VTable;

/// @brief Field m_pGCHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pGCHandle, put=__cordl_internal_set_m_pGCHandle)) ::System::Runtime::InteropServices::GCHandle  m_pGCHandle;

/// @brief Field m_pVTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pVTable, put=__cordl_internal_set_m_pVTable)) ::System::IntPtr  m_pVTable;

/// @brief Method Finalize, addr 0x1805514d0, size 0x40, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalOnRulesFailedToRespond, addr 0x180551510, size 0x30, virtual false, abstract: false, final false
inline void InternalOnRulesFailedToRespond(::System::IntPtr  thisptr) ;

/// @brief Method InternalOnRulesRefreshComplete, addr 0x180551810, size 0x30, virtual false, abstract: false, final false
inline void InternalOnRulesRefreshComplete(::System::IntPtr  thisptr) ;

/// @brief Method InternalOnRulesResponded, addr 0x180551b10, size 0x60, virtual false, abstract: false, final false
inline void InternalOnRulesResponded(::System::IntPtr  thisptr, ::System::IntPtr  pchRule, ::System::IntPtr  pchValue) ;

static inline ::Steamworks::ISteamMatchmakingRulesResponse* New_ctor(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  onRulesResponded, ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  onRulesFailedToRespond, ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  onRulesRefreshComplete) ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond* const& __cordl_internal_get_m_RulesFailedToRespond() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*& __cordl_internal_get_m_RulesFailedToRespond() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete* const& __cordl_internal_get_m_RulesRefreshComplete() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*& __cordl_internal_get_m_RulesRefreshComplete() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded* const& __cordl_internal_get_m_RulesResponded() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*& __cordl_internal_get_m_RulesResponded() ;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_VTable* const& __cordl_internal_get_m_VTable() const;

constexpr ::Steamworks::ISteamMatchmakingRulesResponse_VTable*& __cordl_internal_get_m_VTable() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_m_pGCHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_m_pGCHandle() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pVTable() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pVTable() ;

constexpr void __cordl_internal_set_m_RulesFailedToRespond(::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  value) ;

constexpr void __cordl_internal_set_m_RulesRefreshComplete(::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  value) ;

constexpr void __cordl_internal_set_m_RulesResponded(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  value) ;

constexpr void __cordl_internal_set_m_VTable(::Steamworks::ISteamMatchmakingRulesResponse_VTable*  value) ;

constexpr void __cordl_internal_set_m_pGCHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_m_pVTable(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x180551b70, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  onRulesResponded, ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  onRulesFailedToRespond, ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  onRulesRefreshComplete) ;

/// @brief Method op_Explicit, addr 0x1805517a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Steamworks::ISteamMatchmakingRulesResponse*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ISteamMatchmakingRulesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISteamMatchmakingRulesResponse(ISteamMatchmakingRulesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISteamMatchmakingRulesResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISteamMatchmakingRulesResponse(ISteamMatchmakingRulesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16011};

/// @brief Field m_VTable, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_VTable*  ___m_VTable;

/// @brief Field m_pVTable, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_pVTable;

/// @brief Field m_pGCHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___m_pGCHandle;

/// @brief Field m_RulesResponded, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded*  ___m_RulesResponded;

/// @brief Field m_RulesFailedToRespond, offset: 0x30, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_RulesFailedToRespond*  ___m_RulesFailedToRespond;

/// @brief Field m_RulesRefreshComplete, offset: 0x38, size: 0x8, def value: None
 ::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete*  ___m_RulesRefreshComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_VTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_pVTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_pGCHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_RulesResponded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_RulesFailedToRespond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Steamworks::ISteamMatchmakingRulesResponse, ___m_RulesRefreshComplete) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ISteamMatchmakingRulesResponse) == 0x40, "Size mismatch!");

} // namespace end def Steamworks
