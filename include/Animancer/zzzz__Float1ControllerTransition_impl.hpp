#pragma once
// IWYU pragma private; include "Animancer/Float1ControllerTransition.hpp"
#include "Animancer/zzzz__ControllerTransition_1_impl.hpp"
#include "Animancer/zzzz__Float1ControllerTransition_def.hpp"
#include "Animancer/zzzz__Float1ControllerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::Animancer::Float1ControllerTransition.get_ParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::StringW> (::Animancer::Float1ControllerTransition::*)()>(&::Animancer::Float1ControllerTransition::get_ParameterName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {"get_ParameterName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerTransition::*)()>(&::Animancer::Float1ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerTransition::*)(::UnityEngine::RuntimeAnimatorController*, ::StringW)>(&::Animancer::Float1ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18030ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Float1ControllerState* (::Animancer::Float1ControllerTransition::*)()>(&::Animancer::Float1ControllerTransition::CreateState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18030c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::Float1ControllerTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float1ControllerTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float1ControllerTransition::*)(::Animancer::Float1ControllerTransition*)>(&::Animancer::Float1ControllerTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18030c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::Float1ControllerTransition*>(), 39}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Animancer::Float1ControllerTransition::__cordl_internal_get__ParameterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterName;
}
constexpr ::StringW const& Animancer::Float1ControllerTransition::__cordl_internal_get__ParameterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterName;
}
constexpr void Animancer::Float1ControllerTransition::__cordl_internal_set__ParameterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterName = value;
}
inline ::by_ref<::StringW> Animancer::Float1ControllerTransition::get_ParameterName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {"get_ParameterName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::StringW>>(this, ___internal_method);
}
inline void Animancer::Float1ControllerTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Float1ControllerTransition::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float1ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterName);
}
inline ::Animancer::Float1ControllerState* Animancer::Float1ControllerTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float1ControllerTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Float1ControllerState*>(this, ___internal_method);
}
inline void Animancer::Float1ControllerTransition::CopyFrom(::Animancer::Float1ControllerTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float1ControllerTransition*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::Float1ControllerTransition* Animancer::Float1ControllerTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float1ControllerTransition*>());
}
inline ::Animancer::Float1ControllerTransition* Animancer::Float1ControllerTransition::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float1ControllerTransition*>(controller, parameterName));
}
/// @brief Convert operator to "::Animancer::Float1ControllerState_ITransition"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::Float1ControllerState_ITransition*() noexcept {
return static_cast<::Animancer::Float1ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Float1ControllerState_ITransition"
constexpr ::Animancer::Float1ControllerState_ITransition* Animancer::Float1ControllerTransition::i___Animancer__Float1ControllerState_ITransition() noexcept {
return static_cast<::Animancer::Float1ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float1ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float1ControllerState*>* Animancer::Float1ControllerTransition::i___Animancer__ITransition_1___Animancer__Float1ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float1ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::Float1ControllerTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::Float1ControllerTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::Float1ControllerTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>"
constexpr  Animancer::Float1ControllerTransition::operator ::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>* Animancer::Float1ControllerTransition::i___Animancer__ICopyable_1___Animancer__Float1ControllerTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Float1ControllerTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Float1ControllerTransition::Float1ControllerTransition()   {
}
