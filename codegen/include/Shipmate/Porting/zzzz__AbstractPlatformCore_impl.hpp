#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformCore.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLogic_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Logs/zzzz__PlatformLog_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_def.hpp"
#include "Shipmate/Porting/zzzz__KeyboardContent_def.hpp"
#include "Shipmate/Porting/zzzz__VirtualKeyboardShowType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::*)()>(&::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x181ac7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aString", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformCore*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::AbstractPlatformCore__AsyncSanitizedString_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aString, ::Shipmate::Porting::AbstractPlatformCore*  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aString = aString;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformCore__AsyncSanitizedString_d__12::AbstractPlatformCore__AsyncSanitizedString_d__12()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::*)()>(&::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181ac7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::AbstractPlatformCore*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::AbstractPlatformCore__CallOnSuspending_d__15(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::AbstractPlatformCore*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformCore__CallOnSuspending_d__15::AbstractPlatformCore__CallOnSuspending_d__15()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::*)()>(&::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ac7e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aStartStr", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::AbstractPlatformCore__GetVirtualKeyboardInput_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aStartStr) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aStartStr = aStartStr;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformCore__GetVirtualKeyboardInput_d__19::AbstractPlatformCore__GetVirtualKeyboardInput_d__19()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::*)()>(&::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ac7e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aString", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::AbstractPlatformCore__InternalAsyncSanitizedString_d__18(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  aString) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->aString = aString;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformCore__InternalAsyncSanitizedString_d__18::AbstractPlatformCore__InternalAsyncSanitizedString_d__18()   {
}
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.add_OnResuming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformCore::add_OnResuming)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"add_OnResuming", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.remove_OnResuming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Action*)>(&::Shipmate::Porting::AbstractPlatformCore::remove_OnResuming)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802fc360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"remove_OnResuming", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.add_OnOverlayShownChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Action_1<bool>*)>(&::Shipmate::Porting::AbstractPlatformCore::add_OnOverlayShownChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac5080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"add_OnOverlayShownChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.remove_OnOverlayShownChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Action_1<bool>*)>(&::Shipmate::Porting::AbstractPlatformCore::remove_OnOverlayShownChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"remove_OnOverlayShownChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac4fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.CoreInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::CoreInitialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.AsyncSanitizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (::Shipmate::Porting::AbstractPlatformCore::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformCore::AsyncSanitizedString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ac4d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"AsyncSanitizedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.RegisterOnSuspendingListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*)>(&::Shipmate::Porting::AbstractPlatformCore::RegisterOnSuspendingListener)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ac4ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"RegisterOnSuspendingListener", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.UnregisterOnSuspendingListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*)>(&::Shipmate::Porting::AbstractPlatformCore::UnregisterOnSuspendingListener)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"UnregisterOnSuspendingListener", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.CallOnSuspending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::CallOnSuspending)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ac4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"CallOnSuspending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.CallOnResuming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::CallOnResuming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac4dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"CallOnResuming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.SetOnlineMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(bool)>(&::Shipmate::Porting::AbstractPlatformCore::SetOnlineMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.InternalAsyncSanitizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (::Shipmate::Porting::AbstractPlatformCore::*)(::StringW)>(&::Shipmate::Porting::AbstractPlatformCore::InternalAsyncSanitizedString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.GetVirtualKeyboardInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (::Shipmate::Porting::AbstractPlatformCore::*)(::StringW, ::StringW, ::StringW, ::Shipmate::Porting::KeyboardContent, ::Shipmate::Porting::VirtualKeyboardShowType, int32_t)>(&::Shipmate::Porting::AbstractPlatformCore::GetVirtualKeyboardInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ac4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.get_AccountLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmate::Porting::AbstractPlatformCore::*)()>(&::Shipmate::Porting::AbstractPlatformCore::get_AccountLanguage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                    {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Porting::AbstractPlatformCore.DoOnOverlayShownChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::AbstractPlatformCore::*)(bool)>(&::Shipmate::Porting::AbstractPlatformCore::DoOnOverlayShownChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac4e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"DoOnOverlayShownChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_mOnSuspendingListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOnSuspendingListeners;
}
constexpr ::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>* const& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_mOnSuspendingListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mOnSuspendingListeners;
}
constexpr void Shipmate::Porting::AbstractPlatformCore::__cordl_internal_set_mOnSuspendingListeners(::System::Collections::Generic::List_1<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mOnSuspendingListeners = value;
}
constexpr ::System::Action*& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_OnResuming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResuming;
}
constexpr ::System::Action* const& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_OnResuming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResuming;
}
constexpr void Shipmate::Porting::AbstractPlatformCore::__cordl_internal_set_OnResuming(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnResuming = value;
}
constexpr ::System::Action_1<bool>*& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_OnOverlayShownChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverlayShownChanged;
}
constexpr ::System::Action_1<bool>* const& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_OnOverlayShownChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOverlayShownChanged;
}
constexpr void Shipmate::Porting::AbstractPlatformCore::__cordl_internal_set_OnOverlayShownChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOverlayShownChanged = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_mSanitizedString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSanitizedString;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Shipmate::Porting::AbstractPlatformCore::__cordl_internal_get_mSanitizedString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mSanitizedString;
}
constexpr void Shipmate::Porting::AbstractPlatformCore::__cordl_internal_set_mSanitizedString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mSanitizedString = value;
}
inline void Shipmate::Porting::AbstractPlatformCore::setStaticF_Log(::Shipmate::Porting::Logs::PlatformLog*  value)  {
::cordl_internals::setStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformCore*>(std::forward<::Shipmate::Porting::Logs::PlatformLog*>(value));
}
inline ::Shipmate::Porting::Logs::PlatformLog* Shipmate::Porting::AbstractPlatformCore::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Shipmate::Porting::Logs::PlatformLog*, "Log", ::Shipmate::Porting::AbstractPlatformCore*>();
}
inline void Shipmate::Porting::AbstractPlatformCore::add_OnResuming(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"add_OnResuming", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformCore::remove_OnResuming(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"remove_OnResuming", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformCore::add_OnOverlayShownChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"add_OnOverlayShownChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformCore::remove_OnOverlayShownChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"remove_OnOverlayShownChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Shipmate::Porting::AbstractPlatformCore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore::CoreInitialization()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Shipmate::Porting::AbstractPlatformCore::AsyncSanitizedString(::StringW  aString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"AsyncSanitizedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(this, ___internal_method, aString);
}
inline void Shipmate::Porting::AbstractPlatformCore::RegisterOnSuspendingListener(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  aOnSuspendingTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"RegisterOnSuspendingListener", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aOnSuspendingTask);
}
inline void Shipmate::Porting::AbstractPlatformCore::UnregisterOnSuspendingListener(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  aOnSuspendingTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"UnregisterOnSuspendingListener", {}, {::i2c::type_of<::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aOnSuspendingTask);
}
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformCore::CallOnSuspending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"CallOnSuspending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore::CallOnResuming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"CallOnResuming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore::SetOnlineMode(bool  aOnline)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aOnline);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Shipmate::Porting::AbstractPlatformCore::InternalAsyncSanitizedString(::StringW  aString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(this, ___internal_method, aString);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Shipmate::Porting::AbstractPlatformCore::GetVirtualKeyboardInput(::StringW  aStartStr, ::StringW  aPopupTitle, ::StringW  aPopupDesc, ::Shipmate::Porting::KeyboardContent  contentType, ::Shipmate::Porting::VirtualKeyboardShowType  aKeyboardType, int32_t  aMaxLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(this, ___internal_method, aStartStr, aPopupTitle, aPopupDesc, contentType, aKeyboardType, aMaxLength);
}
inline ::StringW Shipmate::Porting::AbstractPlatformCore::get_AccountLanguage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Shipmate::Porting::AbstractPlatformCore::DoOnOverlayShownChanged(bool  aShown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformCore*>(),
                        {"DoOnOverlayShownChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aShown);
}
inline ::Shipmate::Porting::AbstractPlatformCore* Shipmate::Porting::AbstractPlatformCore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformCore*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::AbstractPlatformCore::AbstractPlatformCore()   {
}
