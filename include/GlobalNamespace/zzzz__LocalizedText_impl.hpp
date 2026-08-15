#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedText.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalizedText_MaterialType::LocalizedText_MaterialType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedText_MaterialType::LocalizedText_MaterialType()   {
}
constexpr ::GlobalNamespace::LocalizedText_MaterialType  GlobalNamespace::LocalizedText_MaterialType::Transparent{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LocalizedText_MaterialType  GlobalNamespace::LocalizedText_MaterialType::Cutout{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalizedText_DisplayType::LocalizedText_DisplayType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedText_DisplayType::LocalizedText_DisplayType()   {
}
constexpr ::GlobalNamespace::LocalizedText_DisplayType  GlobalNamespace::LocalizedText_DisplayType::Key{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LocalizedText_DisplayType  GlobalNamespace::LocalizedText_DisplayType::RawValue{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText__DelaySetBounds_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::*)()>(&::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180408fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText__DelaySetBounds_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText__DelaySetBounds_d__17.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText__DelaySetBounds_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizedText__DelaySetBounds_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText__DelaySetBounds_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText__DelaySetBounds_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText__DelaySetBounds_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LocalizedText__DelaySetBounds_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LocalizedText__DelaySetBounds_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::LocalizedText__DelaySetBounds_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::TMPro::TMP_Text>  text, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->text = text;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedText__DelaySetBounds_d__17::LocalizedText__DelaySetBounds_d__17()   {
}
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.RefreshAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LocalizedText::RefreshAll)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180402e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"RefreshAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180402c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::LocalizedText::GetLocalizedString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::Refresh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180402eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::GlobalNamespace::LocalizationLanguage)>(&::GlobalNamespace::LocalizedText::Refresh)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180403000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Refresh", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.DelaySetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::GlobalNamespace::LocalizedText::DelaySetBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180402820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"DelaySetBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.OnTransformParentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180402e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.FixBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::GlobalNamespace::LocalizedText::FixBounds)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1804028b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"FixBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180402d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180402c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.ChangeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::ChangeKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804026d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.ChangeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW)>(&::GlobalNamespace::LocalizedText::ChangeValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180402730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"ChangeValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText.Change
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)(::StringW, ::GlobalNamespace::LocalizedText_DisplayType)>(&::GlobalNamespace::LocalizedText::Change)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180402790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Change", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_DisplayType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedText::*)()>(&::GlobalNamespace::LocalizedText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LocalizedText_DisplayType& GlobalNamespace::LocalizedText::__cordl_internal_get_displayType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayType;
}
constexpr ::GlobalNamespace::LocalizedText_DisplayType const& GlobalNamespace::LocalizedText::__cordl_internal_get_displayType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayType;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_displayType(::GlobalNamespace::LocalizedText_DisplayType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayType = value;
}
constexpr ::StringW& GlobalNamespace::LocalizedText::__cordl_internal_get_rawValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawValue;
}
constexpr ::StringW const& GlobalNamespace::LocalizedText::__cordl_internal_get_rawValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawValue;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_rawValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawValue = value;
}
constexpr ::StringW& GlobalNamespace::LocalizedText::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& GlobalNamespace::LocalizedText::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::GlobalNamespace::LocalizedText_MaterialType& GlobalNamespace::LocalizedText::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr ::GlobalNamespace::LocalizedText_MaterialType const& GlobalNamespace::LocalizedText::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_materialType(::GlobalNamespace::LocalizedText_MaterialType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
constexpr bool& GlobalNamespace::LocalizedText::__cordl_internal_get_delaySetBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delaySetBounds;
}
constexpr bool const& GlobalNamespace::LocalizedText::__cordl_internal_get_delaySetBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delaySetBounds;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_delaySetBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delaySetBounds = value;
}
constexpr bool& GlobalNamespace::LocalizedText::__cordl_internal_get_noGlyphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noGlyphs;
}
constexpr bool const& GlobalNamespace::LocalizedText::__cordl_internal_get_noGlyphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noGlyphs;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_noGlyphs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noGlyphs = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::LocalizedText::__cordl_internal_get_textElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textElement;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::LocalizedText::__cordl_internal_get_textElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textElement;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_textElement(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textElement = value;
}
constexpr bool& GlobalNamespace::LocalizedText::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::LocalizedText::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::System::Action*& GlobalNamespace::LocalizedText::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action* const& GlobalNamespace::LocalizedText::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::LocalizedText::__cordl_internal_set_onChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::LocalizedText::setStaticF_onRefresh(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onRefresh", ::GlobalNamespace::LocalizedText*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::LocalizedText::getStaticF_onRefresh()  {
return ::cordl_internals::getStaticField<::System::Action*, "onRefresh", ::GlobalNamespace::LocalizedText*>();
}
inline void GlobalNamespace::LocalizedText::RefreshAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"RefreshAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalizedText::GetLocalizedString(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline void GlobalNamespace::LocalizedText::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::Refresh(::GlobalNamespace::LocalizationLanguage  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Refresh", {}, {::i2c::type_of<::GlobalNamespace::LocalizationLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline void GlobalNamespace::LocalizedText::DelaySetBounds(::TMPro::TMP_Text*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"DelaySetBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text);
}
inline void GlobalNamespace::LocalizedText::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::FixBounds(::TMPro::TMP_Text*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"FixBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text);
}
inline void GlobalNamespace::LocalizedText::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedText::ChangeKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"ChangeKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::LocalizedText::ChangeValue(::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"ChangeValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::LocalizedText::Change(::StringW  newString, ::GlobalNamespace::LocalizedText_DisplayType  displayType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {"Change", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalizedText_DisplayType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newString, displayType);
}
inline void GlobalNamespace::LocalizedText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizedText* GlobalNamespace::LocalizedText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedText::LocalizedText()   {
}
