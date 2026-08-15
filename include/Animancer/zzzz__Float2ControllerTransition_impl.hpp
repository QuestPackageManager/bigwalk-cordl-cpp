#pragma once
// IWYU pragma private; include "Animancer/Float2ControllerTransition.hpp"
#include "Animancer/zzzz__ControllerTransition_1_impl.hpp"
#include "Animancer/zzzz__Float2ControllerTransition_def.hpp"
#include "Animancer/zzzz__Float2ControllerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::Animancer::Float2ControllerTransition.get_ParameterNameX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::StringW> (::Animancer::Float2ControllerTransition::*)()>(&::Animancer::Float2ControllerTransition::get_ParameterNameX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {"get_ParameterNameX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerTransition.get_ParameterNameY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::StringW> (::Animancer::Float2ControllerTransition::*)()>(&::Animancer::Float2ControllerTransition::get_ParameterNameY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {"get_ParameterNameY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerTransition::*)()>(&::Animancer::Float2ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerTransition::*)(::UnityEngine::RuntimeAnimatorController*, ::StringW, ::StringW)>(&::Animancer::Float2ControllerTransition::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Float2ControllerState* (::Animancer::Float2ControllerTransition::*)()>(&::Animancer::Float2ControllerTransition::CreateState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::Float2ControllerTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Float2ControllerTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Float2ControllerTransition::*)(::Animancer::Float2ControllerTransition*)>(&::Animancer::Float2ControllerTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                    {::i2c::class_of<::Animancer::Float2ControllerTransition*>(), 39}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Animancer::Float2ControllerTransition::__cordl_internal_get__ParameterNameX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterNameX;
}
constexpr ::StringW const& Animancer::Float2ControllerTransition::__cordl_internal_get__ParameterNameX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterNameX;
}
constexpr void Animancer::Float2ControllerTransition::__cordl_internal_set__ParameterNameX(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterNameX = value;
}
constexpr ::StringW& Animancer::Float2ControllerTransition::__cordl_internal_get__ParameterNameY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterNameY;
}
constexpr ::StringW const& Animancer::Float2ControllerTransition::__cordl_internal_get__ParameterNameY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterNameY;
}
constexpr void Animancer::Float2ControllerTransition::__cordl_internal_set__ParameterNameY(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterNameY = value;
}
inline ::by_ref<::StringW> Animancer::Float2ControllerTransition::get_ParameterNameX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {"get_ParameterNameX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::StringW>>(this, ___internal_method);
}
inline ::by_ref<::StringW> Animancer::Float2ControllerTransition::get_ParameterNameY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {"get_ParameterNameY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::StringW>>(this, ___internal_method);
}
inline void Animancer::Float2ControllerTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Float2ControllerTransition::_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterNameX, ::StringW  parameterNameY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Float2ControllerTransition*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, parameterNameX, parameterNameY);
}
inline ::Animancer::Float2ControllerState* Animancer::Float2ControllerTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float2ControllerTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Float2ControllerState*>(this, ___internal_method);
}
inline void Animancer::Float2ControllerTransition::CopyFrom(::Animancer::Float2ControllerTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Float2ControllerTransition*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline ::Animancer::Float2ControllerTransition* Animancer::Float2ControllerTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float2ControllerTransition*>());
}
inline ::Animancer::Float2ControllerTransition* Animancer::Float2ControllerTransition::New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::StringW  parameterNameX, ::StringW  parameterNameY)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Float2ControllerTransition*>(controller, parameterNameX, parameterNameY));
}
/// @brief Convert operator to "::Animancer::Float2ControllerState_ITransition"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::Float2ControllerState_ITransition*() noexcept {
return static_cast<::Animancer::Float2ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Float2ControllerState_ITransition"
constexpr ::Animancer::Float2ControllerState_ITransition* Animancer::Float2ControllerTransition::i___Animancer__Float2ControllerState_ITransition() noexcept {
return static_cast<::Animancer::Float2ControllerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>* Animancer::Float2ControllerTransition::i___Animancer__ITransition_1___Animancer__Float2ControllerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::Float2ControllerTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::Float2ControllerTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::Float2ControllerTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>"
constexpr  Animancer::Float2ControllerTransition::operator ::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>* Animancer::Float2ControllerTransition::i___Animancer__ICopyable_1___Animancer__Float2ControllerTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::Float2ControllerTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::Float2ControllerTransition::Float2ControllerTransition()   {
}
