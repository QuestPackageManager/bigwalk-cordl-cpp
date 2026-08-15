#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenObserveLogger)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmates::Utils {
class BaseLogInstance;
}
namespace Shipmates::Utils {
class OpenObserveLogStream;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__ManageLogs_d__20;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__OnApplicationQuit_d__12;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__UploadLogs_d__22;
}
namespace Shipmates::Utils {
class OpenObserveManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserveLogger;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__ManageLogs_d__20;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__OnApplicationQuit_d__12;
}
namespace Shipmates::Utils {
struct OpenObserveLogger__UploadLogs_d__22;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserveLogger*);
MARK_VAL_T(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20);
MARK_VAL_T(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12);
MARK_VAL_T(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogger*, "Shipmates.Utils", "OpenObserveLogger");
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20, "Shipmates.Utils", "OpenObserveLogger/<ManageLogs>d__20");
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12, "Shipmates.Utils", "OpenObserveLogger/<OnApplicationQuit>d__12");
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22, "Shipmates.Utils", "OpenObserveLogger/<UploadLogs>d__22");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Shipmates::Utils {
// Is value type: true
// CS Name: Shipmates.Utils.OpenObserveLogger/<ManageLogs>d__20
struct CORDL_TYPE OpenObserveLogger__ManageLogs_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181acd9d0, size 0x5a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogger__ManageLogs_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr OpenObserveLogger__ManageLogs_d__20(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20) == 0x30, "Size mismatch!");

} // namespace end def Shipmates::Utils
// Dependencies Cysharp.Threading.Tasks.UniTask::Awaiter, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Shipmates::Utils {
// Is value type: true
// CS Name: Shipmates.Utils.OpenObserveLogger/<OnApplicationQuit>d__12
struct CORDL_TYPE OpenObserveLogger__OnApplicationQuit_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181acdf70, size 0x240, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogger__OnApplicationQuit_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr OpenObserveLogger__OnApplicationQuit_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12) == 0x40, "Size mismatch!");

} // namespace end def Shipmates::Utils
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace Shipmates::Utils {
// Is value type: true
// CS Name: Shipmates.Utils.OpenObserveLogger/<UploadLogs>d__22
struct CORDL_TYPE OpenObserveLogger__UploadLogs_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181ace360, size 0x7a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogger__UploadLogs_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
constexpr OpenObserveLogger__UploadLogs_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this;

/// @brief Field <>u__1, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22, __4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22) == 0x30, "Size mismatch!");

} // namespace end def Shipmates::Utils
// Dependencies UnityEngine.MonoBehaviour
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserveLogger
class CORDL_TYPE OpenObserveLogger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ManageLogs_d__20 = ::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20;

using _OnApplicationQuit_d__12 = ::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12;

using _UploadLogs_d__22 = ::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22;

/// @brief Field LogTypeToKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogTypeToKey, put=setStaticF_LogTypeToKey)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*  LogTypeToKey;

/// @brief Field _autoStartUpload, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoStartUpload, put=__cordl_internal_set__autoStartUpload)) bool  _autoStartUpload;

/// @brief Field _createLogInstanceFunction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__createLogInstanceFunction, put=setStaticF__createLogInstanceFunction)) ::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*  _createLogInstanceFunction;

/// @brief Field _logInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__logInstances, put=setStaticF__logInstances)) ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  _logInstances;

/// @brief Field _logLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__logLock, put=setStaticF__logLock)) ::System::Object*  _logLock;

/// @brief Field _logStream, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__logStream, put=__cordl_internal_set__logStream)) ::Shipmates::Utils::OpenObserveLogStream*  _logStream;

/// @brief Field _openObserveLogBucket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__openObserveLogBucket, put=__cordl_internal_set__openObserveLogBucket)) ::StringW  _openObserveLogBucket;

/// @brief Field _openObserveManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__openObserveManager, put=__cordl_internal_set__openObserveManager)) ::UnityW<::Shipmates::Utils::OpenObserveManager>  _openObserveManager;

/// @brief Field _payload, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__payload, put=__cordl_internal_set__payload)) ::System::Text::StringBuilder*  _payload;

/// @brief Field _tempLogs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempLogs, put=__cordl_internal_set__tempLogs)) ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  _tempLogs;

/// @brief Field _uploadStarted, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__uploadStarted, put=__cordl_internal_set__uploadStarted)) bool  _uploadStarted;

