#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSSessionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSSessionManager)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Epic::OnlineServices::Sessions {
struct DestroySessionCallbackInfo;
}
namespace Epic::OnlineServices::Sessions {
struct EndSessionCallbackInfo;
}
namespace Epic::OnlineServices::Sessions {
class OnDestroySessionCallback;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsInfo;
}
namespace Epic::OnlineServices::Sessions {
class SessionDetails;
}
namespace Epic::OnlineServices::Sessions {
struct SessionSearchFindCallbackInfo;
}
namespace Epic::OnlineServices::Sessions {
class SessionSearch;
}
namespace Epic::OnlineServices::Sessions {
class SessionsInterface;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionCallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace GlobalNamespace {
struct EOSSessionManager__CreateSessionIfNotCreated_d__26;
}
namespace GlobalNamespace {
struct EOSSessionManager__FindAllPublicSessions_d__28;
}
namespace GlobalNamespace {
struct EOSSessionManager__FindFriendsSessions_d__27;
}
namespace GlobalNamespace {
struct EOSSessionManager__GenerateGameCode_d__22;
}
namespace GlobalNamespace {
struct EOSSessionManager__IsSessionExistByCode_d__30;
}
namespace GlobalNamespace {
struct EOSSessionManager__IsSessionExistByUser_d__31;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass24_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass27_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass28_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass29_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass31_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass32_0;
}
namespace GlobalNamespace {
class HouseSessionInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSSessionManager;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass24_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass27_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass28_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass29_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass30_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass31_0;
}
namespace GlobalNamespace {
class EOSSessionManager___c__DisplayClass32_0;
}
namespace GlobalNamespace {
struct EOSSessionManager__CreateSessionIfNotCreated_d__26;
}
namespace GlobalNamespace {
struct EOSSessionManager__FindAllPublicSessions_d__28;
}
namespace GlobalNamespace {
struct EOSSessionManager__FindFriendsSessions_d__27;
}
namespace GlobalNamespace {
struct EOSSessionManager__GenerateGameCode_d__22;
}
namespace GlobalNamespace {
struct EOSSessionManager__IsSessionExistByCode_d__30;
}
namespace GlobalNamespace {
struct EOSSessionManager__IsSessionExistByUser_d__31;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSSessionManager*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*);
MARK_REF_T(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30);
MARK_VAL_T(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager*, "", "EOSSessionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0*, "", "EOSSessionManager/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*, "", "EOSSessionManager/<>c__DisplayClass27_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*, "", "EOSSessionManager/<>c__DisplayClass28_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0*, "", "EOSSessionManager/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*, "", "EOSSessionManager/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*, "", "EOSSessionManager/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0*, "", "EOSSessionManager/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, "", "EOSSessionManager/<CreateSessionIfNotCreated>d__26");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, "", "EOSSessionManager/<FindAllPublicSessions>d__28");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, "", "EOSSessionManager/<FindFriendsSessions>d__27");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, "", "EOSSessionManager/<GenerateGameCode>d__22");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, "", "EOSSessionManager/<IsSessionExistByCode>d__30");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, "", "EOSSessionManager/<IsSessionExistByUser>d__31");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass24_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field gameCode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameCode, put=__cordl_internal_set_gameCode)) ::StringW  gameCode;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <CreateSession>b__0, addr 0x18157d080, size 0xf0, virtual false, abstract: false, final false
inline void _CreateSession_b__0(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo>  data) ;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_gameCode() const;

constexpr ::StringW& __cordl_internal_get_gameCode() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

constexpr void __cordl_internal_set_gameCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass24_0(EOSSessionManager___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass24_0(EOSSessionManager___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18984};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  _____4__this;

/// @brief Field gameCode, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___gameCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0, ___gameCode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass27_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field results, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  results;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Sessions::SessionSearch*  search;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <FindFriendsSessions>b__0, addr 0x18157d170, size 0x220, virtual false, abstract: false, final false
inline void _FindFriendsSessions_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info) ;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>* const& __cordl_internal_get_results() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*& __cordl_internal_get_results() ;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& __cordl_internal_get_search() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

