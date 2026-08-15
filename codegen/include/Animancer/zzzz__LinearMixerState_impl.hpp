#pragma once
// IWYU pragma private; include "Animancer/LinearMixerState.hpp"
#include "Animancer/zzzz__MixerState_1_impl.hpp"
#include "Animancer/zzzz__LinearMixerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__LinearMixerState_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr  Animancer::LinearMixerState_ITransition::operator ::Animancer::ITransition_1<::Animancer::LinearMixerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::LinearMixerState*>* Animancer::LinearMixerState_ITransition::i___Animancer__ITransition_1___Animancer__LinearMixerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::LinearMixerState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::LinearMixerState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::LinearMixerState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::LinearMixerState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::LinearMixerState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::LinearMixerState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::LinearMixerState.get_ExtrapolateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::LinearMixerState::*)()>(&::Animancer::LinearMixerState::get_ExtrapolateSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"get_ExtrapolateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.set_ExtrapolateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)(bool)>(&::Animancer::LinearMixerState::set_ExtrapolateSpeed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18030d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"set_ExtrapolateSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.GetParameterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::LinearMixerState::*)(float_t)>(&::Animancer::LinearMixerState::GetParameterError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::LinearMixerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::LinearMixerState::Clone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030d4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.Animancer_ICopyable_Animancer_LinearMixerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)(::Animancer::LinearMixerState*)>(&::Animancer::LinearMixerState::Animancer_ICopyable_Animancer_LinearMixerState__CopyFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18030d180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"Animancer.ICopyable<Animancer.LinearMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::LinearMixerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.AssertThresholdsSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)()>(&::Animancer::LinearMixerState::AssertThresholdsSorted)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18030d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"AssertThresholdsSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.ForceRecalculateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)()>(&::Animancer::LinearMixerState::ForceRecalculateWeights)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18030d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.AssignLinearThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::LinearMixerState* (::Animancer::LinearMixerState::*)(float_t, float_t)>(&::Animancer::LinearMixerState::AssignLinearThresholds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"AssignLinearThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::LinearMixerState::AppendDetails)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::LinearMixerState::*)()>(&::Animancer::LinearMixerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.GetParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::LinearMixerState::*)(int32_t)>(&::Animancer::LinearMixerState::GetParameterName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.GetParameterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameterType (::Animancer::LinearMixerState::*)(int32_t)>(&::Animancer::LinearMixerState::GetParameterType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::LinearMixerState::*)(int32_t)>(&::Animancer::LinearMixerState::GetParameterValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)(int32_t, ::System::Object*)>(&::Animancer::LinearMixerState::SetParameterValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerState*>(),
                    {::i2c::class_of<::Animancer::LinearMixerState*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerState::*)()>(&::Animancer::LinearMixerState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Animancer::LinearMixerState::__cordl_internal_get__ExtrapolateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtrapolateSpeed;
}
constexpr bool const& Animancer::LinearMixerState::__cordl_internal_get__ExtrapolateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtrapolateSpeed;
}
constexpr void Animancer::LinearMixerState::__cordl_internal_set__ExtrapolateSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExtrapolateSpeed = value;
}
inline bool Animancer::LinearMixerState::get_ExtrapolateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"get_ExtrapolateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::LinearMixerState::set_ExtrapolateSpeed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"set_ExtrapolateSpeed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Animancer::LinearMixerState::GetParameterError(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::Animancer::AnimancerState* Animancer::LinearMixerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::LinearMixerState::Animancer_ICopyable_Animancer_LinearMixerState__CopyFrom(::Animancer::LinearMixerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"Animancer.ICopyable<Animancer.LinearMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::LinearMixerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::LinearMixerState::AssertThresholdsSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"AssertThresholdsSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::LinearMixerState::ForceRecalculateWeights()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::LinearMixerState* Animancer::LinearMixerState::AssignLinearThresholds(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {"AssignLinearThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::LinearMixerState*>(this, ___internal_method, min, max);
}
inline void Animancer::LinearMixerState::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline int32_t Animancer::LinearMixerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::LinearMixerState::GetParameterName(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::UnityEngine::AnimatorControllerParameterType Animancer::LinearMixerState::GetParameterType(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameterType>(this, ___internal_method, index);
}
inline ::System::Object* Animancer::LinearMixerState::GetParameterValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Animancer::LinearMixerState::SetParameterValue(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerState*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Animancer::LinearMixerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::LinearMixerState* Animancer::LinearMixerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::LinearMixerState*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::LinearMixerState*>"
constexpr  Animancer::LinearMixerState::operator ::Animancer::ICopyable_1<::Animancer::LinearMixerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::LinearMixerState*>* Animancer::LinearMixerState::i___Animancer__ICopyable_1___Animancer__LinearMixerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::LinearMixerState::LinearMixerState()   {
}