/// @brief Method Awake, addr 0x181acbe90, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DefaultLogInstanceCreator, addr 0x181acbf30, size 0xd0, virtual false, abstract: false, final false
static inline ::Shipmates::Utils::BaseLogInstance* DefaultLogInstanceCreator(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method GetLatestCrashFile, addr 0x181acc000, size 0x110, virtual false, abstract: false, final false
inline ::StringW GetLatestCrashFile() ;

/// @brief Method HandleLog, addr 0x181acc110, size 0x1a0, virtual false, abstract: false, final false
static inline void HandleLog(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method ManageLogs, addr 0x181acc2b0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask ManageLogs() ;

static inline ::Shipmates::Utils::OpenObserveLogger* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x181acc330, size 0x90, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method ParseCrashData, addr 0x181acc3c0, size 0x100, virtual false, abstract: false, final false
inline ::StringW ParseCrashData(::StringW  crashPath) ;

/// @brief Method ReportCrash, addr 0x181acc4c0, size 0x3d0, virtual false, abstract: false, final false
inline void ReportCrash() ;

/// @brief Method SetCreateLogInstanceFunction, addr 0x181acc890, size 0x60, virtual false, abstract: false, final false
inline void SetCreateLogInstanceFunction(::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*  createLogInstanceFunction) ;

/// @brief Method StartUpload, addr 0x181acc8f0, size 0xa0, virtual false, abstract: false, final false
inline void StartUpload() ;

/// @brief Method UploadLogs, addr 0x181acc9b0, size 0x80, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask UploadLogs() ;

/// @brief Method <ManageLogs>b__20_0, addr 0x181acc990, size 0x20, virtual false, abstract: false, final false
inline bool _ManageLogs_b__20_0() ;

constexpr bool const& __cordl_internal_get__autoStartUpload() const;

constexpr bool& __cordl_internal_get__autoStartUpload() ;

constexpr ::Shipmates::Utils::OpenObserveLogStream* const& __cordl_internal_get__logStream() const;

constexpr ::Shipmates::Utils::OpenObserveLogStream*& __cordl_internal_get__logStream() ;

constexpr ::StringW const& __cordl_internal_get__openObserveLogBucket() const;

constexpr ::StringW& __cordl_internal_get__openObserveLogBucket() ;

constexpr ::UnityW<::Shipmates::Utils::OpenObserveManager> const& __cordl_internal_get__openObserveManager() const;

constexpr ::UnityW<::Shipmates::Utils::OpenObserveManager>& __cordl_internal_get__openObserveManager() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__payload() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__payload() ;

constexpr ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>* const& __cordl_internal_get__tempLogs() const;

constexpr ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*& __cordl_internal_get__tempLogs() ;

constexpr bool const& __cordl_internal_get__uploadStarted() const;

constexpr bool& __cordl_internal_get__uploadStarted() ;

constexpr void __cordl_internal_set__autoStartUpload(bool  value) ;

constexpr void __cordl_internal_set__logStream(::Shipmates::Utils::OpenObserveLogStream*  value) ;

constexpr void __cordl_internal_set__openObserveLogBucket(::StringW  value) ;

constexpr void __cordl_internal_set__openObserveManager(::UnityW<::Shipmates::Utils::OpenObserveManager>  value) ;

constexpr void __cordl_internal_set__payload(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__tempLogs(::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  value) ;

constexpr void __cordl_internal_set__uploadStarted(bool  value) ;

/// @brief Method .ctor, addr 0x181accb90, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>* getStaticF_LogTypeToKey() ;

static inline ::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>* getStaticF__createLogInstanceFunction() ;

static inline ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>* getStaticF__logInstances() ;

static inline ::System::Object* getStaticF__logLock() ;

static inline void setStaticF_LogTypeToKey(::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*  value) ;

static inline void setStaticF__createLogInstanceFunction(::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*  value) ;

static inline void setStaticF__logInstances(::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  value) ;

static inline void setStaticF__logLock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserveLogger(OpenObserveLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserveLogger(OpenObserveLogger const& ) = delete;

/// @brief Field LATEST_CRASH_REPORTED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  LATEST_CRASH_REPORTED_KEY{u"latestCrashReported"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21061};

/// @brief Field _openObserveLogBucket, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____openObserveLogBucket;

/// @brief Field _autoStartUpload, offset: 0x28, size: 0x1, def value: None
 bool  ____autoStartUpload;

/// @brief Field _openObserveManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Shipmates::Utils::OpenObserveManager>  ____openObserveManager;

/// @brief Field _logStream, offset: 0x38, size: 0x8, def value: None
 ::Shipmates::Utils::OpenObserveLogStream*  ____logStream;

/// @brief Field _payload, offset: 0x40, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____payload;

/// @brief Field _uploadStarted, offset: 0x48, size: 0x1, def value: None
 bool  ____uploadStarted;

/// @brief Field _tempLogs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  ____tempLogs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____openObserveLogBucket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____autoStartUpload) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____openObserveManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____logStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____payload) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____uploadStarted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveLogger, ____tempLogs) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveLogger) == 0x58, "Size mismatch!");

} // namespace end def Shipmates::Utils