constexpr void __cordl_internal_set_results(::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass27_0(EOSSessionManager___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass27_0(EOSSessionManager___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18985};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionSearch*  ___search;

/// @brief Field results, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  ___results;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0, ___search) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0, ___results) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass28_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field results, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_results, put=__cordl_internal_set_results)) ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  results;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Sessions::SessionSearch*  search;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <FindAllPublicSessions>b__0, addr 0x18157d170, size 0x220, virtual false, abstract: false, final false
inline void _FindAllPublicSessions_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info) ;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>* const& __cordl_internal_get_results() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*& __cordl_internal_get_results() ;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& __cordl_internal_get_search() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

constexpr void __cordl_internal_set_results(::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass28_0(EOSSessionManager___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass28_0(EOSSessionManager___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18986};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionSearch*  ___search;

/// @brief Field results, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*  ___results;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0, ___search) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0, ___results) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass29_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Sessions::SessionSearch*  search;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <FindSessionAndConnectByCode>b__0, addr 0x18157d390, size 0x3f0, virtual false, abstract: false, final false
inline void _FindSessionAndConnectByCode_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info) ;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& __cordl_internal_get_search() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass29_0(EOSSessionManager___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass29_0(EOSSessionManager___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18987};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  _____4__this;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionSearch*  ___search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0, ___search) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass30_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) bool  result;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Sessions::SessionSearch*  search;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <IsSessionExistByCode>b__0, addr 0x18157d780, size 0x110, virtual false, abstract: false, final false
inline void _IsSessionExistByCode_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info) ;

constexpr bool const& __cordl_internal_get_result() const;

constexpr bool& __cordl_internal_get_result() ;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& __cordl_internal_get_search() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_result(bool  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass30_0(EOSSessionManager___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass30_0(EOSSessionManager___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18988};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionSearch*  ___search;

/// @brief Field result, offset: 0x20, size: 0x1, def value: None
 bool  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0, ___search) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0, ___result) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass31_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) bool  result;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Sessions::SessionSearch*  search;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <IsSessionExistByUser>b__0, addr 0x18157d780, size 0x110, virtual false, abstract: false, final false
inline void _IsSessionExistByUser_b__0(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfo>  info) ;

constexpr bool const& __cordl_internal_get_result() const;

constexpr bool& __cordl_internal_get_result() ;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Sessions::SessionSearch*& __cordl_internal_get_search() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_result(bool  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Sessions::SessionSearch*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass31_0(EOSSessionManager___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass31_0(EOSSessionManager___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18989};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___tcs;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionSearch*  ___search;

/// @brief Field result, offset: 0x20, size: 0x1, def value: None
 bool  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0, ___tcs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0, ___search) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0, ___result) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager/<>c__DisplayClass32_0
class CORDL_TYPE EOSSessionManager___c__DisplayClass32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  __9__1;

/// @brief Field sessions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessions, put=__cordl_internal_set_sessions)) ::Epic::OnlineServices::Sessions::SessionsInterface*  sessions;

static inline ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0* New_ctor() ;

/// @brief Method <DestroySession>b__0, addr 0x18157d890, size 0x170, virtual false, abstract: false, final false
inline void _DestroySession_b__0(::by_ref<::Epic::OnlineServices::Sessions::EndSessionCallbackInfo>  endInfo) ;

/// @brief Method <DestroySession>b__1, addr 0x18157da00, size 0x70, virtual false, abstract: false, final false
inline void _DestroySession_b__1(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfo>  data) ;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSSessionManager>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Sessions::OnDestroySessionCallback* const& __cordl_internal_get___9__1() const;

constexpr ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*& __cordl_internal_get___9__1() ;

constexpr ::Epic::OnlineServices::Sessions::SessionsInterface* const& __cordl_internal_get_sessions() const;

constexpr ::Epic::OnlineServices::Sessions::SessionsInterface*& __cordl_internal_get_sessions() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

constexpr void __cordl_internal_set___9__1(::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  value) ;

