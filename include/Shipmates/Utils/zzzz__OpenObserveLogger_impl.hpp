#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveLogger.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogger_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmates/Utils/zzzz__BaseLogInstance_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogStream_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveLogger_def.hpp"
#include "Shipmates/Utils/zzzz__OpenObserveManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::*)()>(&::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x181acd9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::OpenObserveLogger__ManageLogs_d__20(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogger__ManageLogs_d__20::OpenObserveLogger__ManageLogs_d__20()   {
}
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::*)()>(&::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181acdf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::OpenObserveLogger__OnApplicationQuit_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogger__OnApplicationQuit_d__12::OpenObserveLogger__OnApplicationQuit_d__12()   {
}
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::*)()>(&::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x181ace360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Shipmates::Utils::OpenObserveLogger>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::OpenObserveLogger__UploadLogs_d__22(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::Shipmates::Utils::OpenObserveLogger>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogger__UploadLogs_d__22::OpenObserveLogger__UploadLogs_d__22()   {
}
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181acbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181acc330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.ReportCrash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::ReportCrash)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181acc4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ReportCrash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.GetLatestCrashFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::GetLatestCrashFile)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181acc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"GetLatestCrashFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.ParseCrashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::Utils::OpenObserveLogger::*)(::StringW)>(&::Shipmates::Utils::OpenObserveLogger::ParseCrashData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181acc3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ParseCrashData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.StartUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::StartUpload)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181acc8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"StartUpload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.SetCreateLogInstanceFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)(::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*)>(&::Shipmates::Utils::OpenObserveLogger::SetCreateLogInstanceFunction)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"SetCreateLogInstanceFunction", {}, {::i2c::type_of<::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.DefaultLogInstanceCreator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::Utils::BaseLogInstance* (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Shipmates::Utils::OpenObserveLogger::DefaultLogInstanceCreator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181acbf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"DefaultLogInstanceCreator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.HandleLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Shipmates::Utils::OpenObserveLogger::HandleLog)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181acc110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"HandleLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.ManageLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::ManageLogs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181acc2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ManageLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger.UploadLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::UploadLogs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181acc9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"UploadLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181accb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::Utils::OpenObserveLogger._ManageLogs_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmates::Utils::OpenObserveLogger::*)()>(&::Shipmates::Utils::OpenObserveLogger::_ManageLogs_b__20_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181acc990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"<ManageLogs>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__openObserveLogBucket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openObserveLogBucket;
}
constexpr ::StringW const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__openObserveLogBucket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openObserveLogBucket;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__openObserveLogBucket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openObserveLogBucket = value;
}
constexpr bool& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__autoStartUpload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartUpload;
}
constexpr bool const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__autoStartUpload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoStartUpload;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__autoStartUpload(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoStartUpload = value;
}
constexpr ::UnityW<::Shipmates::Utils::OpenObserveManager>& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__openObserveManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openObserveManager;
}
constexpr ::UnityW<::Shipmates::Utils::OpenObserveManager> const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__openObserveManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openObserveManager;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__openObserveManager(::UnityW<::Shipmates::Utils::OpenObserveManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openObserveManager = value;
}
constexpr ::Shipmates::Utils::OpenObserveLogStream*& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__logStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logStream;
}
constexpr ::Shipmates::Utils::OpenObserveLogStream* const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__logStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logStream;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__logStream(::Shipmates::Utils::OpenObserveLogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logStream = value;
}
constexpr ::System::Text::StringBuilder*& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payload;
}
constexpr ::System::Text::StringBuilder* const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payload;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__payload(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____payload = value;
}
constexpr bool& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__uploadStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadStarted;
}
constexpr bool const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__uploadStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadStarted;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__uploadStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadStarted = value;
}
constexpr ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__tempLogs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempLogs;
}
constexpr ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>* const& Shipmates::Utils::OpenObserveLogger::__cordl_internal_get__tempLogs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempLogs;
}
constexpr void Shipmates::Utils::OpenObserveLogger::__cordl_internal_set__tempLogs(::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempLogs = value;
}
inline void Shipmates::Utils::OpenObserveLogger::setStaticF_LogTypeToKey(::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*, "LogTypeToKey", ::Shipmates::Utils::OpenObserveLogger*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>* Shipmates::Utils::OpenObserveLogger::getStaticF_LogTypeToKey()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::LogType,::StringW>*, "LogTypeToKey", ::Shipmates::Utils::OpenObserveLogger*>();
}
inline void Shipmates::Utils::OpenObserveLogger::setStaticF__createLogInstanceFunction(::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*, "_createLogInstanceFunction", ::Shipmates::Utils::OpenObserveLogger*>(std::forward<::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*>(value));
}
inline ::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>* Shipmates::Utils::OpenObserveLogger::getStaticF__createLogInstanceFunction()  {
return ::cordl_internals::getStaticField<::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*, "_createLogInstanceFunction", ::Shipmates::Utils::OpenObserveLogger*>();
}
inline void Shipmates::Utils::OpenObserveLogger::setStaticF__logInstances(::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*, "_logInstances", ::Shipmates::Utils::OpenObserveLogger*>(std::forward<::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>* Shipmates::Utils::OpenObserveLogger::getStaticF__logInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Shipmates::Utils::BaseLogInstance*>*, "_logInstances", ::Shipmates::Utils::OpenObserveLogger*>();
}
inline void Shipmates::Utils::OpenObserveLogger::setStaticF__logLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_logLock", ::Shipmates::Utils::OpenObserveLogger*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Shipmates::Utils::OpenObserveLogger::getStaticF__logLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_logLock", ::Shipmates::Utils::OpenObserveLogger*>();
}
inline void Shipmates::Utils::OpenObserveLogger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger::ReportCrash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ReportCrash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Shipmates::Utils::OpenObserveLogger::GetLatestCrashFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"GetLatestCrashFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Shipmates::Utils::OpenObserveLogger::ParseCrashData(::StringW  crashPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ParseCrashData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, crashPath);
}
inline void Shipmates::Utils::OpenObserveLogger::StartUpload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"StartUpload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger::SetCreateLogInstanceFunction(::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*  createLogInstanceFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"SetCreateLogInstanceFunction", {}, {::i2c::type_of<::System::Func_4<::StringW,::StringW,::UnityEngine::LogType,::Shipmates::Utils::BaseLogInstance*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createLogInstanceFunction);
}
inline ::Shipmates::Utils::BaseLogInstance* Shipmates::Utils::OpenObserveLogger::DefaultLogInstanceCreator(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"DefaultLogInstanceCreator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::Utils::BaseLogInstance*>(nullptr, ___internal_method, condition, stackTrace, type);
}
inline void Shipmates::Utils::OpenObserveLogger::HandleLog(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"HandleLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, stackTrace, type);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmates::Utils::OpenObserveLogger::ManageLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"ManageLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmates::Utils::OpenObserveLogger::UploadLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"UploadLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Shipmates::Utils::OpenObserveLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Shipmates::Utils::OpenObserveLogger::_ManageLogs_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::OpenObserveLogger*>(),
                        {"<ManageLogs>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Shipmates::Utils::OpenObserveLogger* Shipmates::Utils::OpenObserveLogger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::Utils::OpenObserveLogger*>());
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::OpenObserveLogger::OpenObserveLogger()   {
}
