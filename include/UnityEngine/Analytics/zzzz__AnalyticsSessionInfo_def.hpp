#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsSessionInfo)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo_IdentityTokenChanged;
}
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo_SessionStateChanged;
}
namespace UnityEngine::Analytics {
struct AnalyticsSessionState;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo;
}
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo_IdentityTokenChanged;
}
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo_SessionStateChanged;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::AnalyticsSessionInfo*);
MARK_REF_T(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*);
MARK_REF_T(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::AnalyticsSessionInfo*, "UnityEngine.Analytics", "AnalyticsSessionInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/IdentityTokenChanged");
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/SessionStateChanged");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
class CORDL_TYPE AnalyticsSessionInfo_SessionStateChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180e16e90, size 0xb300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged) ;

static inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x182548e30, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsSessionInfo_SessionStateChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo_SessionStateChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsSessionInfo_SessionStateChanged(AnalyticsSessionInfo_SessionStateChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo_SessionStateChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsSessionInfo_SessionStateChanged(AnalyticsSessionInfo_SessionStateChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
// Dependencies System.MulticastDelegate
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
class CORDL_TYPE AnalyticsSessionInfo_IdentityTokenChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  token) ;

static inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsSessionInfo_IdentityTokenChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo_IdentityTokenChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsSessionInfo_IdentityTokenChanged(AnalyticsSessionInfo_IdentityTokenChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo_IdentityTokenChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsSessionInfo_IdentityTokenChanged(AnalyticsSessionInfo_IdentityTokenChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo
class CORDL_TYPE AnalyticsSessionInfo : public ::System::Object {
public:
// Declarations
using IdentityTokenChanged = ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged;

using SessionStateChanged = ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged;

/// @brief Field identityTokenChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_identityTokenChanged, put=setStaticF_identityTokenChanged)) ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*  identityTokenChanged;

/// @brief Field sessionStateChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sessionStateChanged, put=setStaticF_sessionStateChanged)) ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*  sessionStateChanged;

/// @brief Method CallIdentityTokenChanged, addr 0x182548b90, size 0x30, virtual false, abstract: false, final false
static inline void CallIdentityTokenChanged(::StringW  token) ;

/// @brief Method CallSessionStateChanged, addr 0x182548bc0, size 0x70, virtual false, abstract: false, final false
static inline void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged) ;

static inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* getStaticF_identityTokenChanged() ;

static inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* getStaticF_sessionStateChanged() ;

static inline void setStaticF_identityTokenChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*  value) ;

static inline void setStaticF_sessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsSessionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsSessionInfo(AnalyticsSessionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsSessionInfo(AnalyticsSessionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::AnalyticsSessionInfo) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