constexpr void __cordl_internal_set_sessions(::Epic::OnlineServices::Sessions::SessionsInterface*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager___c__DisplayClass32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager___c__DisplayClass32_0(EOSSessionManager___c__DisplayClass32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager___c__DisplayClass32_0(EOSSessionManager___c__DisplayClass32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18990};

/// @brief Field sessions, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionsInterface*  ___sessions;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  _____4__this;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0, ___sessions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<CreateSessionIfNotCreated>d__26
struct CORDL_TYPE EOSSessionManager__CreateSessionIfNotCreated_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1815771e0, size 0x240, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__CreateSessionIfNotCreated_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: None }, CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "worldName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "crossPlay", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSSessionManager__CreateSessionIfNotCreated_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field userID, offset: 0x30, size: 0x8, def value: None
 ::StringW  userID;

/// @brief Field playerName, offset: 0x38, size: 0x8, def value: None
 ::StringW  playerName;

/// @brief Field worldName, offset: 0x40, size: 0x8, def value: None
 ::StringW  worldName;

/// @brief Field crossPlay, offset: 0x48, size: 0x1, def value: None
 bool  crossPlay;

/// @brief Field platform, offset: 0x50, size: 0x8, def value: None
 ::StringW  platform;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, userID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, playerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, worldName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, crossPlay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, platform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<FindAllPublicSessions>d__28
struct CORDL_TYPE EOSSessionManager__FindAllPublicSessions_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181578370, size 0x650, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__FindAllPublicSessions_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSSessionManager__FindAllPublicSessions_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<FindFriendsSessions>d__27
struct CORDL_TYPE EOSSessionManager__FindFriendsSessions_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181578b50, size 0x670, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__FindFriendsSessions_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: None }, CppParam { name: "friendCodes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSSessionManager__FindFriendsSessions_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, ::System::Collections::Generic::List_1<::StringW>*  friendCodes, ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18993};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field friendCodes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  friendCodes;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, friendCodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<GenerateGameCode>d__22
struct CORDL_TYPE EOSSessionManager__GenerateGameCode_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157a580, size 0x4d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__GenerateGameCode_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::EOSSessionManager>", modifiers: "", def_value: None }, CppParam { name: "_attempts_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_codeGenerated_5__3", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_potentialCode_5__4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr EOSSessionManager__GenerateGameCode_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this, int32_t  _attempts_5__2, bool  _codeGenerated_5__3, ::StringW  _potentialCode_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18994};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSSessionManager>  __4__this;

/// @brief Field <attempts>5__2, offset: 0x20, size: 0x4, def value: None
 int32_t  _attempts_5__2;

/// @brief Field <codeGenerated>5__3, offset: 0x24, size: 0x1, def value: None
 bool  _codeGenerated_5__3;

/// @brief Field <potentialCode>5__4, offset: 0x28, size: 0x8, def value: None
 ::StringW  _potentialCode_5__4;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, _attempts_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, _codeGenerated_5__3) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, _potentialCode_5__4) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<IsSessionExistByCode>d__30
struct CORDL_TYPE EOSSessionManager__IsSessionExistByCode_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157b190, size 0x5f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__IsSessionExistByCode_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSSessionManager__IsSessionExistByCode_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  code, ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field code, offset: 0x20, size: 0x8, def value: None
 ::StringW  code;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, code) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EOSSessionManager/<IsSessionExistByUser>d__31
struct CORDL_TYPE EOSSessionManager__IsSessionExistByUser_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18157b780, size 0x5f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038b190, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager__IsSessionExistByUser_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "user", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr EOSSessionManager__IsSessionExistByUser_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  user, ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18996};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field user, offset: 0x20, size: 0x8, def value: None
 ::StringW  user;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, user) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSSessionManager
class CORDL_TYPE EOSSessionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CreateSessionIfNotCreated_d__26 = ::GlobalNamespace::EOSSessionManager__CreateSessionIfNotCreated_d__26;

using _FindAllPublicSessions_d__28 = ::GlobalNamespace::EOSSessionManager__FindAllPublicSessions_d__28;

using _FindFriendsSessions_d__27 = ::GlobalNamespace::EOSSessionManager__FindFriendsSessions_d__27;

using _GenerateGameCode_d__22 = ::GlobalNamespace::EOSSessionManager__GenerateGameCode_d__22;

