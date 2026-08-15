#pragma once
// IWYU pragma private; include "Shipmate/Porting/Addon/SaveDataCache.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/Addon/zzzz__SaveDataCache_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Addon/zzzz__SaveDataCache_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Shipmate/Porting/zzzz__IPlatformAddon_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::SaveDataCache_OperationType::SaveDataCache_OperationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache_OperationType::SaveDataCache_OperationType()   {
}
constexpr ::Shipmate::Porting::Addon::SaveDataCache_OperationType  Shipmate::Porting::Addon::SaveDataCache_OperationType::Save{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::Addon::SaveDataCache_OperationType  Shipmate::Porting::Addon::SaveDataCache_OperationType::Delete{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache___c::*)()>(&::Shipmate::Porting::Addon::SaveDataCache___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache___c._SaveData_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::Addon::SaveDataCache___c::*)(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache___c::_SaveData_b__10_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {"<SaveData>b__10_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache___c._DeleteData_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Shipmate::Porting::Addon::SaveDataCache___c::*)(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache___c::_DeleteData_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {"<DeleteData>b__11_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::SaveDataCache___c::setStaticF___9(::Shipmate::Porting::Addon::SaveDataCache___c*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Addon::SaveDataCache___c*, "<>9", ::Shipmate::Porting::Addon::SaveDataCache___c*>(std::forward<::Shipmate::Porting::Addon::SaveDataCache___c*>(value));
}
inline ::Shipmate::Porting::Addon::SaveDataCache___c* Shipmate::Porting::Addon::SaveDataCache___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Addon::SaveDataCache___c*, "<>9", ::Shipmate::Porting::Addon::SaveDataCache___c*>();
}
inline void Shipmate::Porting::Addon::SaveDataCache___c::setStaticF___9__10_0(::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*, "<>9__10_0", ::Shipmate::Porting::Addon::SaveDataCache___c*>(std::forward<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*>(value));
}
inline ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>* Shipmate::Porting::Addon::SaveDataCache___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*, "<>9__10_0", ::Shipmate::Porting::Addon::SaveDataCache___c*>();
}
inline void Shipmate::Porting::Addon::SaveDataCache___c::setStaticF___9__11_0(::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*, "<>9__11_0", ::Shipmate::Porting::Addon::SaveDataCache___c*>(std::forward<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*>(value));
}
inline ::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>* Shipmate::Porting::Addon::SaveDataCache___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>,::StringW,bool>*, "<>9__11_0", ::Shipmate::Porting::Addon::SaveDataCache___c*>();
}
inline void Shipmate::Porting::Addon::SaveDataCache___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Shipmate::Porting::Addon::SaveDataCache___c::_SaveData_b__10_0(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>  tuple, ::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {"<SaveData>b__10_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tuple, file);
}
inline bool Shipmate::Porting::Addon::SaveDataCache___c::_DeleteData_b__11_0(::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>  tuple, ::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache___c*>(),
                        {"<DeleteData>b__11_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tuple, file);
}
inline ::Shipmate::Porting::Addon::SaveDataCache___c* Shipmate::Porting::Addon::SaveDataCache___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Addon::SaveDataCache___c*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache___c::SaveDataCache___c()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::*)()>(&::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x181ac38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::SaveDataCache__DoDeleteData_d__13(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->subFolder = subFolder;
this->fileName = fileName;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache__DoDeleteData_d__13::SaveDataCache__DoDeleteData_d__13()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::*)()>(&::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181ac3d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::SaveDataCache__DoSaveData_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->subFolder = subFolder;
this->fileName = fileName;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache__DoSaveData_d__12::SaveDataCache__DoSaveData_d__12()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::*)()>(&::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x181ac4190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "subFolder", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Addon::SaveDataCache*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::SaveDataCache__PreloadData_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::StringW  subFolder, ::StringW  fileName, ::Shipmate::Porting::Addon::SaveDataCache*  __4__this, ::StringW  _filePath_5__2, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::ArrayW<uint8_t>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->subFolder = subFolder;
this->fileName = fileName;
this->__4__this = __4__this;
this->_filePath_5__2 = _filePath_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache__PreloadData_d__7::SaveDataCache__PreloadData_d__7()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache::*)()>(&::Shipmate::Porting::Addon::SaveDataCache::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ac2e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.PreloadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::PreloadData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181ac33a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"PreloadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::GetData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ac3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"GetData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.GetAllEntriesInFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::ArrayW<uint8_t>>>* (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::GetAllEntriesInFolder)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181ac30c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"GetAllEntriesInFolder", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.SaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::ArrayW<uint8_t>, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::SaveData)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181ac3540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"SaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.DeleteData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::DeleteData)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x181ac2b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DeleteData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.DoSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::DoSaveData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ac3010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DoSaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.DoDeleteData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::Shipmate::Porting::Addon::SaveDataCache::*)(::StringW, ::StringW)>(&::Shipmate::Porting::Addon::SaveDataCache::DoDeleteData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ac2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DoDeleteData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache.DequeueNextOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache::*)()>(&::Shipmate::Porting::Addon::SaveDataCache::DequeueNextOp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DequeueNextOp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::Addon::SaveDataCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Addon::SaveDataCache::*)()>(&::Shipmate::Porting::Addon::SaveDataCache::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac3870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_dataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>* const& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_dataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataCache;
}
constexpr void Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_set_dataCache(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataCache = value;
}
constexpr bool& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_busy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___busy;
}
constexpr bool const& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_busy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___busy;
}
constexpr void Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_set_busy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___busy = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_operationQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operationQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>* const& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_operationQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___operationQueue;
}
constexpr void Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_set_operationQueue(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Shipmate::Porting::Addon::SaveDataCache_OperationType,::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___operationQueue = value;
}
constexpr ::Shipmate::Porting::AbstractPlatformStorage*& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_storage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storage;
}
constexpr ::Shipmate::Porting::AbstractPlatformStorage* const& Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_get_storage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storage;
}
constexpr void Shipmate::Porting::Addon::SaveDataCache::__cordl_internal_set_storage(::Shipmate::Porting::AbstractPlatformStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storage = value;
}
inline void Shipmate::Porting::Addon::SaveDataCache::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::Addon::SaveDataCache*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::Addon::SaveDataCache::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::Addon::SaveDataCache*>();
}
inline void Shipmate::Porting::Addon::SaveDataCache::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::Addon::SaveDataCache::Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                    {"Initialize", {::i2c::class_of<T>()}, {::i2c::type_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aManager);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Addon::SaveDataCache::PreloadData(::StringW  fileName, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"PreloadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, fileName, subFolder);
}
inline ::ArrayW<uint8_t> Shipmate::Porting::Addon::SaveDataCache::GetData(::StringW  fileName, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"GetData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, fileName, subFolder);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::ArrayW<uint8_t>>>* Shipmate::Porting::Addon::SaveDataCache::GetAllEntriesInFolder(::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"GetAllEntriesInFolder", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::ArrayW<uint8_t>>>*>(this, ___internal_method, subFolder);
}
inline void Shipmate::Porting::Addon::SaveDataCache::SaveData(::StringW  fileName, ::ArrayW<uint8_t>  data, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"SaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, data, subFolder);
}
inline void Shipmate::Porting::Addon::SaveDataCache::DeleteData(::StringW  fileName, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DeleteData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, subFolder);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Shipmate::Porting::Addon::SaveDataCache::DoSaveData(::StringW  fileName, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DoSaveData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, fileName, subFolder);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Shipmate::Porting::Addon::SaveDataCache::DoDeleteData(::StringW  fileName, ::StringW  subFolder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DoDeleteData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, fileName, subFolder);
}
inline void Shipmate::Porting::Addon::SaveDataCache::DequeueNextOp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {"DequeueNextOp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::Addon::SaveDataCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Addon::SaveDataCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::Addon::SaveDataCache* Shipmate::Porting::Addon::SaveDataCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Addon::SaveDataCache*>());
}
/// @brief Convert operator to "::Shipmate::Porting::IPlatformAddon"
constexpr  Shipmate::Porting::Addon::SaveDataCache::operator ::Shipmate::Porting::IPlatformAddon*() noexcept {
return static_cast<::Shipmate::Porting::IPlatformAddon*>(static_cast<void*>(this));
}
/// @brief Convert to "::Shipmate::Porting::IPlatformAddon"
constexpr ::Shipmate::Porting::IPlatformAddon* Shipmate::Porting::Addon::SaveDataCache::i___Shipmate__Porting__IPlatformAddon() noexcept {
return static_cast<::Shipmate::Porting::IPlatformAddon*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Shipmate::Porting::Addon::SaveDataCache::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Shipmate::Porting::Addon::SaveDataCache::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Addon::SaveDataCache::SaveDataCache()   {
}
