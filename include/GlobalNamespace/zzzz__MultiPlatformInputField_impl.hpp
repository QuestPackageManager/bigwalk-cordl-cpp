#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiPlatformInputField.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Porting/zzzz__KeyboardContent_impl.hpp"
#include "TMPro/zzzz__TMP_InputField_impl.hpp"
#include "GlobalNamespace/zzzz__MultiPlatformInputField_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__MultiPlatformInputField_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::*)()>(&::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18038d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MultiPlatformInputField>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSubmit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::MultiPlatformInputField__SelectNextFrame_d__16(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this, bool  onSubmit, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onSubmit = onSubmit;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiPlatformInputField__SelectNextFrame_d__16::MultiPlatformInputField__SelectNextFrame_d__16()   {
}
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::*)()>(&::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x18038ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MultiPlatformInputField>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::MultiPlatformInputField__UseVirtualKeyboard_d__19(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::MultiPlatformInputField>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::StringW>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiPlatformInputField__UseVirtualKeyboard_d__19::MultiPlatformInputField__UseVirtualKeyboard_d__19()   {
}
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)()>(&::GlobalNamespace::MultiPlatformInputField::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                    {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)()>(&::GlobalNamespace::MultiPlatformInputField::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                    {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnPointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::MultiPlatformInputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037eb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                    {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OpenVirtualInputField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)()>(&::GlobalNamespace::MultiPlatformInputField::OpenVirtualInputField)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OpenVirtualInputField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::MultiPlatformInputField::OnSubmit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                    {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::MultiPlatformInputField::OnCancel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                    {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.SelectNextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::MultiPlatformInputField::*)(bool)>(&::GlobalNamespace::MultiPlatformInputField::SelectNextFrame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"SelectNextFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnSubmitConsole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::MultiPlatformInputField::OnSubmitConsole)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18037eb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OnSubmitConsole", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.OnCancelConsole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::MultiPlatformInputField::OnCancelConsole)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OnCancelConsole", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField.UseVirtualKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::GlobalNamespace::MultiPlatformInputField::*)()>(&::GlobalNamespace::MultiPlatformInputField::UseVirtualKeyboard)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"UseVirtualKeyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiPlatformInputField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiPlatformInputField::*)()>(&::GlobalNamespace::MultiPlatformInputField::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::KeyboardContent& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_contentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr ::Shipmate::Porting::KeyboardContent const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_contentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_contentType(::Shipmate::Porting::KeyboardContent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentType = value;
}
constexpr bool& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_isPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPassword;
}
constexpr bool const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_isPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPassword;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_isPassword(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPassword = value;
}
constexpr bool& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_trimEndingWhiteSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trimEndingWhiteSpace;
}
constexpr bool const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_trimEndingWhiteSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trimEndingWhiteSpace;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_trimEndingWhiteSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trimEndingWhiteSpace = value;
}
constexpr int32_t& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_maxLengthPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLengthPC;
}
constexpr int32_t const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_maxLengthPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLengthPC;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_maxLengthPC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLengthPC = value;
}
constexpr int32_t& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_maxLengthConsole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLengthConsole;
}
constexpr int32_t const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_maxLengthConsole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLengthConsole;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_maxLengthConsole(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLengthConsole = value;
}
constexpr ::StringW& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_title_loc_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title_loc_key;
}
constexpr ::StringW const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_title_loc_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___title_loc_key;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_title_loc_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___title_loc_key = value;
}
constexpr ::StringW& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_description_loc_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description_loc_key;
}
constexpr ::StringW const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_description_loc_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description_loc_key;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_description_loc_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description_loc_key = value;
}
constexpr bool& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_reSelectOnSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reSelectOnSubmit;
}
constexpr bool const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_reSelectOnSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reSelectOnSubmit;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_reSelectOnSubmit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reSelectOnSubmit = value;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable>& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_toSelectOnSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSelectOnSubmit;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_toSelectOnSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSelectOnSubmit;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_toSelectOnSubmit(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toSelectOnSubmit = value;
}
constexpr bool& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_restoreMulti()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreMulti;
}
constexpr bool const& GlobalNamespace::MultiPlatformInputField::__cordl_internal_get_restoreMulti() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restoreMulti;
}
constexpr void GlobalNamespace::MultiPlatformInputField::__cordl_internal_set_restoreMulti(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restoreMulti = value;
}
inline void GlobalNamespace::MultiPlatformInputField::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MultiPlatformInputField::OpenVirtualInputField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OpenVirtualInputField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MultiPlatformInputField::OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::MultiPlatformInputField::SelectNextFrame(bool  onSubmit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"SelectNextFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, onSubmit);
}
inline void GlobalNamespace::MultiPlatformInputField::OnSubmitConsole(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OnSubmitConsole", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MultiPlatformInputField::OnCancelConsole(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"OnCancelConsole", {}, {::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::MultiPlatformInputField::UseVirtualKeyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {"UseVirtualKeyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void GlobalNamespace::MultiPlatformInputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MultiPlatformInputField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiPlatformInputField* GlobalNamespace::MultiPlatformInputField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiPlatformInputField*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiPlatformInputField::MultiPlatformInputField()   {
}