using _IsSessionExistByCode_d__30 = ::GlobalNamespace::EOSSessionManager__IsSessionExistByCode_d__30;

using _IsSessionExistByUser_d__31 = ::GlobalNamespace::EOSSessionManager__IsSessionExistByUser_d__31;

using __c__DisplayClass24_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass24_0;

using __c__DisplayClass27_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass27_0;

using __c__DisplayClass28_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass28_0;

using __c__DisplayClass29_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass29_0;

using __c__DisplayClass30_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass31_0;

using __c__DisplayClass32_0 = ::GlobalNamespace::EOSSessionManager___c__DisplayClass32_0;

 __declspec(property(get=get_CurrentSessionCode)) ::StringW  CurrentSessionCode;

/// @brief Field OnSessionDisconnect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSessionDisconnect, put=__cordl_internal_set_OnSessionDisconnect)) ::System::Action*  OnSessionDisconnect;

 __declspec(property(get=get_SessionHostId)) ::Epic::OnlineServices::ProductUserId*  SessionHostId;

/// @brief Field currentSessionCode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSessionCode, put=__cordl_internal_set_currentSessionCode)) ::StringW  currentSessionCode;

/// @brief Field hostingSession, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hostingSession, put=__cordl_internal_set_hostingSession)) bool  hostingSession;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::EOSSessionManager>  instance;

/// @brief Field onSessionCodeCreated, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSessionCodeCreated, put=__cordl_internal_set_onSessionCodeCreated)) ::System::Action*  onSessionCodeCreated;

/// @brief Field onSessionFoundRequestResponse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSessionFoundRequestResponse, put=__cordl_internal_set_onSessionFoundRequestResponse)) ::System::Action_1<::Epic::OnlineServices::Result>*  onSessionFoundRequestResponse;

/// @brief Field sessionHostId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionHostId, put=__cordl_internal_set_sessionHostId)) ::Epic::OnlineServices::ProductUserId*  sessionHostId;

/// @brief Method Awake, addr 0x181572ae0, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCode, addr 0x181572bf0, size 0x20, virtual false, abstract: false, final false
inline void ClearCode() ;

/// @brief Method ConvertToHouseSessionInfo, addr 0x181572c10, size 0x280, virtual false, abstract: false, final false
inline ::GlobalNamespace::HouseSessionInfo* ConvertToHouseSessionInfo(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::Epic::OnlineServices::Sessions::SessionDetailsInfo  sessionDetailsInfo) ;

/// @brief Method CreateSession, addr 0x181572f90, size 0xea0, virtual false, abstract: false, final false
inline void CreateSession(::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform) ;

/// @brief Method CreateSessionIfNotCreated, addr 0x181572e90, size 0x100, virtual false, abstract: false, final false
inline void CreateSessionIfNotCreated(::StringW  userID, ::StringW  playerName, ::StringW  worldName, bool  crossPlay, ::StringW  platform) ;

/// @brief Method DestroySession, addr 0x181573e30, size 0x140, virtual false, abstract: false, final false
inline void DestroySession() ;

/// @brief Method FindAllPublicSessions, addr 0x181573f70, size 0xa0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* FindAllPublicSessions() ;

/// @brief Method FindFriendsSessions, addr 0x181574010, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::HouseSessionInfo*>*>* FindFriendsSessions(::System::Collections::Generic::List_1<::StringW>*  friendCodes) ;

/// @brief Method FindSessionAndConnectByCode, addr 0x1815740d0, size 0x330, virtual false, abstract: false, final false
inline void FindSessionAndConnectByCode(::StringW  code) ;

/// @brief Method GenerateCode, addr 0x18156f450, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<char16_t> GenerateCode() ;

/// @brief Method GenerateGameCode, addr 0x181574400, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask GenerateGameCode() ;

/// @brief Method IsSessionExistByCode, addr 0x181574490, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsSessionExistByCode(::StringW  code) ;

/// @brief Method IsSessionExistByUser, addr 0x181574520, size 0x90, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsSessionExistByUser(::StringW  user) ;

