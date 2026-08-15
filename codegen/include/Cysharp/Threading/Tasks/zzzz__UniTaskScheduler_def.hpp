#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
CORDL_MODULE_EXPORT(UniTaskScheduler)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskScheduler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskScheduler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskScheduler*, "Cysharp.Threading.Tasks", "UniTaskScheduler");
// Dependencies System.Object, UnityEngine.LogType
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskScheduler
class CORDL_TYPE UniTaskScheduler : public ::System::Object {
public:
// Declarations
/// @brief Field DispatchUnityMainThread, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DispatchUnityMainThread, put=setStaticF_DispatchUnityMainThread)) bool  DispatchUnityMainThread;

/// @brief Field PropagateOperationCanceledException, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_PropagateOperationCanceledException, put=setStaticF_PropagateOperationCanceledException)) bool  PropagateOperationCanceledException;

/// @brief Field UnobservedExceptionWriteLogType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UnobservedExceptionWriteLogType, put=setStaticF_UnobservedExceptionWriteLogType)) ::UnityEngine::LogType  UnobservedExceptionWriteLogType;

/// @brief Field UnobservedTaskException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnobservedTaskException, put=setStaticF_UnobservedTaskException)) ::System::Action_1<::System::Exception*>*  UnobservedTaskException;

/// @brief Field handleExceptionInvoke, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handleExceptionInvoke, put=setStaticF_handleExceptionInvoke)) ::System::Threading::SendOrPostCallback*  handleExceptionInvoke;

/// @brief Method InvokeUnobservedTaskException, addr 0x181e839e0, size 0x90, virtual false, abstract: false, final false
static inline void InvokeUnobservedTaskException(::System::Object*  state) ;

/// @brief Method PublishUnobservedTaskException, addr 0x181e83a70, size 0x210, virtual false, abstract: false, final false
static inline void PublishUnobservedTaskException(::System::Exception*  ex) ;

/// @brief Method add_UnobservedTaskException, addr 0x181e83d20, size 0xd0, virtual false, abstract: false, final false
static inline void add_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value) ;

static inline bool getStaticF_DispatchUnityMainThread() ;

static inline bool getStaticF_PropagateOperationCanceledException() ;

static inline ::UnityEngine::LogType getStaticF_UnobservedExceptionWriteLogType() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF_UnobservedTaskException() ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_handleExceptionInvoke() ;

/// @brief Method remove_UnobservedTaskException, addr 0x181e83df0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF_DispatchUnityMainThread(bool  value) ;

static inline void setStaticF_PropagateOperationCanceledException(bool  value) ;

static inline void setStaticF_UnobservedExceptionWriteLogType(::UnityEngine::LogType  value) ;

static inline void setStaticF_UnobservedTaskException(::System::Action_1<::System::Exception*>*  value) ;

static inline void setStaticF_handleExceptionInvoke(::System::Threading::SendOrPostCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskScheduler(UniTaskScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskScheduler(UniTaskScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskScheduler) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
