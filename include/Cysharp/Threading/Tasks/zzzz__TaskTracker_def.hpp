#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TaskTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskTracker)
namespace Cysharp::Threading::Tasks::Internal {
template<typename TKey,typename TValue>
class WeakDictionary_2;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class Action_5;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class TaskTracker;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::TaskTracker*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::TaskTracker*, "Cysharp.Threading.Tasks", "TaskTracker");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.TaskTracker
class CORDL_TYPE TaskTracker : public ::System::Object {
public:
// Declarations
/// @brief Field dirty, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dirty, put=setStaticF_dirty)) bool  dirty;

/// @brief Field listPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_listPool, put=setStaticF_listPool)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*  listPool;

/// @brief Field tracking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tracking, put=setStaticF_tracking)) ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*  tracking;

/// @brief Method CheckAndResetDirty, addr 0x181e632e0, size 0x40, virtual false, abstract: false, final false
static inline bool CheckAndResetDirty() ;

/// @brief Method ForEachActiveTask, addr 0x181e63320, size 0x440, virtual false, abstract: false, final false
static inline void ForEachActiveTask(::System::Action_5<int32_t,::StringW,::Cysharp::Threading::Tasks::UniTaskStatus,::System::DateTime,::StringW>*  action) ;

/// @brief Method RemoveTracking, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTracking(::Cysharp::Threading::Tasks::IUniTaskSource*  task) ;

/// @brief Method TrackActiveTask, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void TrackActiveTask(::Cysharp::Threading::Tasks::IUniTaskSource*  task, int32_t  skipFrame) ;

/// @brief Method TypeBeautify, addr 0x181e63760, size 0x210, virtual false, abstract: false, final false
static inline void TypeBeautify(::System::Type*  type, ::System::Text::StringBuilder*  sb) ;

static inline bool getStaticF_dirty() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>* getStaticF_listPool() ;

static inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>* getStaticF_tracking() ;

static inline void setStaticF_dirty(bool  value) ;

static inline void setStaticF_listPool(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>>*  value) ;

static inline void setStaticF_tracking(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<::Cysharp::Threading::Tasks::IUniTaskSource*,::System::ValueTuple_4<::StringW,int32_t,::System::DateTime,::StringW>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskTracker(TaskTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskTracker(TaskTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::TaskTracker) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