static inline ::GlobalNamespace::EOSSessionManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1815745b0, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method TryGetBoolAttribute, addr 0x181574670, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> TryGetBoolAttribute(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::StringW  key) ;

/// @brief Method TryGetStringAttribute, addr 0x181574760, size 0x100, virtual false, abstract: false, final false
static inline ::StringW TryGetStringAttribute(::Epic::OnlineServices::Sessions::SessionDetails*  details, ::StringW  key) ;

constexpr ::System::Action* const& __cordl_internal_get_OnSessionDisconnect() const;

constexpr ::System::Action*& __cordl_internal_get_OnSessionDisconnect() ;

constexpr ::StringW const& __cordl_internal_get_currentSessionCode() const;

constexpr ::StringW& __cordl_internal_get_currentSessionCode() ;

constexpr bool const& __cordl_internal_get_hostingSession() const;

constexpr bool& __cordl_internal_get_hostingSession() ;

constexpr ::System::Action* const& __cordl_internal_get_onSessionCodeCreated() const;

constexpr ::System::Action*& __cordl_internal_get_onSessionCodeCreated() ;

constexpr ::System::Action_1<::Epic::OnlineServices::Result>* const& __cordl_internal_get_onSessionFoundRequestResponse() const;

constexpr ::System::Action_1<::Epic::OnlineServices::Result>*& __cordl_internal_get_onSessionFoundRequestResponse() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_sessionHostId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_sessionHostId() ;

constexpr void __cordl_internal_set_OnSessionDisconnect(::System::Action*  value) ;

constexpr void __cordl_internal_set_currentSessionCode(::StringW  value) ;

constexpr void __cordl_internal_set_hostingSession(bool  value) ;

constexpr void __cordl_internal_set_onSessionCodeCreated(::System::Action*  value) ;

constexpr void __cordl_internal_set_onSessionFoundRequestResponse(::System::Action_1<::Epic::OnlineServices::Result>*  value) ;

constexpr void __cordl_internal_set_sessionHostId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method .ctor, addr 0x181570450, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::EOSSessionManager> getStaticF_instance() ;

/// @brief Method get_CurrentSessionCode, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_CurrentSessionCode() ;

/// @brief Method get_Instance, addr 0x181574860, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::EOSSessionManager> get_Instance() ;

/// @brief Method get_SessionHostId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_SessionHostId() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::EOSSessionManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSessionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSessionManager(EOSSessionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSessionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSessionManager(EOSSessionManager const& ) = delete;

/// @brief Field CROSSPLAY_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  CROSSPLAY_ATTRIBUTE{u"crossplay"};

/// @brief Field HOST_ID_ATTRITUBE offset 0xffffffff size 0x8
static constexpr ::ConstString  HOST_ID_ATTRITUBE{u"host_id"};

/// @brief Field JOIN_ATTRIBUTE_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  JOIN_ATTRIBUTE_NAME{u"join_code"};

/// @brief Field PLATFORM_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  PLATFORM_ATTRIBUTE{u"platform"};

/// @brief Field UNIQUE_GAMECODE_MAX_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  UNIQUE_GAMECODE_MAX_ATTEMPTS{static_cast<int32_t>(0x5)};

/// @brief Field USER_NAME_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  USER_NAME_ATTRIBUTE{u"user_name"};

/// @brief Field WORLD_NAME_ATTRIBUTE offset 0xffffffff size 0x8
static constexpr ::ConstString  WORLD_NAME_ATTRIBUTE{u"world_name"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18997};

/// @brief Field hostingSession, offset: 0x20, size: 0x1, def value: None
 bool  ___hostingSession;

/// @brief Field currentSessionCode, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___currentSessionCode;

/// @brief Field onSessionCodeCreated, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___onSessionCodeCreated;

/// @brief Field onSessionFoundRequestResponse, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Epic::OnlineServices::Result>*  ___onSessionFoundRequestResponse;

/// @brief Field OnSessionDisconnect, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnSessionDisconnect;

/// @brief Field sessionHostId, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___sessionHostId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___hostingSession) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___currentSessionCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___onSessionCodeCreated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___onSessionFoundRequestResponse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___OnSessionDisconnect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSSessionManager, ___sessionHostId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSSessionManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
