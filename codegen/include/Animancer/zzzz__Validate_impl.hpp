#pragma once
// IWYU pragma private; include "Animancer/Validate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__Validate_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__OptionalWarning_def.hpp"
#include "Animancer/zzzz__Validate_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Validate_Value::Validate_Value(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::Validate_Value::Validate_Value()   {
}
constexpr ::Animancer::Validate_Value  Animancer::Validate_Value::Any{static_cast<int32_t>(0x0)};
constexpr ::Animancer::Validate_Value  Animancer::Validate_Value::ZeroToOne{static_cast<int32_t>(0x1)};
constexpr ::Animancer::Validate_Value  Animancer::Validate_Value::IsNotNegative{static_cast<int32_t>(0x2)};
constexpr ::Animancer::Validate_Value  Animancer::Validate_Value::IsFinite{static_cast<int32_t>(0x3)};
constexpr ::Animancer::Validate_Value  Animancer::Validate_Value::IsFiniteOrNaN{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::Animancer::Validate.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::OptionalWarning)>(&::Animancer::Validate::Disable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Disable", {}, {::i2c::type_of<::Animancer::OptionalWarning>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::OptionalWarning)>(&::Animancer::Validate::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Enable", {}, {::i2c::type_of<::Animancer::OptionalWarning>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::OptionalWarning, bool)>(&::Animancer::Validate::SetEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Animancer::OptionalWarning>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::OptionalWarning, ::StringW, ::System::Object*)>(&::Animancer::Validate::Log)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Log", {}, {::i2c::type_of<::Animancer::OptionalWarning>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.ValueRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::Animancer::Validate_Value)>(&::Animancer::Validate::ValueRule)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803160c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"ValueRule", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Animancer::Validate_Value>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.AssertNotLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimationClip*)>(&::Animancer::Validate::AssertNotLegacy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertNotLegacy", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.AssertRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*, ::Animancer::AnimancerPlayable*)>(&::Animancer::Validate::AssertRoot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertRoot", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.AssertPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*)>(&::Animancer::Validate::AssertPlayable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertPlayable", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Validate.AssertCanRemoveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerState*, ::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*, int32_t)>(&::Animancer::Validate::AssertCanRemoveChild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertCanRemoveChild", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Validate::Disable(::Animancer::OptionalWarning  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Disable", {}, {::i2c::type_of<::Animancer::OptionalWarning>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void Animancer::Validate::Enable(::Animancer::OptionalWarning  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Enable", {}, {::i2c::type_of<::Animancer::OptionalWarning>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void Animancer::Validate::SetEnabled(::Animancer::OptionalWarning  type, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Animancer::OptionalWarning>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, enable);
}
inline void Animancer::Validate::Log(::Animancer::OptionalWarning  type, ::StringW  message, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"Log", {}, {::i2c::type_of<::Animancer::OptionalWarning>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, message, context);
}
inline void Animancer::Validate::ValueRule(::by_ref<float_t>  value, ::Animancer::Validate_Value  rule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"ValueRule", {}, {::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Animancer::Validate_Value>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, rule);
}
inline void Animancer::Validate::AssertNotLegacy(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertNotLegacy", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip);
}
inline void Animancer::Validate::AssertRoot(::Animancer::AnimancerNode*  node, ::Animancer::AnimancerPlayable*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertRoot", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, root);
}
inline void Animancer::Validate::AssertPlayable(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertPlayable", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
inline void Animancer::Validate::AssertCanRemoveChild(::Animancer::AnimancerState*  state, ::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*  childStates, int32_t  childCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Validate*>(),
                        {"AssertCanRemoveChild", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Animancer::AnimancerState*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, childStates, childCount);
}
// Ctor Parameters []
constexpr ::Animancer::Validate::Validate()   {
}
