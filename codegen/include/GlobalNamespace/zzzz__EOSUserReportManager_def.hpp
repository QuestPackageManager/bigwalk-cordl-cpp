#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSUserReportManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EOSUserReportManager)
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskCompletionSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Epic::OnlineServices::Platform {
class PlatformInterface;
}
namespace Epic::OnlineServices::Reports {
class ReportsInterface;
}
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportCompleteCallbackInfo;
}
namespace GlobalNamespace {
class EOSUserReportManager_UserReportingContext;
}
namespace GlobalNamespace {
class EOSUserReportManager___c__DisplayClass3_0;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSUserReportManager;
}
namespace GlobalNamespace {
class EOSUserReportManager_UserReportingContext;
}
namespace GlobalNamespace {
class EOSUserReportManager___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSUserReportManager*);
MARK_REF_T(::GlobalNamespace::EOSUserReportManager_UserReportingContext*);
MARK_REF_T(::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSUserReportManager*, "", "EOSUserReportManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSUserReportManager_UserReportingContext*, "", "EOSUserReportManager/UserReportingContext");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0*, "", "EOSUserReportManager/<>c__DisplayClass3_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSUserReportManager/UserReportingContext
class CORDL_TYPE EOSUserReportManager_UserReportingContext : public ::System::Object {
public:
// Declarations
/// @brief Field UserDisplayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserDisplayName, put=__cordl_internal_set_UserDisplayName)) ::StringW  UserDisplayName;

static inline ::GlobalNamespace::EOSUserReportManager_UserReportingContext* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_UserDisplayName() const;

constexpr ::StringW& __cordl_internal_get_UserDisplayName() ;

constexpr void __cordl_internal_set_UserDisplayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSUserReportManager_UserReportingContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager_UserReportingContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSUserReportManager_UserReportingContext(EOSUserReportManager_UserReportingContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager_UserReportingContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSUserReportManager_UserReportingContext(EOSUserReportManager_UserReportingContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21041};

/// @brief Field UserDisplayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___UserDisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSUserReportManager_UserReportingContext, ___UserDisplayName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSUserReportManager_UserReportingContext) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSUserReportManager/<>c__DisplayClass3_0
class CORDL_TYPE EOSUserReportManager___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completionSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*  completionSource;

static inline ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <ReportUser>b__0, addr 0x181ace2a0, size 0xc0, virtual false, abstract: false, final false
inline void _ReportUser_b__0(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfo>  data) ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>* const& __cordl_internal_get_completionSource() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*& __cordl_internal_get_completionSource() ;

constexpr void __cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSUserReportManager___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSUserReportManager___c__DisplayClass3_0(EOSUserReportManager___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSUserReportManager___c__DisplayClass3_0(EOSUserReportManager___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21042};

/// @brief Field completionSource, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<bool>*  ___completionSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0, ___completionSource) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Shipmate.Utils.SingletonBehaviour`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSUserReportManager
class CORDL_TYPE EOSUserReportManager : public ::Shipmate::Utils::SingletonBehaviour_1<::UnityW<::GlobalNamespace::EOSUserReportManager>> {
public:
// Declarations
using UserReportingContext = ::GlobalNamespace::EOSUserReportManager_UserReportingContext;

using __c__DisplayClass3_0 = ::GlobalNamespace::EOSUserReportManager___c__DisplayClass3_0;

/// @brief Field platformInterface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformInterface, put=__cordl_internal_set_platformInterface)) ::Epic::OnlineServices::Platform::PlatformInterface*  platformInterface;

/// @brief Field reportsInterface, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportsInterface, put=__cordl_internal_set_reportsInterface)) ::Epic::OnlineServices::Reports::ReportsInterface*  reportsInterface;

/// @brief Method Initialize, addr 0x181acb370, size 0x60, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::EOSUserReportManager* New_ctor() ;

/// @brief Method ReportUser, addr 0x181acb3d0, size 0x200, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> ReportUser(::StringW  eosUserId, ::StringW  userDisplayName) ;

constexpr ::Epic::OnlineServices::Platform::PlatformInterface* const& __cordl_internal_get_platformInterface() const;

constexpr ::Epic::OnlineServices::Platform::PlatformInterface*& __cordl_internal_get_platformInterface() ;

constexpr ::Epic::OnlineServices::Reports::ReportsInterface* const& __cordl_internal_get_reportsInterface() const;

constexpr ::Epic::OnlineServices::Reports::ReportsInterface*& __cordl_internal_get_reportsInterface() ;

constexpr void __cordl_internal_set_platformInterface(::Epic::OnlineServices::Platform::PlatformInterface*  value) ;

constexpr void __cordl_internal_set_reportsInterface(::Epic::OnlineServices::Reports::ReportsInterface*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSUserReportManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSUserReportManager(EOSUserReportManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSUserReportManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSUserReportManager(EOSUserReportManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21043};

/// @brief Field platformInterface, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Platform::PlatformInterface*  ___platformInterface;

/// @brief Field reportsInterface, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Reports::ReportsInterface*  ___reportsInterface;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSUserReportManager, ___platformInterface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSUserReportManager, ___reportsInterface) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSUserReportManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
